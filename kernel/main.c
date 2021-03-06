//
// main.c
//
// created at 27/03/2021 10:07:53
// written by llamaking136
//

// MIT License
//     
// Copyright (c) 2021 llamaking136
//     
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//     
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//     
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#include "main.h"

char* current_module = "";

void print(string str, ...) {
	va_list arg;
	va_start(arg, str);

	char* msg;
	vsprintf(msg, str, arg);
	printf(msg);

	va_end(arg);
}

void kmain() {
	module("main")
	kinit();
	
	// panic("test -- \"%s\", '%c', %d", "ree", '6', 420);
	
	// assert(3 == 4);
	print("Oh no! My %d cats are getting loose!\n", 21);

	while (1) getch(); // print all characters typed
	
	for (;;); // infinite loop for all eternity
}
