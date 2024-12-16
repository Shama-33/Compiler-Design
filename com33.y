
%{
	#include <iostream>
     #include <bits/stdc++.h>
	 #include <string>
	 #include <map>


   using namespace std;
   extern int yylex();
   int yyerror(string s);
   extern int yyparse();
   extern FILE *yyin;
   extern int yylineno;

   int currentDatatype;



   int trackforloop=1;
   int trackrangeloop=1;
   int trackwhileloop=1;
    
	int trackif=-1;
	int is_nested=0;
	int is_else_if=0;
	int which_if_exe=0;
	

	int trek=0,trekflag=0,t=0;


	

   
  map <string,int> function_parameter_temp;

   int match_arg=0;
   bool condition = false;
   int p=0;

  map <string, int> functionMap;



map<string, int> variableMap;

int GetValue(const string& var) {
    auto it = variableMap.find(var);
    if (it != variableMap.end()) {
        return it->second;
    }
    return 0;
}

bool is_declared(const string& var) {
    return variableMap.find(var) != variableMap.end();
}

bool SetValue(const string& var, int val) {
    if (is_declared(var)) {
        return false; 
    }

    variableMap[var] = val;
    return true; 
}




map<string, int> intvariableMap;

   void intvalueUpdate(const string& var, int val) {
        intvariableMap[var] = val;
      }

int intGetValue(const string& var) {
    auto it = intvariableMap.find(var);
    if (it != intvariableMap.end()) {
        return it->second;
    }
    return 0;
}

bool intSetValue(const string& var, int val) {
    if (is_declared(var)) {
        return false; 
    }

    intvariableMap[var] = val;
	variableMap[var]=1;
    return true; 
}

map<string, float> floatvariableMap;

   void floatvalueUpdate(const string& var, float val) {
        floatvariableMap[var] = val;
      }

float floatGetValue(const string& var) {
    auto it = floatvariableMap.find(var);
    if (it != floatvariableMap.end()) {
        return it->second;
    }
    return 0;
}

bool floatSetValue(const string& var, float val) {
    if (is_declared(var)) {
        return false; 
    }

    floatvariableMap[var] = val;
	variableMap[var]=2;
    return true; 
}


map<string, char> charvariableMap;

   void charvalueUpdate(const string& var, char val) {
        charvariableMap[var] = val;
      }

char charGetValue(const string& var) {
    auto it = charvariableMap.find(var);
    if (it != charvariableMap.end()) {
        return it->second;
    }
    return 'a';
}

bool charSetValue(const string& var, char val) {
    if (is_declared(var)) {
        return false; 
    }

    charvariableMap[var] = val;
	variableMap[var]=3;
    return true; 
}



map<string, string> strvariableMap;

   void strvalueUpdate(const string& var, string val) {
        strvariableMap[var] = val;
      }

string strGetValue(const string& var) {
    auto it = strvariableMap.find(var);
    if (it != strvariableMap.end()) {
        return it->second;
    }
    return "null";
}


bool strSetValue(const string& var, string val) {
    if (is_declared(var)) {
        return false; 
    }

    strvariableMap[var] = val;
	variableMap[var]=5;
    return true; 
}

map<string, string> boolvariableMap;

   void boolvalueUpdate(const string& var, string val) {
        boolvariableMap[var] = val;
      }

string boolGetValue(const string& var) {
    auto it = boolvariableMap.find(var);
    if (it != boolvariableMap.end()) {
        return it->second;
    }
    return "null";
}


bool boolSetValue(const string& var, string val) {
    if (is_declared(var)) {
        return false; 
    }

    boolvariableMap[var] = val;
	variableMap[var]=5;
    return true; 
}



 
  


%}





%union {
    char* str;
	int integer;
	char c;
	float Float;
}

/*  Token Start */

%token DIR  USER_DIR SINGLE_LINE_COMMENT DEFINE INTEGER FLOAT DOUBLE STRING CHARACTER BOOLEAN NOSPACE_SPACE_SEMICOLON NOSPACE_SPACE_COMMA MULTI_LINE_COMMENT
%token ASSIGN 
%token LESS GREATER LESSEQ GREATEREQ EQ NOTEQUAL 
%token PLUS MINUS MUL DIV FACT MOD POW COLON 
%token OR AND NOT BITWISEOR BITWISEAND BITWISEXOR 
%token MAIN LeftPAR RightPAR BEGINN ENDD FUNCTION RETBEGIN RETEND VOID RETURN CALL ARG
%token  IF ELSEIF ELSE FOR SWITCH DEFAULT PRINT CASE CIN NEXT BREAK CONSTANT BEGIF ENDIF LOOPEND LOOPSTART RANGE WHILE




