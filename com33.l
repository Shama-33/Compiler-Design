%{

    #include <bits/stdc++.h>
	#include "com33.tab.h"
	extern YYSTYPE yylval;
    
    using namespace std;

    int yylex();
    extern  int yyerror(string s);
    int yylineno = 1;


    int input(void) {
    return getc(yyin);
    }




%}

%option noyywrap

white [ \t] 
id [A-Za-z][a-zA-Z0-9_@]*




%%


{white}*\<import\>{white}+\<[0-9A-Za-z_]+.lib\>{white}*  {return DIR;}
{white}*\<include\>{white}+\<[0-9A-Za-z_]+.h\>{white}*  {return USER_DIR;}

{white}*\~\!.* { cout<<"line "<<yylineno<<"  : SINGLE_LINE_COMMENT"<<endl; return SINGLE_LINE_COMMENT;}
"#"[^#]*"#" 	{ string yytext1= yytext;
                     for(int i=0;i<yytext1.size();i++)
                       {   
                          if(yytext[i]=='\n')
                             {
                                yylineno++;
                             }          

                       }
           cout<<"line "<<yylineno<<"  : MultiLine Comment Ends."<<endl;
    return MULTI_LINE_COMMENT;}




{white}*\;{white}*    {return NOSPACE_SPACE_SEMICOLON;}
{white}*\,{white}*     {return NOSPACE_SPACE_COMMA;}



{white}*\={white}*    {return ASSIGN;}


{white}*\+{white}*  {return PLUS;}
{white}*\-{white}*    {return MINUS;}
{white}*\*{white}*   {return MUL;}
{white}*\/{white}*      {return DIV;}
{white}*\%{white}*     {return MOD;}
{white}*OR{white}*      {return OR;}
{white}*AND{white}*         {return AND;}
{white}*NOT{white}*         {return NOT;}
{white}*ORbit{white}*          {return BITWISEOR;}
{white}*ANDbit{white}*        {return BITWISEAND;}
{white}*XORbit{white}*       {return BITWISEXOR;}


{white}*\=\={white}*    {return EQ;}
{white}*">="{white}*   {return GREATEREQ;}
{white}*"<="{white}*  {return LESSEQ;}
{white}*"!="{white}* 	{return NOTEQUAL;}
{white}*\>{white}*   {return GREATER;}
{white}*\<{white}*  {return LESS;}


{white}*\!{white}*	  {return FACT;}
{white}*\^{white}*   {return POW;}
{white}*\:{white}*   {return COLON;}




if		{return IF;}
elif	{return ELSEIF;}
else	{return ELSE;}
begif  {return BEGIF;}
endif   {return ENDIF;}
observe			{return SWITCH;}
default			{return DEFAULT;}
scenario   {return CASE;}


for		{return FOR;}
next   {return NEXT;}
out  {return BREAK;}
LoopStart {return LOOPSTART;}
LoopEnd {return LOOPEND;}
Range {return RANGE;}
RepeatWhile {return WHILE;}



print			{return PRINT;}
input   {return CIN;}



Core {cout<<"Core Function"<<endl;return MAIN;}
{white}*"("{white}*	{return LeftPAR;}
{white}*")"{white}*		{return RightPAR;}
begin	{cout<<"Function begins"<<endl;return BEGINN;}
end		{cout<<"Function ends"<<endl;return ENDD;}
Function   {return FUNCTION;}
{white}*"{"{white}*	{return RETBEGIN;}
{white}*"}"{white}*		{return RETEND;}
Void {return VOID;}
return {return RETURN;}
Invite {return CALL;}
arg {return ARG;}






\<predefine\> {return DEFINE;}


Constant {return CONSTANT;}




Integer {return INTEGER;}

Fraction {return FLOAT;}

String {return STRING;}

Binary {return BOOLEAN;}

Symbol {return CHARACTER;}


true {yylval.str=strdup(yytext);
             return BOOLVALUE1;}
false {yylval.str=strdup(yytext);
             return BOOLVALUE0;}


{id} { yylval.str=strdup(yytext);
         return IDENTIFIER;}


[+-]?[0-9]+   {yylval.integer=atoi(yytext);
             return INTEGERVALUE;}
[+-]?[0-9]+\.[0-9]+  {yylval.Float=atof(yytext);
                      return FLOATVALUE;}
\'.\' { yylval.c=yytext[1];
     return CHARVALUE;}
\"([^\\\"]|\\.)*\"  {yylval.str=strdup(yytext);
                    return STRINGVALUE;}






[\n] { yylineno++;}




[ \t\n]   // Skip whitespace





%%


