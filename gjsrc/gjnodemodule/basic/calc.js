exports.add = function (a, b) {
    return a + b;
}

function sub(a, b) {
    return a - b;
}

exports.sub=sub;

class Calc {
    mul(a, b) {
        return a * b;
    }
}

exports.Calc = Calc;

exports.calc = new Calc();

exports.value = "hello world";