%token <str> BOOLVALUE1

%token <str> BOOLVALUE0
%token <c> CHARVALUE
%token <integer> INTEGERVALUE
%token <Float> FLOATVALUE
%token <str> STRINGVALUE

%token <str> IDENTIFIER


%right ASSIGN 
%left LESS GREATER LESSEQ GREATEREQ EQ NOTEQUAL
%left AND
%left OR
%left BITWISEAND
%left BITWISEOR
%left BITWISEXOR
%left PLUS MINUS
%left MUL DIV MOD
%left FACT
%right POW



%nonassoc UMINUS



/* Token End */

%type <str> id
%type <integer> exp 
%type <str> str_exp
%type <c> char_exp
%type <Float> float_exp
%type <str> bool_exp
%type <integer> value
%type <integer> condition
%type <integer> condition1
%type <integer> value1
%type <str> datatype1






/*

*/







/* CFG */
%%


start		: line globe function main function {cout<<"\n\n------------------Compiled Successsfully-------------------\n\n"<<endl;}
			;


line:  
     | line dir 
	 | line SINGLE_LINE_COMMENT
	 | line MULTI_LINE_COMMENT 
	 | dir 
	 | SINGLE_LINE_COMMENT 
	 | MULTI_LINE_COMMENT 	 
	 ;


globe:   
		| globe declaration 
		| declaration 
		| globe SINGLE_LINE_COMMENT 
	    | globe MULTI_LINE_COMMENT  
		| SINGLE_LINE_COMMENT 
	    | MULTI_LINE_COMMENT 
		| globe const
	  ;


main	: MAIN LeftPAR RightPAR RETBEGIN RETEND BEGINN statement ret ENDD{cout<<" Core Function complete at line "<<yylineno<<endl;}
        
			;


statement	:    
			| statement declaration  
			|declaration  
			| statement SINGLE_LINE_COMMENT 
	        | statement MULTI_LINE_COMMENT 
		    | SINGLE_LINE_COMMENT 
	        | MULTI_LINE_COMMENT 
			|statement Arithmetic 
			|Arithmetic 
			|statement print 
			|print 
			|statement input 
			|statement ifs 
			|statement exp NOSPACE_SPACE_SEMICOLON
			|statement loop
			|statement range
			|statement while
			|statement call
			|statement switch
			|statement const
						
		
			;



/*header files */
dir: DIR {cout<<"line "<<yylineno<<"  : System Library"<<endl;} 
    |USER_DIR {cout<<"line "<<yylineno<<"  : User Header"<<endl;}
	 ;




/*function*/

function:  
        |function FUNCTION IDENTIFIER LeftPAR param RightPAR RETBEGIN datatype1 RETEND BEGINN statement ret ENDD       {


		                                                                                auto paramTempIter = functionMap.find($3);
                                                                                        if (paramTempIter != functionMap.end()) {
																							cout<<"Error : Function Already exists . line "<<yylineno<<endl;
                                         
                                                                                           } else {
																							 cout<<" Function declaration complete at line "<<yylineno<<endl;
		                                                                                          functionMap[$3]=p;
																								
																								  cout<< "no_arg : "<<functionMap[$3]<<endl;
                                 
                                                                                               }
			                                                                                        p=0;
																								  function_parameter_temp.clear();}
		;
datatype1: 
|datatype
|VOID      
;
param:   {cout<<"no parameter"<<endl;}
     | datatype1 IDENTIFIER  {p++; function_parameter_temp[$2]=0;}
	 |param NOSPACE_SPACE_COMMA param
	 ;
ret: 
|RETURN NOSPACE_SPACE_SEMICOLON
|RETURN exp NOSPACE_SPACE_SEMICOLON 
;



call : CALL IDENTIFIER LeftPAR callparam RightPAR NOSPACE_SPACE_SEMICOLON          {string functionName = $2;
                                                                                        if (functionMap.find(functionName) != functionMap.end()) {
                                                                                         int result = functionMap[functionName];
    
                                                                                           if(match_arg != result)
																						   {
																							 cout << "\nERROR : Function has " << result << " parameters. It does not match with "<<match_arg<<" number . line : " <<yylineno<< endl;
																						   }
																						   else 
																						   {
																							printf("\n Line - %d : Function called with %d parameters.\n",yylineno,match_arg);
																						   }
                                                                                               } else {
                                                                                          cout << "Error : Function " << functionName << " not found. line "<<yylineno << endl;
                                                                                         }
																						 match_arg=0;}
      
	  ;

