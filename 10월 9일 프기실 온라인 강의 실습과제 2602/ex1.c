/*
if(x==-1)
num--;
else if(x==1)
num++;
else
num=0;
*/


switch (x) {
case -1:
    num--;
    break;
case 1:
    num++;
    break;
default:
    num = 0;
}


/*
switch(code)
{
case ¡®X¡¯:
x++;
break;
case ¡®Y¡¯:
y++;
break;
default:
x=y=0;
break;
}

*/


if (code == 'X')
x++;
else if (code == 'Y')
y++;
else
x = y = 0;

