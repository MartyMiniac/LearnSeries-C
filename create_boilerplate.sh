echo "Enter the file name : "  
read file_name
echo "Description about the program : "  
read comment
printf "//$comment\n\n#include <stdio.h>\n\nint main() {\n\t\n\treturn 0;\n}" > "$file_name.c"
echo "file created"