require('./mystring')
// require('./mystring') //已经加载在内存，不会重装多次 只要引用同一个文件，都会只会引用一次。
require('mystring') //不同文件，会加载
var repeatStr = require('./mystring').repeatStr

console.log(repeatStr("c", 20))