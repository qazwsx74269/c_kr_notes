# c_kr_notes
Output some notes when I learn the book, The C programming language KR

My answers of Practice:

1-1
```
hello.c:2:1: warning: return type defaults to 'int' [-Wimplicit-int]
    2 | main()
      | ^~~~
hello.c: In function 'main':
hello.c:4:10: warning: missing terminating " character
    4 |   printf("hello, world
      |          ^
hello.c:4:10: error: missing terminating " character
    4 |   printf("hello, world
      |          ^~~~~~~~~~~~~
hello.c:5:19: warning: missing terminating " character
    5 |                   ");
      |                   ^
hello.c:5:19: error: missing terminating " character
    5 |                   ");
      |                   ^~~
hello.c:6:1: error: expected expression before '}' token
    6 | }
      | ^
hello.c:4:10: error: expected ';' before '}' token
    4 |   printf("hello, world
      |          ^
      |          ;
    5 |                   ");
    6 | }
      | ~
```
1-2
```
\c makes no sense. Just output the character 'c'. 
```