callparam:  
        | callparam NOSPACE_SPACE_COMMA callparam
	    |INTEGERVALUE              {match_arg++;}
		| FLOATVALUE           {match_arg++;}
		|STRINGVALUE         {match_arg++;}
		|BOOLVALUE0     {match_arg++;}
		|BOOLVALUE1    {match_arg++;}
		|CHARVALUE {match_arg++;}
		|IDENTIFIER  {match_arg++;if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Function %s is not is_declared\n",yylineno,$1);

									
											
		                       
	                        }}














/*variable declaration */

declaration: datatype idName NOSPACE_SPACE_SEMICOLON  {cout<<"line "<<yylineno<<"  : Variable Declared\n"<<endl;} 
            ;

datatype: INTEGER {cout<<"\nline "<<yylineno<<" : Datatype : Integer "; currentDatatype=1;}
         | FLOAT {cout<<"\nline "<<yylineno<<"  : Datatype : Float/Fraction "; currentDatatype=2;}
		 |CHARACTER {cout<<"\nline "<<yylineno<<"  : Datatype : character/symbol "; currentDatatype=3;}
		 |STRING {cout<<"\nline "<<yylineno<<" : Datatype : string "; currentDatatype=4;}
		 |BOOLEAN {cout<<"\nline "<<yylineno<<"  : Datatype : Boolean/Binary "; currentDatatype=5;}
         ;
idName: id NOSPACE_SPACE_COMMA idName
        |id
		   	
       ; 
id:IDENTIFIER  {cout<<",Variable "<<$1<<endl;

                      bool  x=0;
					if (currentDatatype==1)
					{
                               x = SetValue($1,1);
					}
					else if (currentDatatype==2)
					{
                               x = SetValue($1,2);
					}
					else if (currentDatatype==3)
					{
                               x = SetValue($1,3);
					}
					else if (currentDatatype==4)
					{
                             x = SetValue($1,4);
					}
					else if(currentDatatype==5)
					{
                               x = SetValue($1,5);
					}

                      
               
				 if(!x) {
						  printf("Compilation Error: Line no: %d   Variable %s is already is_declared\n",yylineno,$1);
						 
						}}


	| IDENTIFIER ASSIGN exp  {    if (currentDatatype !=1)

	                                      {
											cout << "\nCompilation Error : attempt to assign a integer value to a non integer variable line "<<yylineno<<endl;
										  }
										  else
										  {
											cout<<"\nline : "<<yylineno<<" Variable : "<<$1<<" "<<"initialized with "<<$3<<endl;
										bool x = intSetValue($1,$3);
										if(!x) {
											cout << "\nCompilation Error : Variable "<<$1<<"is already declared"<<yylineno<<endl;
											
											}

										  }
		
		                             
                             }
	
	|  IDENTIFIER ASSIGN float_exp  {    if (currentDatatype !=2 )

	                                      {
											cout << "\nCompilation Error : attempt to assign a float value to a non float variable line "<<yylineno<<endl;
										  }
										  else
										  {
											cout<<"\nline : "<<yylineno<<" Variable : "<<$1<<" "<<"initialized with "<<$3<<endl;
									    float f = $3*1.0;
										bool x = floatSetValue($1,f);
										if(!x) {
												cout << "\nCompilation Error : Variable "<<$1<<"is already declared"<<yylineno<<endl;
											
											}
										  }
		
		                             
                             }

	 |  IDENTIFIER ASSIGN char_exp  {    if (currentDatatype !=3)
	                                      {
											cout << "\nCompilation Error : attempt tp assign a symbol value to a non character variable line "<<yylineno<<endl;
										  }
		                                else
										{
                                                 cout<<"\nline : "<<yylineno<<" Variable : "<<$1<<" "<<"initialized with "<<$3<<endl;
										bool x = charSetValue($1,$3);
										if(!x) {
											cout << "\nCompilation Error : Variable "<<$1<<"is already declared"<<yylineno<<endl;
											
											}
										}

		                            
                             }
		|  IDENTIFIER ASSIGN str_exp  {   
			                                    if (currentDatatype != 4)
	                                      {
											
											cout << "\nCompilation Error : attempt to assign a string value to a non string variable line "<<yylineno<<endl;
										  }
										  else
										  {
											
		                             cout<<"\nline : "<<yylineno<<" Variable : "<<$1<<" "<<"initialized with "<<$3<<endl;
										bool x = strSetValue($1,$3);

										if(!x ) {
												cout << "\nCompilation Error : Variable "<<$1<<"is already declared"<<yylineno<<endl;
											
											}

										  }
		                                
                             }
		|  IDENTIFIER ASSIGN bool_exp  {    if (currentDatatype !=5)
	                                      {
											cout << "\nCompilation Error : attempt to assign a bool value to a non boolean variable line "<<yylineno<<endl;
										  }
										  else
										  {
                                                  cout<<"\nline : "<<yylineno<<" Variable : "<<$1<<" "<<"initialized with "<<$3<<endl;
										bool x = boolSetValue($1,$3);
										if(!x) {
											cout << "\nCompilation Error : Variable "<<$1<<"is already declared"<<yylineno<<endl;
											
											}





										  }
		
		                            
                             }
	
	
  ;


