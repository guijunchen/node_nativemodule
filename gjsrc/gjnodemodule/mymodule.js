/*
module 对象 全局 包含一些自动对象
etc：id

export 和 module.export是一样的：
如果只向exports对象添加属性，是一样的，但是如果可以替换module.export对象，如module.exports = {}
exports = {} //不会替换
exports是module.exports的映射


 */

// console.log(module)
// require('./calc')
// var getName = require('./calc').getName
var add = require('./calc').add

// console.log(getName())
console.log(add(1,2))