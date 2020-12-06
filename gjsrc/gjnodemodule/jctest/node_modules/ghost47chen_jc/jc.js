function jc(n){
    if (n <1 ){
        return 1
    } else {
        return n * jc(n-1)
    }
}
function add(a, b, c) {
    return a + b + c;
}
// console.log(jc(3))
exports.jc = jc
exports.add = add