/*Constants */


const : CONSTANT datatypeconst constId NOSPACE_SPACE_SEMICOLON;
;
datatypeconst : INTEGER {currentDatatype=10;}
              | FLOAT  {currentDatatype=11;}
			  ;
constId : conId NOSPACE_SPACE_COMMA constId
         | conId
        ;
conId :
        |IDENTIFIER ASSIGN exp  {    if (currentDatatype !=10)

	                                      {
											cout << "\nError : attempt tp assign a integer value to a non integer constant line "<<yylineno<<endl;
										  }
										  else
										  {
											cout<<"\nIdentifier : "<<$1<<" "<<"value: "<<$3<<" Line : "<<yylineno<<endl;
										//bool x = intSetValue($1,$3);
										if(!is_declared($1))
										{variableMap[$1]=10;
										intvariableMap[$1]=$3 ;
										cout<<"Line : "<<yylineno<<"Constant declared: "<<endl; }
										else {
											printf("Compilation Error:Line no: %d   Constant is already declared\n",yylineno,$1);
											
											}

										  }
		
		                             
                             }
		  |IDENTIFIER ASSIGN float_exp  {    if (currentDatatype !=11)

	                                      {
											cout << "\nError : attempt to assign a float value to a non float constant line "<<yylineno<<endl;
										  }
										  else
										  {
											cout<<"\nIdentifier : "<<$1<<" "<<"value: "<<$3<<" Line : "<<yylineno<<endl;
										//bool x = intSetValue($1,$3);
										if(!is_declared($1))
										{variableMap[$1]=11;
										floatvariableMap[$1]=$3 ;
										cout<<"Constant declared"<<endl; }
										else {
											printf("Compilation Error:Line no: %d   Constant is already declared\n",yylineno,$1);
											
											}

										  }
		
		                             
                             }
	;


















  /* Arithmetic Statement */
