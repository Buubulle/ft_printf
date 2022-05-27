# ft_printf

## Desciption

the ft_printf function will reproduce the printf function without the precision

### Prototypage
```C
int ft_printf( const char *, ... );
```

### Type conversion specifier

| Format specifier | Suitable type | Output format |
| --- | --- | --- |
| `c` | `char` | Single-bytes charcater. | 
| `s` | `char *` | Single-byte or multi-byte character string |
| `p` | `unsigned long` | Address in hexadecimal digits. |
| `d` | `int` | Signed decimal integer. |
| `i` | `int` | Signed decimal integer. | 
| `u` | `unsigned int` | Unsigned decimal integer. |
| `x` | `unsigned int` | Unsigned hexadecimal integers (using "`abcdef`"). |
| `X` | `unsigned int` | Unsigned hexadecimal integers (using "`ABCDEF`"). |
| `%` | `NONE` | Display the `%` character |
