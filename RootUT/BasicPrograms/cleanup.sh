#!/bin/bash

# clean script to remove all the compiled executables

for i in {0..8}; do
	exe="p${i}"
	
	if [[ -f "$exe" ]]; then
		rm "$exe"
	fi
done
echo "removed all"

