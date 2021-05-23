echo "Enter the file name : "  
read file_name
printf "#include <stdio.h>\n\nint main() {\n\t\n\treturn 0;\n}" > "$file_name.c"
echo "$first_name created"