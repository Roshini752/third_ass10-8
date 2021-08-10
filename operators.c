#include<stdio.h>
int main()
{
    int val,c,d,e,f,g,h,x,y,z; // declaration
    //Incrment & Decremnt operator  & (&-address operator) & sizeof--unary operator 
    int a=4,b=16;//initialization
    // pre increment  && post increment
    printf("inc a=%d  %d  %d  %d\n",++a,a++,--a,a--);  //4 2 2 4
    printf("%d\n",a);
    printf("%d %d %d\n",sizeof(a),sizeof(int),sizeof(4));
    printf("%p\n",&a);
    
    //arithmetic and assignment (=)  --binary
    printf("arithetic operator\n");
     
    int sum = a + b;
    int sub = a - b;
    int mul = a * b; 
    //char ch_m = 'b' % 'a';  
    int mod = b % a; // returns reminder
    float div = b/a; // returns ques 
    printf("sum=%d sub=%d mul=%d mod=%d div=%.2f\n\n",sum,sub,mul,mod,div);
    
    //logical && || !
    printf("logical operator\n");
    val = 0;  //initialization and assigning the value to variable b
    int logical_not = !val;
    int logical_and = a && val;
    int logical_or = a || val;
    printf("logical not is %d\nlogical and is %d\nlogical or is%d\n\n",logical_not,logical_and,logical_or);
    
    //relational > < <= >= == !=
    printf("relational operator\n");
    c = sum > sub;
    d = sum < sub;
    e = mul <= mod;
    f = mul >= mod;
    g = logical_and == logical_or;
    h = val != logical_not;
    printf("gt is %d\nlt is %d\nlte is %d\ngte is %d\nee is %d\nne is %d\n\n",c,d,e,f,g,h);
    
    //bit wise operator & | ^ << >> ~     --it performs bit level 
    printf("bit ise operaor\n");
    a=a|(1<<4);//set a bit
    printf("%d\n",a);
    x=a;
 
    b=b & ~(1<<4);//reset a bit
    printf("%d\n",b);
    y=b;
    
    sum=sum ^ (1<<5);//toggle a bit
    printf("%d\n",sum);
    z=sum;

    char ch='K';
    ch = ch >> 4;  //left shift 
    printf("ch = %c\n",ch);     //its not printing anything
    printf("ich = %d\n\n",ch);
    
    //conditional operator           condition?truepart:falsepart   -terinary
    printf("conditional operator\n");
    int max = (x>y)?((x>z)?x:z):((y>z)?y:z); // with this we can check the max of number
    printf("max = %d\n",max);

}

