# NOVOS
---
Novos is a programing language losely based on asembly, but with a syntax more like c.

# SYNTAX
~~~
~ Add Librays Here
#use "sysio";
#use "sleep";

~ Body Label, like main() in c
@BODY {
  sysio.print("Hello World!\n");
    ~ nums work as both ints and floats
  num time = !((0|1)&(!1)); ~ Equals 1
  acall ASYNC_LABEL; ~ Asynchronously call a label, program continues on
  call LABEL; ~ Runs code in @LABEL, then runs the code below, unlike acall
  return;
}

~ Labels act as functions, 
@LABEL {
  sysio.print("I am a Label\n");
  return;
}

@ASYNC_LABEL {
  sleep.sleep(time);
  sysio.print("I am an async Label\n");
  return; ~ Returns to where the label was called from, unless asynchronously called, then the label ends and the thred is stopped
}

~~~
### OUTPUT
~~~
Hello World!
I am a Label
I am an async Label
~~~