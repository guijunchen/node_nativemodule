cmd_Release/Calc_electron.node := c++ -bundle -undefined dynamic_lookup -Wl,-no_pie -Wl,-search_paths_first -mmacosx-version-min=10.7 -arch x86_64 -L./Release -stdlib=libc++  -o Release/Calc_electron.node Release/obj.target/Calc_electron/Calc.o 
