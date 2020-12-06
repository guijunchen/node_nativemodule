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

module.exports.value = "hello world";

console.log(module)

//完全替换上面
// module.exports = {getName: function () {
//         return "lining"
//     }}
//不会替换 //会报不存在
exports = { getName: function () {
    return "lining"
}}

console.log(module)