/*
模块搜索路径


 */
console.log('new_mystring')
exports.repeatStr = function(str,n) {
    var result = "";
    for(var i = 0; i < n;i++) {
        result += str;
    }
    return "【" + result + "】";
}