Arithmetic: IDENTIFIER ASSIGN exp NOSPACE_SPACE_SEMICOLON {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							else if (GetValue($1)==1 )
							{
								
								intvalueUpdate($1,$3);
								cout<<"\nline : "<<yylineno<<" value "<<$3<<" assigned to "<<$1<<endl;
							}
							  else{
									
									printf("Compilation Error:\nLine no: %d   Variable %s is not of integer type or is contant\n",yylineno,$1);
							
								  }
							}
			| IDENTIFIER ASSIGN str_exp NOSPACE_SPACE_SEMICOLON {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							else if (GetValue($1)!=4)
							{
								printf("Compilation Error:\nLine no: %d   Variable %s is not of string type\n",yylineno,$1);
							}
							  else{
									strvalueUpdate($1,$3);
									cout<<"\nline : "<<yylineno<<" value "<<$3<<" assigned to "<<$1<<endl;
							
								  }
							}
	| IDENTIFIER ASSIGN float_exp NOSPACE_SPACE_SEMICOLON {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							else if (GetValue($1)==2 )
							{
								
								floatvalueUpdate($1,$3);
								cout<<"\nline : "<<yylineno<<" value "<<$3<<" assigned to "<<$1<<endl;
							}
							  else{
									
							               printf("Compilation Error:\nLine no: %d   Variable %s is not of float type or is constant\n",yylineno,$1);
								  }
							}
				| IDENTIFIER ASSIGN char_exp NOSPACE_SPACE_SEMICOLON {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							else if (GetValue($1)!=3)
							{
								printf("Compilation Error:\nLine no: %d   Variable %s is not of char type\n",yylineno,$1);
							}
							  else{
									charvalueUpdate($1,$3);
									cout<<"\nline : "<<yylineno<<" value "<<$3<<" assigned to "<<$1<<endl;
							
								  }
							}

				| IDENTIFIER ASSIGN bool_exp NOSPACE_SPACE_SEMICOLON {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							else if (GetValue($1)!=5)
							{
								printf("Compilation Error:\nLine no: %d   Variable %s is boolean of char type\n",yylineno,$1);
							}
							  else{
									boolvalueUpdate($1,$3);
									cout<<"\nline : "<<yylineno<<" value "<<$3<<" assigned to "<<$1<<endl;
							
								  }
							}
     | ARG LeftPAR IDENTIFIER RightPAR ASSIGN exp NOSPACE_SPACE_SEMICOLON {
		                                                              auto paramTempIter = function_parameter_temp.find($3);
                                                                                        if (paramTempIter != function_parameter_temp.end()) {
																							function_parameter_temp[$3]=$6;
																							cout<<"\nline : "<<yylineno<<" value "<<$6<<" assigned to arg "<<$3<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }
	                                                                        }
	| ARG LeftPAR IDENTIFIER RightPAR ASSIGN float_exp NOSPACE_SPACE_SEMICOLON {
		                                                              auto paramTempIter = function_parameter_temp.find($3);
                                                                                        if (paramTempIter != function_parameter_temp.end()) {
																							function_parameter_temp[$3]=(int)$6;
																							cout<<"\nline : "<<yylineno<<" value "<<$6<<" assigned to arg "<<$3<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }	}
	| ARG LeftPAR IDENTIFIER RightPAR ASSIGN char_exp NOSPACE_SPACE_SEMICOLON {
		                                                              auto paramTempIter = function_parameter_temp.find($3);
                                                                                        if (paramTempIter != function_parameter_temp.end()) {
																							function_parameter_temp[$3]=(int)$6;
																							cout<<"\nline : "<<yylineno<<" value "<<$6<<" assigned to arg "<<$3<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }																						   

	 }

	 | ARG LeftPAR IDENTIFIER RightPAR ASSIGN str_exp NOSPACE_SPACE_SEMICOLON {
		                                                              auto paramTempIter = function_parameter_temp.find($3);
                                                                                        if (paramTempIter != function_parameter_temp.end()) {
																							int v= $6[0];
																							function_parameter_temp[$3]=v;
																							cout<<"\nline : "<<yylineno<<" value "<<$6<<" assigned to arg "<<$3<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }	}
	 | ARG LeftPAR IDENTIFIER RightPAR ASSIGN bool_exp NOSPACE_SPACE_SEMICOLON {
		                                                              auto paramTempIter = function_parameter_temp.find($3);
                                                                                        if (paramTempIter != function_parameter_temp.end()) { int v;

																							if($6=="true")
																							{ 
																								 v= 0;

																							}
																							else
																							v= 1;
																							function_parameter_temp[$3]=v;
																							cout<<"\nline : "<<yylineno<<" value "<<$6<<" assigned to arg "<<$3<<endl;
                                         
                                                                                           } else {
																							   cout<<"failed to assign "<<endl;
                                 
                                                                                               }	}
					
							
						





;






/*printf and scanf*/


print: PRINT LeftPAR exp RightPAR NOSPACE_SPACE_SEMICOLON	{      cout<<"line "<<yylineno<<" print output "<<endl;
																	int v = $3;
																	cout<<v<<endl;
																
															}
	| PRINT LeftPAR float_exp RightPAR NOSPACE_SPACE_SEMICOLON	{
		                                                            cout<<"line "<<yylineno<<" print output "<<endl;
																	float v = $3;
																	cout<<v<<endl;
																
															}
	| PRINT LeftPAR char_exp RightPAR NOSPACE_SPACE_SEMICOLON	{          cout<<"line "<<yylineno<<" print output "<<endl;
																	char v = $3;
																	cout<<v<<endl;
																
															}
	| PRINT LeftPAR str_exp RightPAR NOSPACE_SPACE_SEMICOLON	{             cout<<"line "<<yylineno<<" print output "<<endl;
																	string v = $3;
																	cout<<v<<endl;
																
															}
	| PRINT LeftPAR bool_exp RightPAR NOSPACE_SPACE_SEMICOLON	{          cout<<"line "<<yylineno<<" print output "<<endl;
																	string v = $3;
																	cout<<v<<endl;
																
															}
	| PRINT LeftPAR STRINGVALUE RightPAR NOSPACE_SPACE_SEMICOLON 				{	    cout<<"line "<<yylineno<<" print output "<<endl;
	                                                                              string str=$3;
																int i;
																for(i = 1;  i < str.size()-1; i++) 
																	{cout<<str[i];}
																	cout<<endl;
																	
															}

	| PRINT LeftPAR RightPAR NOSPACE_SPACE_SEMICOLON					{  cout<<"line "<<yylineno<<" print output "<<endl;
		                                                                   cout<<endl;}

	|  PRINT LeftPAR STRINGVALUE NOSPACE_SPACE_COMMA exp RightPAR NOSPACE_SPACE_SEMICOLON 		
	                                                          {	   cout<<"line "<<yylineno<<" print output "<<endl;
																 string str=$3;
																int i;
																for(i = 1;  i < str.size()-1; i++) 
																	{cout<<str[i];}

																	int v = $5;
																	cout<<v<<endl;
																	
															}
			
			;

