extern int ml_func(int,int);
extern const int myconst;
extern int myglob;

int (*f)(int,int) = ml_func;

void ml_func4(void)
{
    f(myconst, myglob);
}
