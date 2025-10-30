#!/bin/bash

# this go.sh will automatically compile the c programs for you
# without this you'd have to run "gcc -O0 program.c -o program

for i in {0..8}; do
	src="p${i}.c"
	exe="p${i}"

	if [[  -f "$src"  ]]; then 
		if [[ ! -f "$exe" ]]; then
			gcc -O0 "$src" -o "$exe"
			chmod +x "$exe"
		fi
	fi
done
echo "compiled"