input: CIN LeftPAR IDENTIFIER RightPAR NOSPACE_SPACE_SEMICOLON    { 
																    {if(!is_declared($3)) {
		                                                           printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$3);
											
	                                                                }
							                                    else{
																	int x=variableMap[$3];
																	 cout<<"line "<<yylineno<<" take input"<<endl;
																	 switch (x) {
        case 1: {
            int n;
            std::cin >> n;
            intvalueUpdate($3, n);
            break;
        }
        case 2: {
            float n2;
            std::cin >> n2;
            floatvalueUpdate($3, n2);
            break;
        }
        case 3: {
            char n3;
            std::cin >> n3;
            charvalueUpdate($3, n3);
            break;
        }
        case 4: {
            std::string n4;
            std::cin >> n4;
            strvalueUpdate($3, n4);
            break;
        }
        default:
            std::cout << "Unable to take input" << std::endl;
    }
																	 
								                                      }
							}

}
    ;









/* Conditional */

                                                                        																	


ifs: IF LeftPAR exp RightPAR BEGIF statement11  elseif  ENDIF   {cout<<"if statement completed of "<<yylineno<<endl;
                                                                    cout<<"about if block of "<<yylineno<<endl;
                                                                     if($3)
																	 {cout<<" if block will be executed. "<<endl;}
																	 else if (trackif==-1)
																	 {cout<<" else block will be executed. "<<endl;}
																	 else
																	 {cout<<" else if block "<< which_if_exe - trackif + 1<<"will be executed"<<endl;}
																	 
																	if(is_nested)
																	 {
																		cout<<"This is nested block"<<endl;
																	 } 
																	 if(is_else_if)
																	 {
																		cout<<"This is an else if ladder block"<<endl;
																	 } 

																	      trackif=-1;
	                                                                          is_nested=0;
	                                                                      is_else_if=0;
	                                                                   which_if_exe=0;
																	 }
      ;
	  statement11: 
	  |statement
	  |ifs {cout<<"NESTED IF"<<yylineno<<endl;is_nested++;}
	  ;



elseif:         {trackif=-1;
	            is_nested=0;
	            is_else_if=0;
	             which_if_exe=0;}
      | ELSEIF LeftPAR exp RightPAR statement11 elseif    {is_else_if++;
	                                                                    which_if_exe++;
	                                                                      if($3)
																		  {

																			trackif=which_if_exe;
																		  
																		  }}
	  | ELSE statement11                                 {
	                                                                    which_if_exe++;
																		 trackif=-1;
	                                                                    is_nested=0;
	                                                                    is_else_if=0;
	                                                                    which_if_exe=0;
																		
	                                                                      
																		  }
	  ;



/* Switch Case */
switch :SWITCH LeftPAR value1 RightPAR BEGIF rec DEFAULT COLON stat ENDIF {cout<<"switch"<<endl; if(trekflag==0){cout<<"default block is executed"<<endl;}
                                                                              else {cout<<t<<" block is executed"<<endl;}
																			  cout<<"Switch Statement Completed, line "<<yylineno<<endl;}
;

rec: CASE INTEGERVALUE COLON stat rec { if(trek==$2){t=$2;  trekflag=1;}}
  | 
 ;

stat:  
   | stat Arithmetic
   | stat print
   | stat declaration  {cout<<"Statement"<<endl;}
	|declaration  {cout<<"Statement"<<endl;}
	| stat SINGLE_LINE_COMMENT 
	| stat MULTI_LINE_COMMENT 
	|stat input 		
	|stat exp NOSPACE_SPACE_SEMICOLON		
   |stat const							
   ;


value1:	IDENTIFIER {if (is_declared($1) && GetValue($1)==1){ $$=intGetValue($1); trek=$$; }
	          else {cout<<"not declared or not Integer!!!"<<endl;}
			}
			  ;











/*loop*/
loop: FOR LeftPAR value COLON condition COLON value RightPAR LOOPSTART lines LOOPEND  {cout<<"This is a for loop statement line: "<<yylineno<<endl;
                                                                                        cout<<"initial value: "<<$3<<" ,Condition : "<<$5<<"increment : "<<$7<<endl;}
