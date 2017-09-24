# c_noob

re-learning C with K&R

## Notes
* Data types
  * long, short
  * int, char, double, float
  * const, extern, enum, register, unsigned
  * `'c'` character constant vs `"c"` string
  * static (scoped locally to file)
* Directives
  * include, define, undef
  * `# if !defined(HDR); # define HDR; # endif`
  * if, elif, endif, else
* Compaitibility
  * functions with no args should take void
* Operators
  * prefix/postifx increment/decrement
  * bitwise `&`, `|`, `^` (xor), <<, >>, `~` (one's compliment)
  * `&` unary = address of
  * `*` unary = the thing it points to
* Control flow
  * `if..else if..else`
  * `switch { case 0: case 1: ... break; case 2: ... break; default: ... break; }`
* Libraries
  * `ctype` (`isdigit(), isspace()`)
  * `stdio` (`getchar()`)
  * `string` (`strlen()`)
* Initialization
  * `int days[] = { 31, 45, 66 }`
  * `char pattern[] = "ould";
* `extern` will not reserve storage when declared while a normal declaration will
* `static` is private to source file
