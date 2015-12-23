var assert = require('assert');
var approx = require('./build/Release/node-fastapprox');
var math = Math;

var testList = ['pow', 'cosh', 'tan', 'log', 'pow2', 'sin', 'log2', 'sinh', 'cos', 'tanh', 'exp'];
const EPS = 1E-1;

math.pow2 = function(x) {
    return Math.pow(2, x);
};

for (index in testList) {
    var name = testList[index];

    assert.doesNotThrow(
        function() {
	    var testCase;
	    var standard, fast;
	    if (name == 'pow') {
		testCase = [Math.random() * (1 - 0) + 0, Math.random() * (1 - 0) + 0];
		standard = math[name](testCase[0], testCase[1]);
		fast = approx[name](testCase[0], testCase[1]);
	    }
	    else {
		testCase = Math.random() * (1 - 0) + 0;
		standard = math[name](testCase);
		fast = approx[name](testCase);
	    }
            console.log("Test " + name + "(" + testCase + ")");
            console.log("\tStandard: " + standard + "; Fastapprox: " + fast);
            if (math.abs(standard - fast) > EPS)
                throw new Error("Test failed on " + name);
        }
    );
}
