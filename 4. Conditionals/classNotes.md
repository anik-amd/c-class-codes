# 💡 Conditionals

### 🔅 if - else

Say, **A** is a set containing all the true cases.

So **A'** must be the set with all the false cases.

Codes in `if` block runs only for true cases. In other word only for elements of set **A**.

Codes in `else` block runs only for cases that are not true. In other word only for elements of set **A'**.

### 🔅 Check whether a number is even

```
if(number % 2 == 0) {
		printf("%d is even.", number);
	} else {
		printf("%d is odd.", number);
	}
```

### Ternary Conditional Operators

```
condition ? exp1 : exp2
```

Here,

-   `condition` is an expression which will be executed first. It can only be true or false.
-   `exp1` will be executed if `condition` is true.
-   `exp2` will be executed if `condition` is false.

For example,

```
int max, b, c;
max = (b > c) ? b : c;
```

Here, if `b > c` then `max` will be `b`. Else `max` will be `c`.
