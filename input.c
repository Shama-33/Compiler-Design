# Compiler Project 1907033
  Flex and bison #

~! Directives : System libraries
<import> <inout.lib>
<import> <stl.lib>

~! Directives : User defined header
<include> <file.h>

<import> <py.lib>

 ~!Global Variable and Constant
 Integer global_i = 8;
 Constant Fraction GLOBAL_F = 7.5;
 Symbol sym = '1';
 String global_str;

 ~!Function
Function function (Integer r, Integer y) { Integer }
begin
arg ( r ) = 5 ;
Integer x = arg ( r ) ;
print ( x );
return 5;
end

Core ( ) { }
begin
Integer integer,integer1=1;
Fraction fraction = 9.5 , fraction1;
Symbol sym1 = 's', sym2;
String string1 ;
Binary bin1 = true;
Binary bin2 = "true";
integer = 8 + 7 + 1;
print ( "integer value : ", integer);
string1= "abc ";
Invite fun ( 3 , 4);
Invite function ( 1 , 2, 3);
Invite function ( 1 , 2 );
Invite function ( 1 , integer );
Constant Integer const = 9;
const = 10;
integer1 = const;
integer1= integer1 + 1*10;
print (12.09);
print ("Enter an integer : ");
~!input (integer1);
print (integer1);
print("String");
Integer bi=90 + 6,ci = bi + 34,aiii;
ci = bi + 6;


for ( bi : bi>89 : 2)
    LoopStart
    3 < 4 ;
    aiii = 889;
    LoopEnd
aiii = 80;
for ( bi : bi<89 : 2)
    LoopStart
    for ( aiii : bi<89 : 2)
    LoopStart
    print ("Aiii : ", aiii);
    LoopEnd
    out
    next
    LoopEnd
Integer x1=0;
Range ( 1 : 100 : 20 )
    LoopStart
    Fraction frax=0.0;
    Range ( 1 : 10 : 2 )
    LoopStart
    Integer x0=0;
    LoopEnd
    LoopEnd
Integer x0=0;

RepeatWhile ( x1 == 0 )
LoopStart
Range ( 1 : 100 : 20 )
LoopStart
LoopEnd
Integer x0=0;
LoopEnd

Integer aii = 90;
observe ( aii )
begif
scenario 90 :
    print (" sce0", 90 );
scenario 5 :
    print (" sce1 ", 5 );
default :
endif


if ( 0 )
    begif
    print ( 5 );
elif ( 0 )
    print ( "else if" );
elif ( 1 )
    print ( "else if" );
else
    print ( "else " );
endif

if ( 1 )
    begif
    if ( 1 )
    begif
    endif
endif

Range ( 1 : 100 : 20 )
LoopStart
if ( 0 )
    begif
    print ( 5 );
elif ( 0 )
    print ( "else if" );
elif ( 1 )
    print ( "else if" );
else
    print ( "else " );
endif
LoopEnd

Integer x = 2;
Integer y =3;
Integer z = x ORbit y ;
return;
end




Function fun ( Integer X , Fraction rtfrac ) { Void }
begin
Binary bin = true ;
return ;
end

Function fun_to_call ( Integer Xio , Fraction rtfracy ) { Void }
begin
Integer xop = 1;
arg ( Xio ) = xop ;
Integer gk;
gk = arg ( Xio );
Constant Fraction gh = 7.9;
print ( 3 < 4 );
return ;
end