;

lines: 
    | loop  {cout<<"NESTED FOR LOOP"<<endl;} 
	|statement
	|lines BREAK {cout<<"break"<<endl;}
	|lines NEXT {cout<<"continue"<<endl;}
	;
value:	IDENTIFIER {if (is_declared($1) && GetValue($1)==1){ $$=intGetValue($1);}
	         else {cout<<"not declared or not Integer!!!"<<endl;} }
		|INTEGERVALUE
		;

condition: condition1 GREATER condition1   {$$=$1>$3;}
          | condition1 GREATEREQ condition1  {$$=$1>=$3;}
		  | condition1 LESSEQ condition1    {$$=$1<$3;}
		  | condition1 LESS condition1    {$$=$1<=$3;}
		  | condition1 EQ condition1     {$$=$1==$3;}
		  | condition1 NOTEQUAL condition1    {$$=$1!=$3;}
		  | 
		  ;
condition1:	IDENTIFIER {if (is_declared($1) && GetValue($1)==1){ $$=intGetValue($1);}
	           else {cout<<"not declared or not Integer!!!"<<endl;}}
		|INTEGERVALUE
		;

range: RANGE LeftPAR value COLON value COLON value RightPAR LOOPSTART liness LOOPEND {cout<<yylineno<<" is a Range loop statement"<<endl;
                                                                                        cout<<"initial value: "<<$3<<" ,final value: "<<$5<<"increment : "<<$7<<endl;
																						trackrangeloop=1;
					                                                                      
                                                                                           int i=0;
																						   if($3<$5 && $7>0)
																						   {  while ($3<$5)
																						   {
																							   $3+=$7;
																							   i++;
																						   }

																						   }
																						    else if($3>$5 && $7<0)
																						   {  while ($3>$5)
																						   {
																							   $3-=$7;
																							   i++;
																						   }

																						   }
																						   else{
																							cout<<"invalid parameters"<<endl;
																						   }
																						  
																						   cout<<"Number of execution : "<<i<<endl;
																						}
	;
liness:  
        | range  {cout<<yylineno<<" : NESTED Range LOOP"<<endl;
	                trackrangeloop++;
	 				} 
		|statement
		|liness BREAK {cout<<"break"<<endl;}
		|liness NEXT {cout<<"continue"<<endl;}
	    ;

while : WHILE LeftPAR condition RightPAR LOOPSTART linee LOOPEND    {cout<<yylineno<<" is a while loop statement"<<endl;}

linee:  
        | while  {cout<<yylineno<<" : NESTED while LOOP"<<endl;  } 
		|statement
		|linee BREAK {cout<<"break"<<endl;}
		|linee NEXT {cout<<"continue"<<endl;}
	    ;
	

	
















  /*expression*/
  exp: INTEGERVALUE       {$$=$1;}
	   |IDENTIFIER         {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							  else if(GetValue($1)==1 || GetValue($1) ==10 )
							  {
								
								
								 int a = intGetValue($1);
									$$=a;
							  }
							  else    
							  {
									 printf("Compilation Error:\nLine no: %d   Variable %s is not int\n",yylineno,$1);
								  }
							}
	|ARG LeftPAR IDENTIFIER RightPAR { auto paramTempIter = function_parameter_temp.find($3);
                                         if (paramTempIter != function_parameter_temp.end()) {
											//function_parameter_temp[$3]=(int)$6;
											$$=function_parameter_temp[$3];
                                         
                                           } else {
									  cout<<"failed to assign,out of scope "<<endl;
                                 
                                         }		

	                                  }
	  |MINUS exp %prec UMINUS { $$ = -$2;}
	  |exp PLUS exp    { $$ = $1 + $3;}
	  |exp MINUS exp   { $$ = $1 - $3;}
	  |exp MUL exp     { $$ = $1 * $3;}
	  |exp DIV exp      {if($3) {
 									$$ = $1 / $3;
									}
				  		else {
									$$ = 0;
									printf("\nRuntime Error:\nLine no: %d   division by zero\n",yylineno);
									
							} 
	                    }
	  |exp MOD exp     {if($3)
													$$ = $1 % $3;
												else
													$$=0;
												}
	  |exp AND exp       { $$ = $1 && $3;}
	  |exp OR exp       { $$ = $1 || $3;}
	  |NOT exp          { $$ = ! $2 ;}
	  |exp BITWISEAND exp { $$ = $1 & $3;}
	  |exp BITWISEOR exp    { $$ = $1 | $3;}
	  |exp BITWISEXOR exp    { $$ = $1 ^ $3;}
	  |exp FACT             { int n=$1;
							  int ans=1,i;
							  for(i=n;i>1;i--)
							   ans*=i;
							   printf("%d\n",ans);
							  $$ = ans;
							} 
	  |exp POW exp          { int n1=$1;
					            int n2=$3;
				               int ans=1;
								while(n2)
							{
								ans*=n1;
								n2--;
							}
														
							$$ = ans;
							}
	  |exp EQ exp       { $$ = $1 == $3;}
	  |exp GREATER exp     { $$ = $1 > $3;}
	  |exp GREATEREQ exp      { $$ = $1 >= $3;}
	  |exp NOTEQUAL exp    { $$ = $1 != $3;}
	  |exp LESS exp    { $$ = $1 < $3;}
	  |exp LESSEQ exp    { $$ = $1 <= $3;}
	  |LeftPAR exp RightPAR   {($2);}
      ;



