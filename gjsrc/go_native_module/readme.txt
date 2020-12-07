用go语言开发node.js和Electron本地模块

将Calc.go编译成Calc.a

go build -buildmode c-archive -o Calc.a Calc.go
$ go build -buildmode c-archive -o Calc.a Calc.go
$ ls
Calc.a  Calc.go  Calc.h  readme.txt