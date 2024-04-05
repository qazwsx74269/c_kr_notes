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

1-3
```
#include <stdio.h>

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Fahrenheit-Celsius Table\n");

  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
```

1-4
```
#include <stdio.h>

main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = (0 - 32) * 5.0 / 9.0;
  upper = (300 - 32) * 5.0 / 9.0;
  step = 20 * 5.0 / 9.0;

  celsius = lower;

  printf("Celsius-Fahrenheit Table\n");

  while(celsius <= upper) {
    fahr = celsius * 9.0 / 5.0 + 32;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
```

1-5
```
#include <stdio.h>

main()
{
  int fahr;

  for(fahr = 300; fahr >= 0; fahr = fahr - 20)
	printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
```

1-6
```
1
```

1-7
```
#include <stdio.h>

main() {
    int c;
    printf("EOF=%d\n", EOF);
    while((c=getchar()) != EOF){
        putchar(c);
    }
}
```
