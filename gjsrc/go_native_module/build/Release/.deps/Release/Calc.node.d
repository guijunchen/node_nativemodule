cmd_Release/Calc.node := ln -f "Release/obj.target/Calc.node" "Release/Calc.node" 2>/dev/null || (rm -rf "Release/Calc.node" && cp -af "Release/obj.target/Calc.node" "Release/Calc.node")