str_exp:  STRINGVALUE { $$=$1; currentDatatype=2;}
	       |IDENTIFIER         {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							  else if(GetValue($1)!=4)
							  {
								 printf("Compilation Error:\nLine no: %d   Variable %s is not string\n",yylineno,$1);
							  }
							   else   
							  {
									string a = strGetValue($1);
									$$=&a[0];
								  }
							}
      ;


float_exp:  FLOATVALUE     {$$=$1;}
            |IDENTIFIER        {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							  else if(GetValue($1)==2 || GetValue($1)==11)
							  {
								 
								 float a = floatGetValue($1);
									$$=a;
							  }
							   else   
							  {
									printf("Compilation Error:\nLine no: %d   Variable %s is not int\n",yylineno,$1);
								  }
							}
	  |MINUS float_exp %prec UMINUS { $$ = -$2;}
	  |float_exp PLUS float_exp   { $$ = $1 + $3;}
	  |float_exp MINUS float_exp   { $$ = $1 - $3;}
	  |float_exp MUL float_exp     { $$ = $1 * $3;}
	  |float_exp DIV float_exp      {if($3) {
 									$$ = $1 / $3;
									}
				  		else {
									$$ = 0;
									printf("\nRuntime Error:\nLine no: %d   division by zero\n",yylineno);
									
							} 
	                    }
	  |float_exp AND float_exp      { $$ = $1 && $3;}
	  |float_exp OR float_exp       { $$ = $1 || $3;}
	  |float_exp float_exp         { $$ = ! $2 ;}
	  |float_exp EQ float_exp       { $$ = $1 == $3;}
	  |float_exp GREATER float_exp     { $$ = $1 > $3;}
	  |float_exp GREATEREQ float_exp      { $$ = $1 >= $3;}
	  |float_exp NOTEQUAL float_exp    { $$ = $1 != $3;}
	  |float_exp LESS float_exp    { $$ = $1 < $3;}
	  |float_exp LESSEQ float_exp    { $$ = $1 <= $3;}
	  |LeftPAR float_exp RightPAR   {($2);}
      ;



	

char_exp:  CHARVALUE     {$$=$1;}
            |IDENTIFIER           {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							  else if(GetValue($1)!=3)
							  {
								 printf("Compilation Error:\nLine no: %d   Variable %s is not int\n",yylineno,$1);
							  }
							   else   
							  {
									float a = floatGetValue($1);
									$$=a;
								  }
							}

      ;
bool_exp: BOOLVALUE0
         |BOOLVALUE1
		  |IDENTIFIER           {if(!is_declared($1)) {
		                            printf("Compilation Error:\nLine no: %d   Variable %s is not is_declared\n",yylineno,$1);
											
		                       
	                        }
							  else if(GetValue($1)!=5)
							  {
								 printf("Compilation Error:\nLine no: %d   Variable %s is not boolean\n",yylineno,$1);
							  }
							  else    
							  {
									string a = boolGetValue($1);
									$$=&a[0];
								  }
							}
		 ;







	






%%

/* CFG */





int yyerror(string s) /* called by yyparse on error */
{
	//printf("%s\n",s);
    cout<<s<<endl;
	return(0);
}




int main(void)
{
	FILE* file = fopen("input.c", "r");
    if (!file) {
        perror("Error opening input file");
        return 1;
    }



  FILE* outputFile = freopen("output.txt", "w", stdout);
    if (!outputFile) {
        perror("Error opening output file");
        fclose(file);
        return 1;
    }
	

    yyin = file;
    //yyparse();
    //fclose(file);
	//yyparse();
	//exit(0);



	int result = yyparse();
	 fclose(file);
	 fclose(outputFile);

    return result;
	
}


