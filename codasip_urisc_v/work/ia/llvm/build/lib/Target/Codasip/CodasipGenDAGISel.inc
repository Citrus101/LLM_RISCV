/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Codasip target                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

#if defined(GET_DAGISEL_DECL) && defined(GET_DAGISEL_BODY)
#error GET_DAGISEL_DECL and GET_DAGISEL_BODY cannot be both defined, undef both for inline definitions
#endif

#ifdef GET_DAGISEL_BODY
#define LOCAL_DAGISEL_STRINGIZE(X) LOCAL_DAGISEL_STRINGIZE_(X)
#define LOCAL_DAGISEL_STRINGIZE_(X) #X
static_assert(sizeof(LOCAL_DAGISEL_STRINGIZE(GET_DAGISEL_BODY)) > 1,
   "GET_DAGISEL_BODY is empty: it should be defined with the class name");
#undef LOCAL_DAGISEL_STRINGIZE_
#undef LOCAL_DAGISEL_STRINGIZE
#endif

#if !defined(GET_DAGISEL_DECL) && !defined(GET_DAGISEL_BODY)
#define DAGISEL_INLINE 1
#else
#define DAGISEL_INLINE 0
#endif

#if !DAGISEL_INLINE
#define DAGISEL_CLASS_COLONCOLON GET_DAGISEL_BODY ::
#else
#define DAGISEL_CLASS_COLONCOLON
#endif

#ifdef GET_DAGISEL_DECL
void SelectCode(SDNode *N);
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
void DAGISEL_CLASS_COLONCOLON SelectCode(SDNode *N)
{
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*     0*/  OPC_SwitchOpcode /*28 cases */, 4|128,9/*1156*/, TARGET_VAL(ISD::ADD),// ->1161
/*     5*/    OPC_Scope, 89|128,8/*1113*/, /*->1121*/ // 2 children in Scope
/*     8*/      OPC_MoveChild0,
/*     9*/      OPC_Scope, 62|128,4/*574*/, /*->586*/ // 4 children in Scope
/*    12*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*    15*/        OPC_MoveChild0,
/*    16*/        OPC_Scope, 27|128,2/*283*/, /*->302*/ // 4 children in Scope
/*    19*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*    22*/          OPC_MoveChild0,
/*    23*/          OPC_Scope, 49, /*->74*/ // 5 children in Scope
/*    25*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*    29*/            OPC_RecordChild0, // #0 = $op1
/*    30*/            OPC_MoveChild0,
/*    31*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*    33*/            OPC_MoveParent,
/*    34*/            OPC_MoveParent,
/*    35*/            OPC_MoveChild1,
/*    36*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*    39*/            OPC_CheckChild0Same, 0,
/*    41*/            OPC_CheckChild1Integer, 16, 
/*    43*/            OPC_MoveParent,
/*    44*/            OPC_MoveParent,
/*    45*/            OPC_MoveChild1,
/*    46*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*    50*/            OPC_RecordChild0, // #1 = $op2
/*    51*/            OPC_MoveChild0,
/*    52*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*    54*/            OPC_MoveParent,
/*    55*/            OPC_MoveParent,
/*    56*/            OPC_MoveParent,
/*    57*/            OPC_MoveChild1,
/*    58*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*    61*/            OPC_CheckChild0Same, 1,
/*    63*/            OPC_CheckChild1Integer, 16, 
/*    65*/            OPC_MoveParent,
/*    66*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*    74*/          /*Scope*/ 49, /*->124*/
/*    75*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*    78*/            OPC_RecordChild0, // #0 = $op1
/*    79*/            OPC_MoveChild0,
/*    80*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*    82*/            OPC_MoveParent,
/*    83*/            OPC_CheckChild1Integer, 16, 
/*    85*/            OPC_MoveParent,
/*    86*/            OPC_MoveChild1,
/*    87*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*    91*/            OPC_CheckChild0Same, 0,
/*    93*/            OPC_MoveParent,
/*    94*/            OPC_MoveParent,
/*    95*/            OPC_MoveChild1,
/*    96*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   100*/            OPC_RecordChild0, // #1 = $op2
/*   101*/            OPC_MoveChild0,
/*   102*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   104*/            OPC_MoveParent,
/*   105*/            OPC_MoveParent,
/*   106*/            OPC_MoveParent,
/*   107*/            OPC_MoveChild1,
/*   108*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   111*/            OPC_CheckChild0Same, 1,
/*   113*/            OPC_CheckChild1Integer, 16, 
/*   115*/            OPC_MoveParent,
/*   116*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   124*/          /*Scope*/ 76, /*->201*/
/*   125*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   129*/            OPC_RecordChild0, // #0 = $op1
/*   130*/            OPC_MoveChild0,
/*   131*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   133*/            OPC_MoveParent,
/*   134*/            OPC_MoveParent,
/*   135*/            OPC_MoveChild1,
/*   136*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   140*/            OPC_RecordChild0, // #1 = $op2
/*   141*/            OPC_MoveChild0,
/*   142*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   144*/            OPC_MoveParent,
/*   145*/            OPC_MoveParent,
/*   146*/            OPC_MoveParent,
/*   147*/            OPC_MoveChild1,
/*   148*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   151*/            OPC_Scope, 23, /*->176*/ // 2 children in Scope
/*   153*/              OPC_CheckChild0Same, 0,
/*   155*/              OPC_CheckChild1Integer, 16, 
/*   157*/              OPC_MoveParent,
/*   158*/              OPC_MoveParent,
/*   159*/              OPC_MoveChild1,
/*   160*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   163*/              OPC_CheckChild0Same, 1,
/*   165*/              OPC_CheckChild1Integer, 16, 
/*   167*/              OPC_MoveParent,
/*   168*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                            MVT::i32, 2/*#Ops*/, 0, 1, 
                        // Src: (add:{ *:[i32] } (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                        // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   176*/            /*Scope*/ 23, /*->200*/
/*   177*/              OPC_CheckChild0Same, 1,
/*   179*/              OPC_CheckChild1Integer, 16, 
/*   181*/              OPC_MoveParent,
/*   182*/              OPC_MoveParent,
/*   183*/              OPC_MoveChild1,
/*   184*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   187*/              OPC_CheckChild0Same, 0,
/*   189*/              OPC_CheckChild1Integer, 16, 
/*   191*/              OPC_MoveParent,
/*   192*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                            MVT::i32, 2/*#Ops*/, 1, 0, 
                        // Src: (add:{ *:[i32] } (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                        // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   200*/            0, /*End of Scope*/
/*   201*/          /*Scope*/ 49, /*->251*/
/*   202*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   205*/            OPC_RecordChild0, // #0 = $op1
/*   206*/            OPC_MoveChild0,
/*   207*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   209*/            OPC_MoveParent,
/*   210*/            OPC_CheckChild1Integer, 16, 
/*   212*/            OPC_MoveParent,
/*   213*/            OPC_MoveChild1,
/*   214*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   218*/            OPC_RecordChild0, // #1 = $op2
/*   219*/            OPC_MoveChild0,
/*   220*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   222*/            OPC_MoveParent,
/*   223*/            OPC_MoveParent,
/*   224*/            OPC_MoveParent,
/*   225*/            OPC_MoveChild1,
/*   226*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   230*/            OPC_CheckChild0Same, 0,
/*   232*/            OPC_MoveParent,
/*   233*/            OPC_MoveParent,
/*   234*/            OPC_MoveChild1,
/*   235*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   238*/            OPC_CheckChild0Same, 1,
/*   240*/            OPC_CheckChild1Integer, 16, 
/*   242*/            OPC_MoveParent,
/*   243*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] })), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   251*/          /*Scope*/ 49, /*->301*/
/*   252*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   256*/            OPC_RecordChild0, // #0 = $op2
/*   257*/            OPC_MoveChild0,
/*   258*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   260*/            OPC_MoveParent,
/*   261*/            OPC_MoveParent,
/*   262*/            OPC_MoveChild1,
/*   263*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   266*/            OPC_RecordChild0, // #1 = $op1
/*   267*/            OPC_MoveChild0,
/*   268*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   270*/            OPC_MoveParent,
/*   271*/            OPC_CheckChild1Integer, 16, 
/*   273*/            OPC_MoveParent,
/*   274*/            OPC_MoveParent,
/*   275*/            OPC_MoveChild1,
/*   276*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   280*/            OPC_CheckChild0Same, 1,
/*   282*/            OPC_MoveParent,
/*   283*/            OPC_MoveParent,
/*   284*/            OPC_MoveChild1,
/*   285*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   288*/            OPC_CheckChild0Same, 0,
/*   290*/            OPC_CheckChild1Integer, 16, 
/*   292*/            OPC_MoveParent,
/*   293*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   301*/          0, /*End of Scope*/
/*   302*/        /*Scope*/ 95, /*->398*/
/*   303*/          OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   307*/          OPC_RecordChild0, // #0 = $op2
/*   308*/          OPC_MoveChild0,
/*   309*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   311*/          OPC_MoveParent,
/*   312*/          OPC_MoveParent,
/*   313*/          OPC_MoveChild1,
/*   314*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   317*/          OPC_MoveChild0,
/*   318*/          OPC_Scope, 38, /*->358*/ // 2 children in Scope
/*   320*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   324*/            OPC_RecordChild0, // #1 = $op1
/*   325*/            OPC_MoveChild0,
/*   326*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   328*/            OPC_MoveParent,
/*   329*/            OPC_MoveParent,
/*   330*/            OPC_MoveChild1,
/*   331*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   334*/            OPC_CheckChild0Same, 1,
/*   336*/            OPC_CheckChild1Integer, 16, 
/*   338*/            OPC_MoveParent,
/*   339*/            OPC_MoveParent,
/*   340*/            OPC_MoveParent,
/*   341*/            OPC_MoveChild1,
/*   342*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   345*/            OPC_CheckChild0Same, 0,
/*   347*/            OPC_CheckChild1Integer, 16, 
/*   349*/            OPC_MoveParent,
/*   350*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }))), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   358*/          /*Scope*/ 38, /*->397*/
/*   359*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   362*/            OPC_RecordChild0, // #1 = $op1
/*   363*/            OPC_MoveChild0,
/*   364*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   366*/            OPC_MoveParent,
/*   367*/            OPC_CheckChild1Integer, 16, 
/*   369*/            OPC_MoveParent,
/*   370*/            OPC_MoveChild1,
/*   371*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   375*/            OPC_CheckChild0Same, 1,
/*   377*/            OPC_MoveParent,
/*   378*/            OPC_MoveParent,
/*   379*/            OPC_MoveParent,
/*   380*/            OPC_MoveChild1,
/*   381*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   384*/            OPC_CheckChild0Same, 0,
/*   386*/            OPC_CheckChild1Integer, 16, 
/*   388*/            OPC_MoveParent,
/*   389*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }))), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   397*/          0, /*End of Scope*/
/*   398*/        /*Scope*/ 90, /*->489*/
/*   399*/          OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   402*/          OPC_RecordChild0, // #0 = $op1
/*   403*/          OPC_MoveChild0,
/*   404*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   406*/          OPC_MoveParent,
/*   407*/          OPC_CheckChild1Integer, 16, 
/*   409*/          OPC_MoveParent,
/*   410*/          OPC_MoveChild1,
/*   411*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   414*/          OPC_MoveChild0,
/*   415*/          OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   419*/          OPC_Scope, 33, /*->454*/ // 2 children in Scope
/*   421*/            OPC_CheckChild0Same, 0,
/*   423*/            OPC_MoveParent,
/*   424*/            OPC_MoveChild1,
/*   425*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   429*/            OPC_RecordChild0, // #1 = $op2
/*   430*/            OPC_MoveChild0,
/*   431*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   433*/            OPC_MoveParent,
/*   434*/            OPC_MoveParent,
/*   435*/            OPC_MoveParent,
/*   436*/            OPC_MoveParent,
/*   437*/            OPC_MoveChild1,
/*   438*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   441*/            OPC_CheckChild0Same, 1,
/*   443*/            OPC_CheckChild1Integer, 16, 
/*   445*/            OPC_MoveParent,
/*   446*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }))), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   454*/          /*Scope*/ 33, /*->488*/
/*   455*/            OPC_RecordChild0, // #1 = $op2
/*   456*/            OPC_MoveChild0,
/*   457*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   459*/            OPC_MoveParent,
/*   460*/            OPC_MoveParent,
/*   461*/            OPC_MoveChild1,
/*   462*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   466*/            OPC_CheckChild0Same, 0,
/*   468*/            OPC_MoveParent,
/*   469*/            OPC_MoveParent,
/*   470*/            OPC_MoveParent,
/*   471*/            OPC_MoveChild1,
/*   472*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   475*/            OPC_CheckChild0Same, 1,
/*   477*/            OPC_CheckChild1Integer, 16, 
/*   479*/            OPC_MoveParent,
/*   480*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }))), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   488*/          0, /*End of Scope*/
/*   489*/        /*Scope*/ 95, /*->585*/
/*   490*/          OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   494*/          OPC_RecordChild0, // #0 = $op1
/*   495*/          OPC_MoveChild0,
/*   496*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   498*/          OPC_MoveParent,
/*   499*/          OPC_MoveParent,
/*   500*/          OPC_MoveChild1,
/*   501*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   504*/          OPC_MoveChild0,
/*   505*/          OPC_Scope, 38, /*->545*/ // 2 children in Scope
/*   507*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   510*/            OPC_CheckChild0Same, 0,
/*   512*/            OPC_CheckChild1Integer, 16, 
/*   514*/            OPC_MoveParent,
/*   515*/            OPC_MoveChild1,
/*   516*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   520*/            OPC_RecordChild0, // #1 = $op2
/*   521*/            OPC_MoveChild0,
/*   522*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   524*/            OPC_MoveParent,
/*   525*/            OPC_MoveParent,
/*   526*/            OPC_MoveParent,
/*   527*/            OPC_MoveParent,
/*   528*/            OPC_MoveChild1,
/*   529*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   532*/            OPC_CheckChild0Same, 1,
/*   534*/            OPC_CheckChild1Integer, 16, 
/*   536*/            OPC_MoveParent,
/*   537*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }))), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   545*/          /*Scope*/ 38, /*->584*/
/*   546*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   550*/            OPC_RecordChild0, // #1 = $op2
/*   551*/            OPC_MoveChild0,
/*   552*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   554*/            OPC_MoveParent,
/*   555*/            OPC_MoveParent,
/*   556*/            OPC_MoveChild1,
/*   557*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   560*/            OPC_CheckChild0Same, 0,
/*   562*/            OPC_CheckChild1Integer, 16, 
/*   564*/            OPC_MoveParent,
/*   565*/            OPC_MoveParent,
/*   566*/            OPC_MoveParent,
/*   567*/            OPC_MoveChild1,
/*   568*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   571*/            OPC_CheckChild0Same, 1,
/*   573*/            OPC_CheckChild1Integer, 16, 
/*   575*/            OPC_MoveParent,
/*   576*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }))), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   584*/          0, /*End of Scope*/
/*   585*/        0, /*End of Scope*/
/*   586*/      /*Scope*/ 83|128,3/*467*/, /*->1055*/
/*   588*/        OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   591*/        OPC_RecordChild0, // #0 = $op2
/*   592*/        OPC_MoveChild0,
/*   593*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   595*/        OPC_MoveParent,
/*   596*/        OPC_CheckChild1Integer, 16, 
/*   598*/        OPC_MoveParent,
/*   599*/        OPC_MoveChild1,
/*   600*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   603*/        OPC_MoveChild0,
/*   604*/        OPC_Scope, 105|128,1/*233*/, /*->840*/ // 4 children in Scope
/*   607*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   610*/          OPC_MoveChild0,
/*   611*/          OPC_Scope, 37, /*->650*/ // 5 children in Scope
/*   613*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   617*/            OPC_RecordChild0, // #1 = $op1
/*   618*/            OPC_MoveChild0,
/*   619*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   621*/            OPC_MoveParent,
/*   622*/            OPC_MoveParent,
/*   623*/            OPC_MoveChild1,
/*   624*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   627*/            OPC_CheckChild0Same, 1,
/*   629*/            OPC_CheckChild1Integer, 16, 
/*   631*/            OPC_MoveParent,
/*   632*/            OPC_MoveParent,
/*   633*/            OPC_MoveChild1,
/*   634*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   638*/            OPC_CheckChild0Same, 0,
/*   640*/            OPC_MoveParent,
/*   641*/            OPC_MoveParent,
/*   642*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   650*/          /*Scope*/ 37, /*->688*/
/*   651*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   654*/            OPC_RecordChild0, // #1 = $op1
/*   655*/            OPC_MoveChild0,
/*   656*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   658*/            OPC_MoveParent,
/*   659*/            OPC_CheckChild1Integer, 16, 
/*   661*/            OPC_MoveParent,
/*   662*/            OPC_MoveChild1,
/*   663*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   667*/            OPC_CheckChild0Same, 1,
/*   669*/            OPC_MoveParent,
/*   670*/            OPC_MoveParent,
/*   671*/            OPC_MoveChild1,
/*   672*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   676*/            OPC_CheckChild0Same, 0,
/*   678*/            OPC_MoveParent,
/*   679*/            OPC_MoveParent,
/*   680*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   688*/          /*Scope*/ 74, /*->763*/
/*   689*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   693*/            OPC_Scope, 33, /*->728*/ // 2 children in Scope
/*   695*/              OPC_RecordChild0, // #1 = $op1
/*   696*/              OPC_MoveChild0,
/*   697*/              OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   699*/              OPC_MoveParent,
/*   700*/              OPC_MoveParent,
/*   701*/              OPC_MoveChild1,
/*   702*/              OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   706*/              OPC_CheckChild0Same, 0,
/*   708*/              OPC_MoveParent,
/*   709*/              OPC_MoveParent,
/*   710*/              OPC_MoveChild1,
/*   711*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   714*/              OPC_CheckChild0Same, 1,
/*   716*/              OPC_CheckChild1Integer, 16, 
/*   718*/              OPC_MoveParent,
/*   719*/              OPC_MoveParent,
/*   720*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                            MVT::i32, 2/*#Ops*/, 1, 0, 
                        // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }))) - Complexity = 45
                        // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   728*/            /*Scope*/ 33, /*->762*/
/*   729*/              OPC_CheckChild0Same, 0,
/*   731*/              OPC_MoveParent,
/*   732*/              OPC_MoveChild1,
/*   733*/              OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   737*/              OPC_RecordChild0, // #1 = $op1
/*   738*/              OPC_MoveChild0,
/*   739*/              OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   741*/              OPC_MoveParent,
/*   742*/              OPC_MoveParent,
/*   743*/              OPC_MoveParent,
/*   744*/              OPC_MoveChild1,
/*   745*/              OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   748*/              OPC_CheckChild0Same, 1,
/*   750*/              OPC_CheckChild1Integer, 16, 
/*   752*/              OPC_MoveParent,
/*   753*/              OPC_MoveParent,
/*   754*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                            MVT::i32, 2/*#Ops*/, 1, 0, 
                        // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }))) - Complexity = 45
                        // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   762*/            0, /*End of Scope*/
/*   763*/          /*Scope*/ 37, /*->801*/
/*   764*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   767*/            OPC_RecordChild0, // #1 = $op1
/*   768*/            OPC_MoveChild0,
/*   769*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   771*/            OPC_MoveParent,
/*   772*/            OPC_CheckChild1Integer, 16, 
/*   774*/            OPC_MoveParent,
/*   775*/            OPC_MoveChild1,
/*   776*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   780*/            OPC_CheckChild0Same, 0,
/*   782*/            OPC_MoveParent,
/*   783*/            OPC_MoveParent,
/*   784*/            OPC_MoveChild1,
/*   785*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   789*/            OPC_CheckChild0Same, 1,
/*   791*/            OPC_MoveParent,
/*   792*/            OPC_MoveParent,
/*   793*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] })), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   801*/          /*Scope*/ 37, /*->839*/
/*   802*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   806*/            OPC_CheckChild0Same, 0,
/*   808*/            OPC_MoveParent,
/*   809*/            OPC_MoveChild1,
/*   810*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   813*/            OPC_RecordChild0, // #1 = $op1
/*   814*/            OPC_MoveChild0,
/*   815*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   817*/            OPC_MoveParent,
/*   818*/            OPC_CheckChild1Integer, 16, 
/*   820*/            OPC_MoveParent,
/*   821*/            OPC_MoveParent,
/*   822*/            OPC_MoveChild1,
/*   823*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   827*/            OPC_CheckChild0Same, 1,
/*   829*/            OPC_MoveParent,
/*   830*/            OPC_MoveParent,
/*   831*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   839*/          0, /*End of Scope*/
/*   840*/        /*Scope*/ 74, /*->915*/
/*   841*/          OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   845*/          OPC_CheckChild0Same, 0,
/*   847*/          OPC_MoveParent,
/*   848*/          OPC_MoveChild1,
/*   849*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   852*/          OPC_MoveChild0,
/*   853*/          OPC_Scope, 29, /*->884*/ // 2 children in Scope
/*   855*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   859*/            OPC_RecordChild0, // #1 = $op1
/*   860*/            OPC_MoveChild0,
/*   861*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   863*/            OPC_MoveParent,
/*   864*/            OPC_MoveParent,
/*   865*/            OPC_MoveChild1,
/*   866*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   869*/            OPC_CheckChild0Same, 1,
/*   871*/            OPC_CheckChild1Integer, 16, 
/*   873*/            OPC_MoveParent,
/*   874*/            OPC_MoveParent,
/*   875*/            OPC_MoveParent,
/*   876*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   884*/          /*Scope*/ 29, /*->914*/
/*   885*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   888*/            OPC_RecordChild0, // #1 = $op1
/*   889*/            OPC_MoveChild0,
/*   890*/            OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   892*/            OPC_MoveParent,
/*   893*/            OPC_CheckChild1Integer, 16, 
/*   895*/            OPC_MoveParent,
/*   896*/            OPC_MoveChild1,
/*   897*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   901*/            OPC_CheckChild0Same, 1,
/*   903*/            OPC_MoveParent,
/*   904*/            OPC_MoveParent,
/*   905*/            OPC_MoveParent,
/*   906*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   914*/          0, /*End of Scope*/
/*   915*/        /*Scope*/ 66, /*->982*/
/*   916*/          OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*   919*/          OPC_RecordChild0, // #1 = $op1
/*   920*/          OPC_MoveChild0,
/*   921*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   923*/          OPC_MoveParent,
/*   924*/          OPC_CheckChild1Integer, 16, 
/*   926*/          OPC_MoveParent,
/*   927*/          OPC_MoveChild1,
/*   928*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   931*/          OPC_MoveChild0,
/*   932*/          OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   936*/          OPC_Scope, 21, /*->959*/ // 2 children in Scope
/*   938*/            OPC_CheckChild0Same, 1,
/*   940*/            OPC_MoveParent,
/*   941*/            OPC_MoveChild1,
/*   942*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   946*/            OPC_CheckChild0Same, 0,
/*   948*/            OPC_MoveParent,
/*   949*/            OPC_MoveParent,
/*   950*/            OPC_MoveParent,
/*   951*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] })))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   959*/          /*Scope*/ 21, /*->981*/
/*   960*/            OPC_CheckChild0Same, 0,
/*   962*/            OPC_MoveParent,
/*   963*/            OPC_MoveChild1,
/*   964*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   968*/            OPC_CheckChild0Same, 1,
/*   970*/            OPC_MoveParent,
/*   971*/            OPC_MoveParent,
/*   972*/            OPC_MoveParent,
/*   973*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*   981*/          0, /*End of Scope*/
/*   982*/        /*Scope*/ 71, /*->1054*/
/*   983*/          OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*   987*/          OPC_RecordChild0, // #1 = $op1
/*   988*/          OPC_MoveChild0,
/*   989*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*   991*/          OPC_MoveParent,
/*   992*/          OPC_MoveParent,
/*   993*/          OPC_MoveChild1,
/*   994*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*   997*/          OPC_MoveChild0,
/*   998*/          OPC_Scope, 26, /*->1026*/ // 2 children in Scope
/*  1000*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*  1003*/            OPC_CheckChild0Same, 1,
/*  1005*/            OPC_CheckChild1Integer, 16, 
/*  1007*/            OPC_MoveParent,
/*  1008*/            OPC_MoveChild1,
/*  1009*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*  1013*/            OPC_CheckChild0Same, 0,
/*  1015*/            OPC_MoveParent,
/*  1016*/            OPC_MoveParent,
/*  1017*/            OPC_MoveParent,
/*  1018*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] })))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1026*/          /*Scope*/ 26, /*->1053*/
/*  1027*/            OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*  1031*/            OPC_CheckChild0Same, 0,
/*  1033*/            OPC_MoveParent,
/*  1034*/            OPC_MoveChild1,
/*  1035*/            OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*  1038*/            OPC_CheckChild0Same, 1,
/*  1040*/            OPC_CheckChild1Integer, 16, 
/*  1042*/            OPC_MoveParent,
/*  1043*/            OPC_MoveParent,
/*  1044*/            OPC_MoveParent,
/*  1045*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })))) - Complexity = 45
                      // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1053*/          0, /*End of Scope*/
/*  1054*/        0, /*End of Scope*/
/*  1055*/      /*Scope*/ 37, /*->1093*/
/*  1056*/        OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*  1060*/        OPC_RecordChild0, // #0 = $op1
/*  1061*/        OPC_MoveChild0,
/*  1062*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1064*/        OPC_MoveParent,
/*  1065*/        OPC_MoveParent,
/*  1066*/        OPC_MoveChild1,
/*  1067*/        OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*  1070*/        OPC_CheckChild0Same, 0,
/*  1072*/        OPC_CheckChild1Integer, 16, 
/*  1074*/        OPC_MoveParent,
/*  1075*/        OPC_Scope, 7, /*->1084*/ // 2 children in Scope
/*  1077*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__), 0,
                        MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })) - Complexity = 21
                    // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  1084*/        /*Scope*/ 7, /*->1092*/
/*  1085*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__reg0__), 0,
                        MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (add:{ *:[i32] } (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] }), (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] })) - Complexity = 21
                    // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__regs__reg0__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  1092*/        0, /*End of Scope*/
/*  1093*/      /*Scope*/ 26, /*->1120*/
/*  1094*/        OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*  1097*/        OPC_RecordChild0, // #0 = $op1
/*  1098*/        OPC_MoveChild0,
/*  1099*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1101*/        OPC_MoveParent,
/*  1102*/        OPC_CheckChild1Integer, 16, 
/*  1104*/        OPC_MoveParent,
/*  1105*/        OPC_MoveChild1,
/*  1106*/        OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*  1110*/        OPC_CheckChild0Same, 0,
/*  1112*/        OPC_MoveParent,
/*  1113*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })) - Complexity = 21
                  // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  1120*/      0, /*End of Scope*/
/*  1121*/    /*Scope*/ 38, /*->1160*/
/*  1122*/      OPC_RecordChild0, // #0 = $op1
/*  1123*/      OPC_MoveChild0,
/*  1124*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1126*/      OPC_MoveParent,
/*  1127*/      OPC_RecordChild1, // #1 = $op2
/*  1128*/      OPC_MoveChild1,
/*  1129*/      OPC_Scope, 16, /*->1147*/ // 2 children in Scope
/*  1131*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1134*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1136*/        OPC_MoveParent,
/*  1137*/        OPC_EmitConvertToTarget, 1,
/*  1139*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 9
                  // Dst: (i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1147*/      /*Scope*/ 11, /*->1159*/
/*  1148*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1150*/        OPC_MoveParent,
/*  1151*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_add__regs__regs__regs__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                  // Dst: (i_comp_3reg__opc_add__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1159*/      0, /*End of Scope*/
/*  1160*/    0, /*End of Scope*/
/*  1161*/  /*SwitchOpcode*/ 5|128,5/*645*/, TARGET_VAL(ISD::STORE),// ->1810
/*  1165*/    OPC_RecordMemRef,
/*  1166*/    OPC_RecordNode, // #0 = 'st' chained node
/*  1167*/    OPC_Scope, 49|128,1/*177*/, /*->1347*/ // 8 children in Scope
/*  1170*/      OPC_CheckChild1Integer, 0, 
/*  1172*/      OPC_Scope, 36, /*->1210*/ // 4 children in Scope
/*  1174*/        OPC_CheckChild1Type, MVT::i8,
/*  1176*/        OPC_MoveChild2,
/*  1177*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1180*/        OPC_RecordChild0, // #1 = $op0
/*  1181*/        OPC_MoveChild0,
/*  1182*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1184*/        OPC_MoveParent,
/*  1185*/        OPC_RecordChild1, // #2 = $op1
/*  1186*/        OPC_MoveChild1,
/*  1187*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1190*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1192*/        OPC_MoveParent,
/*  1193*/        OPC_MoveParent,
/*  1194*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1196*/        OPC_CheckPredicate, 3, // Predicate_store
/*  1198*/        OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1200*/        OPC_EmitMergeInputChains1_0,
/*  1201*/        OPC_EmitConvertToTarget, 2,
/*  1203*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 3, 
                  // Src: (st 0:{ *:[i8] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 18
                  // Dst: (i_store__opc_storeb__reg0__simm12_simple__regs__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1210*/      /*Scope*/ 36, /*->1247*/
/*  1211*/        OPC_CheckChild1Type, MVT::i16,
/*  1213*/        OPC_MoveChild2,
/*  1214*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1217*/        OPC_RecordChild0, // #1 = $op0
/*  1218*/        OPC_MoveChild0,
/*  1219*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1221*/        OPC_MoveParent,
/*  1222*/        OPC_RecordChild1, // #2 = $op1
/*  1223*/        OPC_MoveChild1,
/*  1224*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1227*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1229*/        OPC_MoveParent,
/*  1230*/        OPC_MoveParent,
/*  1231*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1233*/        OPC_CheckPredicate, 3, // Predicate_store
/*  1235*/        OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1237*/        OPC_EmitMergeInputChains1_0,
/*  1238*/        OPC_EmitConvertToTarget, 2,
/*  1240*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 3, 
                  // Src: (st 0:{ *:[i16] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 18
                  // Dst: (i_store__opc_storeh__reg0__simm12_simple__regs__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1247*/      /*Scope*/ 72, /*->1320*/
/*  1248*/        OPC_MoveChild2,
/*  1249*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1252*/        OPC_RecordChild0, // #1 = $op0
/*  1253*/        OPC_MoveChild0,
/*  1254*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1256*/        OPC_MoveParent,
/*  1257*/        OPC_RecordChild1, // #2 = $op1
/*  1258*/        OPC_MoveChild1,
/*  1259*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1262*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1264*/        OPC_MoveParent,
/*  1265*/        OPC_MoveParent,
/*  1266*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1268*/        OPC_Scope, 14, /*->1284*/ // 2 children in Scope
/*  1270*/          OPC_CheckPredicate, 3, // Predicate_store
/*  1272*/          OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1274*/          OPC_EmitMergeInputChains1_0,
/*  1275*/          OPC_EmitConvertToTarget, 2,
/*  1277*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__reg0__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#Ops*/, 1, 3, 
                    // Src: (st 0:{ *:[i32] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 18
                    // Dst: (i_store__opc_storew__reg0__simm12_simple__regs__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1284*/        /*Scope*/ 34, /*->1319*/
/*  1285*/          OPC_CheckPredicate, 5, // Predicate_truncstore
/*  1287*/          OPC_Scope, 14, /*->1303*/ // 2 children in Scope
/*  1289*/            OPC_CheckPredicate, 6, // Predicate_truncstorei8
/*  1291*/            OPC_CheckPredicate, 4, // Predicate_truncstorei8_a1_s0
/*  1293*/            OPC_EmitMergeInputChains1_0,
/*  1294*/            OPC_EmitConvertToTarget, 2,
/*  1296*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 3, 
                      // Src: (st 0:{ *:[i32] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 18
                      // Dst: (i_store__opc_storeb__reg0__simm12_simple__regs__i32_TRUNC_CLONE_ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1303*/          /*Scope*/ 14, /*->1318*/
/*  1304*/            OPC_CheckPredicate, 7, // Predicate_truncstorei16
/*  1306*/            OPC_CheckPredicate, 4, // Predicate_truncstorei16_a1_s0
/*  1308*/            OPC_EmitMergeInputChains1_0,
/*  1309*/            OPC_EmitConvertToTarget, 2,
/*  1311*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 3, 
                      // Src: (st 0:{ *:[i32] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 18
                      // Dst: (i_store__opc_storeh__reg0__simm12_simple__regs__i32_TRUNC_CLONE_ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1318*/          0, /*End of Scope*/
/*  1319*/        0, /*End of Scope*/
/*  1320*/      /*Scope*/ 25, /*->1346*/
/*  1321*/        OPC_CheckChild1Type, MVT::i8,
/*  1323*/        OPC_RecordChild2, // #1 = $op0
/*  1324*/        OPC_MoveChild2,
/*  1325*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1328*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1330*/        OPC_MoveParent,
/*  1331*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1333*/        OPC_CheckPredicate, 3, // Predicate_store
/*  1335*/        OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1337*/        OPC_EmitMergeInputChains1_0,
/*  1338*/        OPC_EmitConvertToTarget, 1,
/*  1340*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#Ops*/, 2, 
                  // Src: (st 0:{ *:[i8] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 14
                  // Dst: (i_store__opc_storeb__reg0__simm12_simple__reg0__ (imm:{ *:[i32] }):$op0)
/*  1346*/      0, /*End of Scope*/
/*  1347*/    /*Scope*/ 44, /*->1392*/
/*  1348*/      OPC_RecordChild1, // #1 = $op0
/*  1349*/      OPC_MoveChild1,
/*  1350*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1352*/      OPC_CheckType, MVT::i32,
/*  1354*/      OPC_MoveParent,
/*  1355*/      OPC_MoveChild2,
/*  1356*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1359*/      OPC_RecordChild0, // #2 = $op1
/*  1360*/      OPC_MoveChild0,
/*  1361*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1363*/      OPC_MoveParent,
/*  1364*/      OPC_RecordChild1, // #3 = $op2
/*  1365*/      OPC_MoveChild1,
/*  1366*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1369*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1371*/      OPC_MoveParent,
/*  1372*/      OPC_MoveParent,
/*  1373*/      OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1375*/      OPC_CheckPredicate, 5, // Predicate_truncstore
/*  1377*/      OPC_CheckPredicate, 6, // Predicate_truncstorei8
/*  1379*/      OPC_CheckPredicate, 4, // Predicate_truncstorei8_a1_s0
/*  1381*/      OPC_EmitMergeInputChains1_0,
/*  1382*/      OPC_EmitConvertToTarget, 3,
/*  1384*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 2, 4, 
                // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storeb__regs__simm12_simple__regs__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1392*/    /*Scope*/ 27, /*->1420*/
/*  1393*/      OPC_CheckChild1Integer, 0, 
/*  1395*/      OPC_CheckChild1Type, MVT::i16,
/*  1397*/      OPC_RecordChild2, // #1 = $op0
/*  1398*/      OPC_MoveChild2,
/*  1399*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1402*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1404*/      OPC_MoveParent,
/*  1405*/      OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1407*/      OPC_CheckPredicate, 3, // Predicate_store
/*  1409*/      OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1411*/      OPC_EmitMergeInputChains1_0,
/*  1412*/      OPC_EmitConvertToTarget, 1,
/*  1414*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#Ops*/, 2, 
                // Src: (st 0:{ *:[i16] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storeh__reg0__simm12_simple__reg0__ (imm:{ *:[i32] }):$op0)
/*  1420*/    /*Scope*/ 44, /*->1465*/
/*  1421*/      OPC_RecordChild1, // #1 = $op0
/*  1422*/      OPC_MoveChild1,
/*  1423*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1425*/      OPC_CheckType, MVT::i32,
/*  1427*/      OPC_MoveParent,
/*  1428*/      OPC_MoveChild2,
/*  1429*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1432*/      OPC_RecordChild0, // #2 = $op1
/*  1433*/      OPC_MoveChild0,
/*  1434*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1436*/      OPC_MoveParent,
/*  1437*/      OPC_RecordChild1, // #3 = $op2
/*  1438*/      OPC_MoveChild1,
/*  1439*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1442*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1444*/      OPC_MoveParent,
/*  1445*/      OPC_MoveParent,
/*  1446*/      OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1448*/      OPC_CheckPredicate, 5, // Predicate_truncstore
/*  1450*/      OPC_CheckPredicate, 7, // Predicate_truncstorei16
/*  1452*/      OPC_CheckPredicate, 4, // Predicate_truncstorei16_a1_s0
/*  1454*/      OPC_EmitMergeInputChains1_0,
/*  1455*/      OPC_EmitConvertToTarget, 3,
/*  1457*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 2, 4, 
                // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storeh__regs__simm12_simple__regs__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1465*/    /*Scope*/ 25, /*->1491*/
/*  1466*/      OPC_CheckChild1Integer, 0, 
/*  1468*/      OPC_RecordChild2, // #1 = $op0
/*  1469*/      OPC_MoveChild2,
/*  1470*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1473*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1475*/      OPC_MoveParent,
/*  1476*/      OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1478*/      OPC_CheckPredicate, 3, // Predicate_store
/*  1480*/      OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1482*/      OPC_EmitMergeInputChains1_0,
/*  1483*/      OPC_EmitConvertToTarget, 1,
/*  1485*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__reg0__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#Ops*/, 2, 
                // Src: (st 0:{ *:[i32] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storew__reg0__simm12_simple__reg0__ (imm:{ *:[i32] }):$op0)
/*  1491*/    /*Scope*/ 42, /*->1534*/
/*  1492*/      OPC_RecordChild1, // #1 = $op0
/*  1493*/      OPC_MoveChild1,
/*  1494*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1496*/      OPC_CheckType, MVT::i32,
/*  1498*/      OPC_MoveParent,
/*  1499*/      OPC_MoveChild2,
/*  1500*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1503*/      OPC_RecordChild0, // #2 = $op1
/*  1504*/      OPC_MoveChild0,
/*  1505*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1507*/      OPC_MoveParent,
/*  1508*/      OPC_RecordChild1, // #3 = $op2
/*  1509*/      OPC_MoveChild1,
/*  1510*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1513*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1515*/      OPC_MoveParent,
/*  1516*/      OPC_MoveParent,
/*  1517*/      OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1519*/      OPC_CheckPredicate, 3, // Predicate_store
/*  1521*/      OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1523*/      OPC_EmitMergeInputChains1_0,
/*  1524*/      OPC_EmitConvertToTarget, 3,
/*  1526*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 2, 4, 
                // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storew__regs__simm12_simple__regs__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1534*/    /*Scope*/ 18|128,1/*146*/, /*->1682*/
/*  1536*/      OPC_CheckChild1Integer, 0, 
/*  1538*/      OPC_Scope, 42, /*->1582*/ // 4 children in Scope
/*  1540*/        OPC_RecordChild2, // #1 = $op0
/*  1541*/        OPC_MoveChild2,
/*  1542*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1545*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1547*/        OPC_MoveParent,
/*  1548*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1550*/        OPC_CheckPredicate, 5, // Predicate_truncstore
/*  1552*/        OPC_Scope, 13, /*->1567*/ // 2 children in Scope
/*  1554*/          OPC_CheckPredicate, 6, // Predicate_truncstorei8
/*  1556*/          OPC_CheckPredicate, 4, // Predicate_truncstorei8_a1_s0
/*  1558*/          OPC_EmitMergeInputChains1_0,
/*  1559*/          OPC_EmitConvertToTarget, 1,
/*  1561*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#Ops*/, 2, 
                    // Src: (st 0:{ *:[i32] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 14
                    // Dst: (i_store__opc_storeb__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_ (imm:{ *:[i32] }):$op0)
/*  1567*/        /*Scope*/ 13, /*->1581*/
/*  1568*/          OPC_CheckPredicate, 7, // Predicate_truncstorei16
/*  1570*/          OPC_CheckPredicate, 4, // Predicate_truncstorei16_a1_s0
/*  1572*/          OPC_EmitMergeInputChains1_0,
/*  1573*/          OPC_EmitConvertToTarget, 1,
/*  1575*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#Ops*/, 2, 
                    // Src: (st 0:{ *:[i32] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 14
                    // Dst: (i_store__opc_storeh__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_ (imm:{ *:[i32] }):$op0)
/*  1581*/        0, /*End of Scope*/
/*  1582*/      /*Scope*/ 22, /*->1605*/
/*  1583*/        OPC_CheckChild1Type, MVT::i8,
/*  1585*/        OPC_RecordChild2, // #1 = $op0
/*  1586*/        OPC_MoveChild2,
/*  1587*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1589*/        OPC_CheckType, MVT::i32,
/*  1591*/        OPC_MoveParent,
/*  1592*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1594*/        OPC_CheckPredicate, 3, // Predicate_store
/*  1596*/        OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1598*/        OPC_EmitMergeInputChains1_0,
/*  1599*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#Ops*/, 1, 
                  // Src: (st 0:{ *:[i8] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 11
                  // Dst: (i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0)
/*  1605*/      /*Scope*/ 22, /*->1628*/
/*  1606*/        OPC_CheckChild1Type, MVT::i16,
/*  1608*/        OPC_RecordChild2, // #1 = $op0
/*  1609*/        OPC_MoveChild2,
/*  1610*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1612*/        OPC_CheckType, MVT::i32,
/*  1614*/        OPC_MoveParent,
/*  1615*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1617*/        OPC_CheckPredicate, 3, // Predicate_store
/*  1619*/        OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1621*/        OPC_EmitMergeInputChains1_0,
/*  1622*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#Ops*/, 1, 
                  // Src: (st 0:{ *:[i16] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 11
                  // Dst: (i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0)
/*  1628*/      /*Scope*/ 52, /*->1681*/
/*  1629*/        OPC_RecordChild2, // #1 = $op0
/*  1630*/        OPC_MoveChild2,
/*  1631*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1633*/        OPC_CheckType, MVT::i32,
/*  1635*/        OPC_MoveParent,
/*  1636*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1638*/        OPC_Scope, 11, /*->1651*/ // 2 children in Scope
/*  1640*/          OPC_CheckPredicate, 3, // Predicate_store
/*  1642*/          OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1644*/          OPC_EmitMergeInputChains1_0,
/*  1645*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__reg0__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#Ops*/, 1, 
                    // Src: (st 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 11
                    // Dst: (i_store__opc_storew__reg0__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0)
/*  1651*/        /*Scope*/ 28, /*->1680*/
/*  1652*/          OPC_CheckPredicate, 5, // Predicate_truncstore
/*  1654*/          OPC_Scope, 11, /*->1667*/ // 2 children in Scope
/*  1656*/            OPC_CheckPredicate, 6, // Predicate_truncstorei8
/*  1658*/            OPC_CheckPredicate, 4, // Predicate_truncstorei8_a1_s0
/*  1660*/            OPC_EmitMergeInputChains1_0,
/*  1661*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#Ops*/, 1, 
                      // Src: (st 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 11
                      // Dst: (i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_ regs:{ *:[i32] }:$op0)
/*  1667*/          /*Scope*/ 11, /*->1679*/
/*  1668*/            OPC_CheckPredicate, 7, // Predicate_truncstorei16
/*  1670*/            OPC_CheckPredicate, 4, // Predicate_truncstorei16_a1_s0
/*  1672*/            OPC_EmitMergeInputChains1_0,
/*  1673*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#Ops*/, 1, 
                      // Src: (st 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 11
                      // Dst: (i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_ regs:{ *:[i32] }:$op0)
/*  1679*/          0, /*End of Scope*/
/*  1680*/        0, /*End of Scope*/
/*  1681*/      0, /*End of Scope*/
/*  1682*/    /*Scope*/ 126, /*->1809*/
/*  1683*/      OPC_RecordChild1, // #1 = $op0
/*  1684*/      OPC_MoveChild1,
/*  1685*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1687*/      OPC_CheckType, MVT::i32,
/*  1689*/      OPC_MoveParent,
/*  1690*/      OPC_RecordChild2, // #2 = $op1
/*  1691*/      OPC_MoveChild2,
/*  1692*/      OPC_Scope, 60, /*->1754*/ // 2 children in Scope
/*  1694*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1697*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  1699*/        OPC_MoveParent,
/*  1700*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1702*/        OPC_Scope, 34, /*->1738*/ // 2 children in Scope
/*  1704*/          OPC_CheckPredicate, 5, // Predicate_truncstore
/*  1706*/          OPC_Scope, 14, /*->1722*/ // 2 children in Scope
/*  1708*/            OPC_CheckPredicate, 6, // Predicate_truncstorei8
/*  1710*/            OPC_CheckPredicate, 4, // Predicate_truncstorei8_a1_s0
/*  1712*/            OPC_EmitMergeInputChains1_0,
/*  1713*/            OPC_EmitConvertToTarget, 2,
/*  1715*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 3, 
                      // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 10
                      // Dst: (i_store__opc_storeb__regs__simm12_simple__reg0__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1722*/          /*Scope*/ 14, /*->1737*/
/*  1723*/            OPC_CheckPredicate, 7, // Predicate_truncstorei16
/*  1725*/            OPC_CheckPredicate, 4, // Predicate_truncstorei16_a1_s0
/*  1727*/            OPC_EmitMergeInputChains1_0,
/*  1728*/            OPC_EmitConvertToTarget, 2,
/*  1730*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 3, 
                      // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 10
                      // Dst: (i_store__opc_storeh__regs__simm12_simple__reg0__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1737*/          0, /*End of Scope*/
/*  1738*/        /*Scope*/ 14, /*->1753*/
/*  1739*/          OPC_CheckPredicate, 3, // Predicate_store
/*  1741*/          OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1743*/          OPC_EmitMergeInputChains1_0,
/*  1744*/          OPC_EmitConvertToTarget, 2,
/*  1746*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#Ops*/, 1, 3, 
                    // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 10
                    // Dst: (i_store__opc_storew__regs__simm12_simple__reg0__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1753*/        0, /*End of Scope*/
/*  1754*/      /*Scope*/ 53, /*->1808*/
/*  1755*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1757*/        OPC_CheckType, MVT::i32,
/*  1759*/        OPC_MoveParent,
/*  1760*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1762*/        OPC_Scope, 30, /*->1794*/ // 2 children in Scope
/*  1764*/          OPC_CheckPredicate, 5, // Predicate_truncstore
/*  1766*/          OPC_Scope, 12, /*->1780*/ // 2 children in Scope
/*  1768*/            OPC_CheckPredicate, 6, // Predicate_truncstorei8
/*  1770*/            OPC_CheckPredicate, 4, // Predicate_truncstorei8_a1_s0
/*  1772*/            OPC_EmitMergeInputChains1_0,
/*  1773*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 2, 
                      // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 7
                      // Dst: (i_store__opc_storeb__regs__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1)
/*  1780*/          /*Scope*/ 12, /*->1793*/
/*  1781*/            OPC_CheckPredicate, 7, // Predicate_truncstorei16
/*  1783*/            OPC_CheckPredicate, 4, // Predicate_truncstorei16_a1_s0
/*  1785*/            OPC_EmitMergeInputChains1_0,
/*  1786*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 2, 
                      // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 7
                      // Dst: (i_store__opc_storeh__regs__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1)
/*  1793*/          0, /*End of Scope*/
/*  1794*/        /*Scope*/ 12, /*->1807*/
/*  1795*/          OPC_CheckPredicate, 3, // Predicate_store
/*  1797*/          OPC_CheckPredicate, 4, // Predicate_store_a1_s0
/*  1799*/          OPC_EmitMergeInputChains1_0,
/*  1800*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#Ops*/, 1, 2, 
                    // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 7
                    // Dst: (i_store__opc_storew__regs__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1)
/*  1807*/        0, /*End of Scope*/
/*  1808*/      0, /*End of Scope*/
/*  1809*/    0, /*End of Scope*/
/*  1810*/  /*SwitchOpcode*/ 68, TARGET_VAL(ISD::SHL),// ->1881
/*  1813*/    OPC_RecordChild0, // #0 = $op1
/*  1814*/    OPC_MoveChild0,
/*  1815*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1817*/    OPC_MoveParent,
/*  1818*/    OPC_Scope, 17, /*->1837*/ // 4 children in Scope
/*  1820*/      OPC_MoveChild1,
/*  1821*/      OPC_CheckAndImm, 31, 
/*  1823*/      OPC_RecordChild0, // #1 = $op2
/*  1824*/      OPC_MoveChild0,
/*  1825*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1827*/      OPC_MoveParent,
/*  1828*/      OPC_MoveParent,
/*  1829*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sll__regs__regs__regs__SHIFT_MASK_CLONE_), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 31:{ *:[i32] })) - Complexity = 14
                // Dst: (i_comp_3reg__opc_sll__regs__regs__regs__SHIFT_MASK_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1837*/    /*Scope*/ 18, /*->1856*/
/*  1838*/      OPC_RecordChild1, // #1 = $op2
/*  1839*/      OPC_MoveChild1,
/*  1840*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1843*/      OPC_CheckPredicate, 8, // Predicate_zext5To32imm
/*  1845*/      OPC_MoveParent,
/*  1846*/      OPC_EmitConvertToTarget, 1,
/*  1848*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm_shift__opc_slli__regs__regs__shift_imm__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_zext5To32imm>>:$op2) - Complexity = 9
                // Dst: (i_comp_2reg_imm_shift__opc_slli__regs__regs__shift_imm__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1856*/    /*Scope*/ 9, /*->1866*/
/*  1857*/      OPC_CheckChild1Integer, 16, 
/*  1859*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }) - Complexity = 9
                // Dst: (i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  1866*/    /*Scope*/ 13, /*->1880*/
/*  1867*/      OPC_RecordChild1, // #1 = $op2
/*  1868*/      OPC_MoveChild1,
/*  1869*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1871*/      OPC_MoveParent,
/*  1872*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sll__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (i_comp_3reg__opc_sll__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1880*/    0, /*End of Scope*/
/*  1881*/  /*SwitchOpcode*/ 59, TARGET_VAL(ISD::SRA),// ->1943
/*  1884*/    OPC_RecordChild0, // #0 = $op1
/*  1885*/    OPC_MoveChild0,
/*  1886*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1888*/    OPC_MoveParent,
/*  1889*/    OPC_Scope, 17, /*->1908*/ // 2 children in Scope
/*  1891*/      OPC_MoveChild1,
/*  1892*/      OPC_CheckAndImm, 31, 
/*  1894*/      OPC_RecordChild0, // #1 = $op2
/*  1895*/      OPC_MoveChild0,
/*  1896*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1898*/      OPC_MoveParent,
/*  1899*/      OPC_MoveParent,
/*  1900*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sra__regs__regs__regs__SHIFT_MASK_CLONE_), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 31:{ *:[i32] })) - Complexity = 14
                // Dst: (i_comp_3reg__opc_sra__regs__regs__regs__SHIFT_MASK_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1908*/    /*Scope*/ 33, /*->1942*/
/*  1909*/      OPC_RecordChild1, // #1 = $op2
/*  1910*/      OPC_MoveChild1,
/*  1911*/      OPC_Scope, 16, /*->1929*/ // 2 children in Scope
/*  1913*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1916*/        OPC_CheckPredicate, 8, // Predicate_zext5To32imm
/*  1918*/        OPC_MoveParent,
/*  1919*/        OPC_EmitConvertToTarget, 1,
/*  1921*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm_shift__opc_srai__regs__regs__shift_imm__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_zext5To32imm>>:$op2) - Complexity = 9
                  // Dst: (i_comp_2reg_imm_shift__opc_srai__regs__regs__shift_imm__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1929*/      /*Scope*/ 11, /*->1941*/
/*  1930*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1932*/        OPC_MoveParent,
/*  1933*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sra__regs__regs__regs__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sra__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1941*/      0, /*End of Scope*/
/*  1942*/    0, /*End of Scope*/
/*  1943*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::SRL),// ->2015
/*  1946*/    OPC_RecordChild0, // #0 = $op1
/*  1947*/    OPC_MoveChild0,
/*  1948*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1950*/    OPC_MoveParent,
/*  1951*/    OPC_Scope, 17, /*->1970*/ // 3 children in Scope
/*  1953*/      OPC_MoveChild1,
/*  1954*/      OPC_CheckAndImm, 31, 
/*  1956*/      OPC_RecordChild0, // #1 = $op2
/*  1957*/      OPC_MoveChild0,
/*  1958*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1960*/      OPC_MoveParent,
/*  1961*/      OPC_MoveParent,
/*  1962*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_srl__regs__regs__regs__SHIFT_MASK_CLONE_), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 31:{ *:[i32] })) - Complexity = 14
                // Dst: (i_comp_3reg__opc_srl__regs__regs__regs__SHIFT_MASK_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1970*/    /*Scope*/ 9, /*->1980*/
/*  1971*/      OPC_CheckChild1Integer, 31, 
/*  1973*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__reg0__), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (srl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 31:{ *:[i32] }) - Complexity = 10
                // Dst: (i_comp_3reg__opc_slt__regs__regs__reg0__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  1980*/    /*Scope*/ 33, /*->2014*/
/*  1981*/      OPC_RecordChild1, // #1 = $op2
/*  1982*/      OPC_MoveChild1,
/*  1983*/      OPC_Scope, 16, /*->2001*/ // 2 children in Scope
/*  1985*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1988*/        OPC_CheckPredicate, 8, // Predicate_zext5To32imm
/*  1990*/        OPC_MoveParent,
/*  1991*/        OPC_EmitConvertToTarget, 1,
/*  1993*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm_shift__opc_srli__regs__regs__shift_imm__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_zext5To32imm>>:$op2) - Complexity = 9
                  // Dst: (i_comp_2reg_imm_shift__opc_srli__regs__regs__shift_imm__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  2001*/      /*Scope*/ 11, /*->2013*/
/*  2002*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2004*/        OPC_MoveParent,
/*  2005*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_srl__regs__regs__regs__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                  // Dst: (i_comp_3reg__opc_srl__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2013*/      0, /*End of Scope*/
/*  2014*/    0, /*End of Scope*/
/*  2015*/  /*SwitchOpcode*/ 74|128,4/*586*/, TARGET_VAL(ISD::BRCOND),// ->2605
/*  2019*/    OPC_RecordNode, // #0 = 'brcond' chained node
/*  2020*/    OPC_Scope, 49|128,4/*561*/, /*->2584*/ // 2 children in Scope
/*  2023*/      OPC_MoveChild1,
/*  2024*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*  2027*/      OPC_RecordChild0, // #1 = $op0
/*  2028*/      OPC_MoveChild0,
/*  2029*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2031*/      OPC_Scope, 91|128,2/*347*/, /*->2381*/ // 2 children in Scope
/*  2034*/        OPC_MoveParent,
/*  2035*/        OPC_Scope, 114, /*->2151*/ // 4 children in Scope
/*  2037*/          OPC_CheckChild1Integer, 0, 
/*  2039*/          OPC_Scope, 36, /*->2077*/ // 4 children in Scope
/*  2041*/            OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2043*/            OPC_MoveParent,
/*  2044*/            OPC_RecordChild2, // #2 = $op1
/*  2045*/            OPC_MoveChild2,
/*  2046*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2049*/            OPC_MoveParent,
/*  2050*/            OPC_EmitMergeInputChains1_0,
/*  2051*/            OPC_Scope, 7, /*->2060*/ // 3 children in Scope
/*  2053*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_beq__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2060*/            /*Scope*/ 7, /*->2068*/
/*  2061*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__regs__reg0__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_beq__regs__reg0__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2068*/            /*Scope*/ 7, /*->2076*/
/*  2069*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_bgeu__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2076*/            0, /*End of Scope*/
/*  2077*/          /*Scope*/ 17, /*->2095*/
/*  2078*/            OPC_CheckChild2CondCode, ISD::SETGT,
/*  2080*/            OPC_MoveParent,
/*  2081*/            OPC_RecordChild2, // #2 = $op1
/*  2082*/            OPC_MoveChild2,
/*  2083*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2086*/            OPC_MoveParent,
/*  2087*/            OPC_EmitMergeInputChains1_0,
/*  2088*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_blt__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETGT:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                      // Dst: (i_control_conditional__opc_blt__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2095*/          /*Scope*/ 17, /*->2113*/
/*  2096*/            OPC_CheckChild2CondCode, ISD::SETLT,
/*  2098*/            OPC_MoveParent,
/*  2099*/            OPC_RecordChild2, // #2 = $op1
/*  2100*/            OPC_MoveChild2,
/*  2101*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2104*/            OPC_MoveParent,
/*  2105*/            OPC_EmitMergeInputChains1_0,
/*  2106*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_blt__regs__reg0__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                      // Dst: (i_control_conditional__opc_blt__regs__reg0__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2113*/          /*Scope*/ 36, /*->2150*/
/*  2114*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2116*/            OPC_MoveParent,
/*  2117*/            OPC_RecordChild2, // #2 = $op1
/*  2118*/            OPC_MoveChild2,
/*  2119*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2122*/            OPC_MoveParent,
/*  2123*/            OPC_EmitMergeInputChains1_0,
/*  2124*/            OPC_Scope, 7, /*->2133*/ // 3 children in Scope
/*  2126*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2133*/            /*Scope*/ 7, /*->2141*/
/*  2134*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bne__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_bne__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2141*/            /*Scope*/ 7, /*->2149*/
/*  2142*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bne__regs__reg0__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_bne__regs__reg0__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2149*/            0, /*End of Scope*/
/*  2150*/          0, /*End of Scope*/
/*  2151*/        /*Scope*/ 19, /*->2171*/
/*  2152*/          OPC_CheckChild1Integer, 1, 
/*  2154*/          OPC_CheckChild2CondCode, ISD::SETLT,
/*  2156*/          OPC_MoveParent,
/*  2157*/          OPC_RecordChild2, // #2 = $op1
/*  2158*/          OPC_MoveChild2,
/*  2159*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2162*/          OPC_MoveParent,
/*  2163*/          OPC_EmitMergeInputChains1_0,
/*  2164*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 1:{ *:[i32] }, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                    // Dst: (i_control_conditional__opc_bge__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2171*/        /*Scope*/ 28, /*->2200*/
/*  2172*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2183*/          OPC_CheckChild2CondCode, ISD::SETGT,
/*  2185*/          OPC_MoveParent,
/*  2186*/          OPC_RecordChild2, // #2 = $op1
/*  2187*/          OPC_MoveChild2,
/*  2188*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2191*/          OPC_MoveParent,
/*  2192*/          OPC_EmitMergeInputChains1_0,
/*  2193*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__regs__reg0__rel_addr12__), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, -1:{ *:[i32] }, SETGT:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                    // Dst: (i_control_conditional__opc_bge__regs__reg0__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2200*/        /*Scope*/ 50|128,1/*178*/, /*->2380*/
/*  2202*/          OPC_RecordChild1, // #2 = $op1
/*  2203*/          OPC_MoveChild1,
/*  2204*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2207*/          OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  2209*/          OPC_MoveParent,
/*  2210*/          OPC_Scope, 27, /*->2239*/ // 6 children in Scope
/*  2212*/            OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2214*/            OPC_MoveParent,
/*  2215*/            OPC_RecordChild2, // #3 = $op2
/*  2216*/            OPC_MoveChild2,
/*  2217*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2220*/            OPC_MoveParent,
/*  2221*/            OPC_EmitMergeInputChains1_0,
/*  2222*/            OPC_EmitConvertToTarget, 2,
/*  2224*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2232*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_beq__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2239*/          /*Scope*/ 27, /*->2267*/
/*  2240*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2242*/            OPC_MoveParent,
/*  2243*/            OPC_RecordChild2, // #3 = $op2
/*  2244*/            OPC_MoveChild2,
/*  2245*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2248*/            OPC_MoveParent,
/*  2249*/            OPC_EmitMergeInputChains1_0,
/*  2250*/            OPC_EmitConvertToTarget, 2,
/*  2252*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2260*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2267*/          /*Scope*/ 27, /*->2295*/
/*  2268*/            OPC_CheckChild2CondCode, ISD::SETGE,
/*  2270*/            OPC_MoveParent,
/*  2271*/            OPC_RecordChild2, // #3 = $op2
/*  2272*/            OPC_MoveChild2,
/*  2273*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2276*/            OPC_MoveParent,
/*  2277*/            OPC_EmitMergeInputChains1_0,
/*  2278*/            OPC_EmitConvertToTarget, 2,
/*  2280*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2288*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETGE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_beq__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2295*/          /*Scope*/ 27, /*->2323*/
/*  2296*/            OPC_CheckChild2CondCode, ISD::SETLT,
/*  2298*/            OPC_MoveParent,
/*  2299*/            OPC_RecordChild2, // #3 = $op2
/*  2300*/            OPC_MoveChild2,
/*  2301*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2304*/            OPC_MoveParent,
/*  2305*/            OPC_EmitMergeInputChains1_0,
/*  2306*/            OPC_EmitConvertToTarget, 2,
/*  2308*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2316*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2323*/          /*Scope*/ 27, /*->2351*/
/*  2324*/            OPC_CheckChild2CondCode, ISD::SETUGE,
/*  2326*/            OPC_MoveParent,
/*  2327*/            OPC_RecordChild2, // #3 = $op2
/*  2328*/            OPC_MoveChild2,
/*  2329*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2332*/            OPC_MoveParent,
/*  2333*/            OPC_EmitMergeInputChains1_0,
/*  2334*/            OPC_EmitConvertToTarget, 2,
/*  2336*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2344*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETUGE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_beq__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2351*/          /*Scope*/ 27, /*->2379*/
/*  2352*/            OPC_CheckChild2CondCode, ISD::SETULT,
/*  2354*/            OPC_MoveParent,
/*  2355*/            OPC_RecordChild2, // #3 = $op2
/*  2356*/            OPC_MoveChild2,
/*  2357*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2360*/            OPC_MoveParent,
/*  2361*/            OPC_EmitMergeInputChains1_0,
/*  2362*/            OPC_EmitConvertToTarget, 2,
/*  2364*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2372*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETULT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2379*/          0, /*End of Scope*/
/*  2380*/        0, /*End of Scope*/
/*  2381*/      /*Scope*/ 72|128,1/*200*/, /*->2583*/
/*  2383*/        OPC_CheckType, MVT::i32,
/*  2385*/        OPC_MoveParent,
/*  2386*/        OPC_RecordChild1, // #2 = $op1
/*  2387*/        OPC_MoveChild1,
/*  2388*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2390*/        OPC_MoveParent,
/*  2391*/        OPC_Scope, 18, /*->2411*/ // 10 children in Scope
/*  2393*/          OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2395*/          OPC_MoveParent,
/*  2396*/          OPC_RecordChild2, // #3 = $op2
/*  2397*/          OPC_MoveChild2,
/*  2398*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2401*/          OPC_MoveParent,
/*  2402*/          OPC_EmitMergeInputChains1_0,
/*  2403*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_beq__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2411*/        /*Scope*/ 18, /*->2430*/
/*  2412*/          OPC_CheckChild2CondCode, ISD::SETGE,
/*  2414*/          OPC_MoveParent,
/*  2415*/          OPC_RecordChild2, // #3 = $op2
/*  2416*/          OPC_MoveChild2,
/*  2417*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2420*/          OPC_MoveParent,
/*  2421*/          OPC_EmitMergeInputChains1_0,
/*  2422*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bge__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2430*/        /*Scope*/ 18, /*->2449*/
/*  2431*/          OPC_CheckChild2CondCode, ISD::SETUGE,
/*  2433*/          OPC_MoveParent,
/*  2434*/          OPC_RecordChild2, // #3 = $op2
/*  2435*/          OPC_MoveChild2,
/*  2436*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2439*/          OPC_MoveParent,
/*  2440*/          OPC_EmitMergeInputChains1_0,
/*  2441*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bgeu__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2449*/        /*Scope*/ 18, /*->2468*/
/*  2450*/          OPC_CheckChild2CondCode, ISD::SETLT,
/*  2452*/          OPC_MoveParent,
/*  2453*/          OPC_RecordChild2, // #3 = $op2
/*  2454*/          OPC_MoveChild2,
/*  2455*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2458*/          OPC_MoveParent,
/*  2459*/          OPC_EmitMergeInputChains1_0,
/*  2460*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_blt__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2468*/        /*Scope*/ 18, /*->2487*/
/*  2469*/          OPC_CheckChild2CondCode, ISD::SETULT,
/*  2471*/          OPC_MoveParent,
/*  2472*/          OPC_RecordChild2, // #3 = $op2
/*  2473*/          OPC_MoveChild2,
/*  2474*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2477*/          OPC_MoveParent,
/*  2478*/          OPC_EmitMergeInputChains1_0,
/*  2479*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bltu__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2487*/        /*Scope*/ 18, /*->2506*/
/*  2488*/          OPC_CheckChild2CondCode, ISD::SETNE,
/*  2490*/          OPC_MoveParent,
/*  2491*/          OPC_RecordChild2, // #3 = $op2
/*  2492*/          OPC_MoveChild2,
/*  2493*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2496*/          OPC_MoveParent,
/*  2497*/          OPC_EmitMergeInputChains1_0,
/*  2498*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bne__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bne__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2506*/        /*Scope*/ 18, /*->2525*/
/*  2507*/          OPC_CheckChild2CondCode, ISD::SETLE,
/*  2509*/          OPC_MoveParent,
/*  2510*/          OPC_RecordChild2, // #3 = $op2
/*  2511*/          OPC_MoveChild2,
/*  2512*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2515*/          OPC_MoveParent,
/*  2516*/          OPC_EmitMergeInputChains1_0,
/*  2517*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__swappedCmpClone0__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bge__regs__regs__rel_addr12__swappedCmpClone0__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2525*/        /*Scope*/ 18, /*->2544*/
/*  2526*/          OPC_CheckChild2CondCode, ISD::SETULE,
/*  2528*/          OPC_MoveParent,
/*  2529*/          OPC_RecordChild2, // #3 = $op2
/*  2530*/          OPC_MoveChild2,
/*  2531*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2534*/          OPC_MoveParent,
/*  2535*/          OPC_EmitMergeInputChains1_0,
/*  2536*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__swappedCmpClone0__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bgeu__regs__regs__rel_addr12__swappedCmpClone0__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2544*/        /*Scope*/ 18, /*->2563*/
/*  2545*/          OPC_CheckChild2CondCode, ISD::SETGT,
/*  2547*/          OPC_MoveParent,
/*  2548*/          OPC_RecordChild2, // #3 = $op2
/*  2549*/          OPC_MoveChild2,
/*  2550*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2553*/          OPC_MoveParent,
/*  2554*/          OPC_EmitMergeInputChains1_0,
/*  2555*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__swappedCmpClone0__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_blt__regs__regs__rel_addr12__swappedCmpClone0__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2563*/        /*Scope*/ 18, /*->2582*/
/*  2564*/          OPC_CheckChild2CondCode, ISD::SETUGT,
/*  2566*/          OPC_MoveParent,
/*  2567*/          OPC_RecordChild2, // #3 = $op2
/*  2568*/          OPC_MoveChild2,
/*  2569*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2572*/          OPC_MoveParent,
/*  2573*/          OPC_EmitMergeInputChains1_0,
/*  2574*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__swappedCmpClone0__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bltu__regs__regs__rel_addr12__swappedCmpClone0__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2582*/        0, /*End of Scope*/
/*  2583*/      0, /*End of Scope*/
/*  2584*/    /*Scope*/ 19, /*->2604*/
/*  2585*/      OPC_RecordChild1, // #1 = $op0
/*  2586*/      OPC_MoveChild1,
/*  2587*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2589*/      OPC_MoveParent,
/*  2590*/      OPC_RecordChild2, // #2 = $op1
/*  2591*/      OPC_MoveChild2,
/*  2592*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2595*/      OPC_MoveParent,
/*  2596*/      OPC_EmitMergeInputChains1_0,
/*  2597*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (brcond regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (bb:{ *:[Other] }):$op1) - Complexity = 4
                // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (bb:{ *:[Other] }):$op1)
/*  2604*/    0, /*End of Scope*/
/*  2605*/  /*SwitchOpcode*/ 8|128,3/*392*/, TARGET_VAL(ISD::SETCC),// ->3001
/*  2609*/    OPC_RecordChild0, // #0 = $op1
/*  2610*/    OPC_MoveChild0,
/*  2611*/    OPC_Scope, 34, /*->2647*/ // 2 children in Scope
/*  2613*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2616*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  2618*/      OPC_MoveParent,
/*  2619*/      OPC_CheckChild1Integer, 0, 
/*  2621*/      OPC_Scope, 11, /*->2634*/ // 2 children in Scope
/*  2623*/        OPC_CheckChild2CondCode, ISD::SETGT,
/*  2625*/        OPC_EmitConvertToTarget, 0,
/*  2627*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (setcc:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 13
                  // Dst: (i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  2634*/      /*Scope*/ 11, /*->2646*/
/*  2635*/        OPC_CheckChild2CondCode, ISD::SETNE,
/*  2637*/        OPC_EmitConvertToTarget, 0,
/*  2639*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (setcc:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 13
                  // Dst: (i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  2646*/      0, /*End of Scope*/
/*  2647*/    /*Scope*/ 95|128,2/*351*/, /*->3000*/
/*  2649*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2651*/      OPC_Scope, 41|128,1/*169*/, /*->2823*/ // 2 children in Scope
/*  2654*/        OPC_MoveParent,
/*  2655*/        OPC_Scope, 44, /*->2701*/ // 2 children in Scope
/*  2657*/          OPC_CheckChild1Integer, 0, 
/*  2659*/          OPC_Scope, 9, /*->2670*/ // 4 children in Scope
/*  2661*/            OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2663*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 0:{ *:[i32] }, SETEQ:{ *:[Other] }) - Complexity = 11
                      // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2670*/          /*Scope*/ 9, /*->2680*/
/*  2671*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2673*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_snez_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 11
                      // Dst: (i_snez_alias__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2680*/          /*Scope*/ 9, /*->2690*/
/*  2681*/            OPC_CheckChild2CondCode, ISD::SETGT,
/*  2683*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__reg0__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 10
                      // Dst: (i_comp_3reg__opc_slt__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2690*/          /*Scope*/ 9, /*->2700*/
/*  2691*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2693*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__reg0__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 10
                      // Dst: (i_comp_3reg__opc_sltu__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2700*/          0, /*End of Scope*/
/*  2701*/        /*Scope*/ 120, /*->2822*/
/*  2702*/          OPC_RecordChild1, // #1 = $op2
/*  2703*/          OPC_MoveChild1,
/*  2704*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2707*/          OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  2709*/          OPC_MoveParent,
/*  2710*/          OPC_Scope, 12, /*->2724*/ // 6 children in Scope
/*  2712*/            OPC_CheckChild2CondCode, ISD::SETLT,
/*  2714*/            OPC_EmitConvertToTarget, 1,
/*  2716*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2, SETLT:{ *:[Other] }) - Complexity = 9
                      // Dst: (i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  2724*/          /*Scope*/ 12, /*->2737*/
/*  2725*/            OPC_CheckChild2CondCode, ISD::SETULT,
/*  2727*/            OPC_EmitConvertToTarget, 1,
/*  2729*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2, SETULT:{ *:[Other] }) - Complexity = 9
                      // Dst: (i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  2737*/          /*Scope*/ 19, /*->2757*/
/*  2738*/            OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2740*/            OPC_EmitConvertToTarget, 1,
/*  2742*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  2750*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 3, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETEQ:{ *:[Other] }) - Complexity = 8
                      // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))
/*  2757*/          /*Scope*/ 19, /*->2777*/
/*  2758*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2760*/            OPC_EmitConvertToTarget, 1,
/*  2762*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  2770*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_snez_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 3, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETNE:{ *:[Other] }) - Complexity = 8
                      // Dst: (i_snez_alias__regs__regs__:{ *:[i32] } (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))
/*  2777*/          /*Scope*/ 19, /*->2797*/
/*  2778*/            OPC_CheckChild2CondCode, ISD::SETGE,
/*  2780*/            OPC_EmitConvertToTarget, 1,
/*  2782*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  2790*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 3, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETGE:{ *:[Other] }) - Complexity = 8
                      // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } (i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))
/*  2797*/          /*Scope*/ 23, /*->2821*/
/*  2798*/            OPC_CheckChild2CondCode, ISD::SETUGE,
/*  2800*/            OPC_EmitConvertToTarget, 1,
/*  2802*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  2810*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2813*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 3, 4, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETUGE:{ *:[Other] }) - Complexity = 8
                      // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } (i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), 1:{ *:[i32] })
/*  2821*/          0, /*End of Scope*/
/*  2822*/        0, /*End of Scope*/
/*  2823*/      /*Scope*/ 46|128,1/*174*/, /*->2999*/
/*  2825*/        OPC_CheckType, MVT::i32,
/*  2827*/        OPC_MoveParent,
/*  2828*/        OPC_RecordChild1, // #1 = $op2
/*  2829*/        OPC_MoveChild1,
/*  2830*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2832*/        OPC_MoveParent,
/*  2833*/        OPC_Scope, 10, /*->2845*/ // 10 children in Scope
/*  2835*/          OPC_CheckChild2CondCode, ISD::SETLT,
/*  2837*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, SETLT:{ *:[Other] }) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_slt__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2845*/        /*Scope*/ 10, /*->2856*/
/*  2846*/          OPC_CheckChild2CondCode, ISD::SETULT,
/*  2848*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, SETULT:{ *:[Other] }) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_sltu__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2856*/        /*Scope*/ 10, /*->2867*/
/*  2857*/          OPC_CheckChild2CondCode, ISD::SETGT,
/*  2859*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__regs__swappedCmpClone0__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, SETGT:{ *:[Other] }) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_slt__regs__regs__regs__swappedCmpClone0__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2867*/        /*Scope*/ 10, /*->2878*/
/*  2868*/          OPC_CheckChild2CondCode, ISD::SETUGT,
/*  2870*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__swappedCmpClone0__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, SETUGT:{ *:[Other] }) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_sltu__regs__regs__regs__swappedCmpClone0__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2878*/        /*Scope*/ 17, /*->2896*/
/*  2879*/          OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2881*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_xor__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  2889*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETEQ:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } (i_comp_3reg__opc_xor__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1))
/*  2896*/        /*Scope*/ 17, /*->2914*/
/*  2897*/          OPC_CheckChild2CondCode, ISD::SETNE,
/*  2899*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_xor__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  2907*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_snez_alias__regs__regs__), 0,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETNE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_snez_alias__regs__regs__:{ *:[i32] } (i_comp_3reg__opc_xor__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1))
/*  2914*/        /*Scope*/ 17, /*->2932*/
/*  2915*/          OPC_CheckChild2CondCode, ISD::SETGE,
/*  2917*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  2925*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } (i_comp_3reg__opc_slt__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1))
/*  2932*/        /*Scope*/ 21, /*->2954*/
/*  2933*/          OPC_CheckChild2CondCode, ISD::SETLE,
/*  2935*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*  2943*/          OPC_EmitInteger, MVT::i32, 1, 
/*  2946*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } (i_comp_3reg__opc_slt__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0), 1:{ *:[i32] })
/*  2954*/        /*Scope*/ 21, /*->2976*/
/*  2955*/          OPC_CheckChild2CondCode, ISD::SETUGE,
/*  2957*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  2965*/          OPC_EmitInteger, MVT::i32, 1, 
/*  2968*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } (i_comp_3reg__opc_sltu__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1), 1:{ *:[i32] })
/*  2976*/        /*Scope*/ 21, /*->2998*/
/*  2977*/          OPC_CheckChild2CondCode, ISD::SETULE,
/*  2979*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*  2987*/          OPC_EmitInteger, MVT::i32, 1, 
/*  2990*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } (i_comp_3reg__opc_sltu__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0), 1:{ *:[i32] })
/*  2998*/        0, /*End of Scope*/
/*  2999*/      0, /*End of Scope*/
/*  3000*/    0, /*End of Scope*/
/*  3001*/  /*SwitchOpcode*/ 101|128,3/*485*/, TARGET_VAL(ISD::LOAD),// ->3490
/*  3005*/    OPC_RecordMemRef,
/*  3006*/    OPC_RecordNode, // #0 = 'ld' chained node
/*  3007*/    OPC_Scope, 45|128,1/*173*/, /*->3183*/ // 2 children in Scope
/*  3010*/      OPC_MoveChild1,
/*  3011*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  3014*/      OPC_RecordChild0, // #1 = $op1
/*  3015*/      OPC_MoveChild0,
/*  3016*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3018*/      OPC_MoveParent,
/*  3019*/      OPC_RecordChild1, // #2 = $op2
/*  3020*/      OPC_MoveChild1,
/*  3021*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3024*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  3026*/      OPC_MoveParent,
/*  3027*/      OPC_MoveParent,
/*  3028*/      OPC_CheckPredicate, 9, // Predicate_unindexedload
/*  3030*/      OPC_CheckType, MVT::i32,
/*  3032*/      OPC_Scope, 17, /*->3051*/ // 6 children in Scope
/*  3034*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*  3036*/        OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*  3038*/        OPC_CheckPredicate, 4, // Predicate_sextloadi8_a1_s0
/*  3040*/        OPC_EmitMergeInputChains1_0,
/*  3041*/        OPC_EmitConvertToTarget, 2,
/*  3043*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadb__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3051*/      /*Scope*/ 17, /*->3069*/
/*  3052*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*  3054*/        OPC_CheckPredicate, 6, // Predicate_zextloadi8
/*  3056*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8_a1_s0
/*  3058*/        OPC_EmitMergeInputChains1_0,
/*  3059*/        OPC_EmitConvertToTarget, 2,
/*  3061*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>><<P:Predicate_zextloadi8_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadbu__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3069*/      /*Scope*/ 17, /*->3087*/
/*  3070*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*  3072*/        OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*  3074*/        OPC_CheckPredicate, 4, // Predicate_sextloadi16_a1_s0
/*  3076*/        OPC_EmitMergeInputChains1_0,
/*  3077*/        OPC_EmitConvertToTarget, 2,
/*  3079*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadh__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3087*/      /*Scope*/ 17, /*->3105*/
/*  3088*/        OPC_CheckPredicate, 11, // Predicate_zextload
/*  3090*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*  3092*/        OPC_CheckPredicate, 4, // Predicate_zextloadi16_a1_s0
/*  3094*/        OPC_EmitMergeInputChains1_0,
/*  3095*/        OPC_EmitConvertToTarget, 2,
/*  3097*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadhu__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3105*/      /*Scope*/ 15, /*->3121*/
/*  3106*/        OPC_CheckPredicate, 12, // Predicate_load
/*  3108*/        OPC_CheckPredicate, 4, // Predicate_load_a1_s0
/*  3110*/        OPC_EmitMergeInputChains1_0,
/*  3111*/        OPC_EmitConvertToTarget, 2,
/*  3113*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadw__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadw__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3121*/      /*Scope*/ 60, /*->3182*/
/*  3122*/        OPC_CheckPredicate, 13, // Predicate_extload
/*  3124*/        OPC_Scope, 27, /*->3153*/ // 2 children in Scope
/*  3126*/          OPC_CheckPredicate, 6, // Predicate_extloadi8
/*  3128*/          OPC_CheckPredicate, 4, // Predicate_extloadi8_a1_s0
/*  3130*/          OPC_EmitMergeInputChains1_0,
/*  3131*/          OPC_EmitConvertToTarget, 2,
/*  3133*/          OPC_Scope, 8, /*->3143*/ // 2 children in Scope
/*  3135*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__regs__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 13
                      // Dst: (i_load__opc_loadb__regs__simm12_simple__regs__AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3143*/          /*Scope*/ 8, /*->3152*/
/*  3144*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 13
                      // Dst: (i_load__opc_loadbu__regs__simm12_simple__regs__AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3152*/          0, /*End of Scope*/
/*  3153*/        /*Scope*/ 27, /*->3181*/
/*  3154*/          OPC_CheckPredicate, 7, // Predicate_extloadi16
/*  3156*/          OPC_CheckPredicate, 4, // Predicate_extloadi16_a1_s0
/*  3158*/          OPC_EmitMergeInputChains1_0,
/*  3159*/          OPC_EmitConvertToTarget, 2,
/*  3161*/          OPC_Scope, 8, /*->3171*/ // 2 children in Scope
/*  3163*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__regs__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 13
                      // Dst: (i_load__opc_loadh__regs__simm12_simple__regs__AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3171*/          /*Scope*/ 8, /*->3180*/
/*  3172*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 13
                      // Dst: (i_load__opc_loadhu__regs__simm12_simple__regs__AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3180*/          0, /*End of Scope*/
/*  3181*/        0, /*End of Scope*/
/*  3182*/      0, /*End of Scope*/
/*  3183*/    /*Scope*/ 48|128,2/*304*/, /*->3489*/
/*  3185*/      OPC_RecordChild1, // #1 = $op1
/*  3186*/      OPC_MoveChild1,
/*  3187*/      OPC_Scope, 24|128,1/*152*/, /*->3342*/ // 2 children in Scope
/*  3190*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3193*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  3195*/        OPC_MoveParent,
/*  3196*/        OPC_CheckPredicate, 9, // Predicate_unindexedload
/*  3198*/        OPC_CheckType, MVT::i32,
/*  3200*/        OPC_Scope, 16, /*->3218*/ // 6 children in Scope
/*  3202*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*  3204*/          OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*  3206*/          OPC_CheckPredicate, 4, // Predicate_sextloadi8_a1_s0
/*  3208*/          OPC_EmitMergeInputChains1_0,
/*  3209*/          OPC_EmitConvertToTarget, 1,
/*  3211*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadb__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3218*/        /*Scope*/ 16, /*->3235*/
/*  3219*/          OPC_CheckPredicate, 11, // Predicate_zextload
/*  3221*/          OPC_CheckPredicate, 6, // Predicate_zextloadi8
/*  3223*/          OPC_CheckPredicate, 4, // Predicate_zextloadi8_a1_s0
/*  3225*/          OPC_EmitMergeInputChains1_0,
/*  3226*/          OPC_EmitConvertToTarget, 1,
/*  3228*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>><<P:Predicate_zextloadi8_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadbu__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3235*/        /*Scope*/ 16, /*->3252*/
/*  3236*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*  3238*/          OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*  3240*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16_a1_s0
/*  3242*/          OPC_EmitMergeInputChains1_0,
/*  3243*/          OPC_EmitConvertToTarget, 1,
/*  3245*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadh__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3252*/        /*Scope*/ 16, /*->3269*/
/*  3253*/          OPC_CheckPredicate, 11, // Predicate_zextload
/*  3255*/          OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*  3257*/          OPC_CheckPredicate, 4, // Predicate_zextloadi16_a1_s0
/*  3259*/          OPC_EmitMergeInputChains1_0,
/*  3260*/          OPC_EmitConvertToTarget, 1,
/*  3262*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadhu__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3269*/        /*Scope*/ 14, /*->3284*/
/*  3270*/          OPC_CheckPredicate, 12, // Predicate_load
/*  3272*/          OPC_CheckPredicate, 4, // Predicate_load_a1_s0
/*  3274*/          OPC_EmitMergeInputChains1_0,
/*  3275*/          OPC_EmitConvertToTarget, 1,
/*  3277*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadw__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadw__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3284*/        /*Scope*/ 56, /*->3341*/
/*  3285*/          OPC_CheckPredicate, 13, // Predicate_extload
/*  3287*/          OPC_Scope, 25, /*->3314*/ // 2 children in Scope
/*  3289*/            OPC_CheckPredicate, 6, // Predicate_extloadi8
/*  3291*/            OPC_CheckPredicate, 4, // Predicate_extloadi8_a1_s0
/*  3293*/            OPC_EmitMergeInputChains1_0,
/*  3294*/            OPC_EmitConvertToTarget, 1,
/*  3296*/            OPC_Scope, 7, /*->3305*/ // 2 children in Scope
/*  3298*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__reg0__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 9
                        // Dst: (i_load__opc_loadb__regs__simm12_simple__reg0__AEXT_CLONE_:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3305*/            /*Scope*/ 7, /*->3313*/
/*  3306*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 9
                        // Dst: (i_load__opc_loadbu__regs__simm12_simple__reg0__AEXT_CLONE_:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3313*/            0, /*End of Scope*/
/*  3314*/          /*Scope*/ 25, /*->3340*/
/*  3315*/            OPC_CheckPredicate, 7, // Predicate_extloadi16
/*  3317*/            OPC_CheckPredicate, 4, // Predicate_extloadi16_a1_s0
/*  3319*/            OPC_EmitMergeInputChains1_0,
/*  3320*/            OPC_EmitConvertToTarget, 1,
/*  3322*/            OPC_Scope, 7, /*->3331*/ // 2 children in Scope
/*  3324*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__reg0__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 9
                        // Dst: (i_load__opc_loadh__regs__simm12_simple__reg0__AEXT_CLONE_:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3331*/            /*Scope*/ 7, /*->3339*/
/*  3332*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 9
                        // Dst: (i_load__opc_loadhu__regs__simm12_simple__reg0__AEXT_CLONE_:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3339*/            0, /*End of Scope*/
/*  3340*/          0, /*End of Scope*/
/*  3341*/        0, /*End of Scope*/
/*  3342*/      /*Scope*/ 16|128,1/*144*/, /*->3488*/
/*  3344*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3346*/        OPC_CheckType, MVT::i32,
/*  3348*/        OPC_MoveParent,
/*  3349*/        OPC_CheckPredicate, 9, // Predicate_unindexedload
/*  3351*/        OPC_CheckType, MVT::i32,
/*  3353*/        OPC_Scope, 14, /*->3369*/ // 9 children in Scope
/*  3355*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*  3357*/          OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*  3359*/          OPC_CheckPredicate, 4, // Predicate_sextloadi8_a1_s0
/*  3361*/          OPC_EmitMergeInputChains1_0,
/*  3362*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3369*/        /*Scope*/ 14, /*->3384*/
/*  3370*/          OPC_CheckPredicate, 13, // Predicate_extload
/*  3372*/          OPC_CheckPredicate, 6, // Predicate_extloadi8
/*  3374*/          OPC_CheckPredicate, 4, // Predicate_extloadi8_a1_s0
/*  3376*/          OPC_EmitMergeInputChains1_0,
/*  3377*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3384*/        /*Scope*/ 14, /*->3399*/
/*  3385*/          OPC_CheckPredicate, 11, // Predicate_zextload
/*  3387*/          OPC_CheckPredicate, 6, // Predicate_zextloadi8
/*  3389*/          OPC_CheckPredicate, 4, // Predicate_zextloadi8_a1_s0
/*  3391*/          OPC_EmitMergeInputChains1_0,
/*  3392*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>><<P:Predicate_zextloadi8_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3399*/        /*Scope*/ 14, /*->3414*/
/*  3400*/          OPC_CheckPredicate, 13, // Predicate_extload
/*  3402*/          OPC_CheckPredicate, 6, // Predicate_extloadi8
/*  3404*/          OPC_CheckPredicate, 4, // Predicate_extloadi8_a1_s0
/*  3406*/          OPC_EmitMergeInputChains1_0,
/*  3407*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3414*/        /*Scope*/ 14, /*->3429*/
/*  3415*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*  3417*/          OPC_CheckPredicate, 7, // Predicate_sextloadi16
/*  3419*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16_a1_s0
/*  3421*/          OPC_EmitMergeInputChains1_0,
/*  3422*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3429*/        /*Scope*/ 14, /*->3444*/
/*  3430*/          OPC_CheckPredicate, 13, // Predicate_extload
/*  3432*/          OPC_CheckPredicate, 7, // Predicate_extloadi16
/*  3434*/          OPC_CheckPredicate, 4, // Predicate_extloadi16_a1_s0
/*  3436*/          OPC_EmitMergeInputChains1_0,
/*  3437*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3444*/        /*Scope*/ 14, /*->3459*/
/*  3445*/          OPC_CheckPredicate, 11, // Predicate_zextload
/*  3447*/          OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*  3449*/          OPC_CheckPredicate, 4, // Predicate_zextloadi16_a1_s0
/*  3451*/          OPC_EmitMergeInputChains1_0,
/*  3452*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3459*/        /*Scope*/ 14, /*->3474*/
/*  3460*/          OPC_CheckPredicate, 13, // Predicate_extload
/*  3462*/          OPC_CheckPredicate, 7, // Predicate_extloadi16
/*  3464*/          OPC_CheckPredicate, 4, // Predicate_extloadi16_a1_s0
/*  3466*/          OPC_EmitMergeInputChains1_0,
/*  3467*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3474*/        /*Scope*/ 12, /*->3487*/
/*  3475*/          OPC_CheckPredicate, 12, // Predicate_load
/*  3477*/          OPC_CheckPredicate, 4, // Predicate_load_a1_s0
/*  3479*/          OPC_EmitMergeInputChains1_0,
/*  3480*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadw__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadw__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3487*/        0, /*End of Scope*/
/*  3488*/      0, /*End of Scope*/
/*  3489*/    0, /*End of Scope*/
/*  3490*/  /*SwitchOpcode*/ 105, TARGET_VAL(ISD::OR),// ->3598
/*  3493*/    OPC_Scope, 25, /*->3520*/ // 3 children in Scope
/*  3495*/      OPC_RecordChild0, // #0 = $op1
/*  3496*/      OPC_MoveChild0,
/*  3497*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3499*/      OPC_MoveParent,
/*  3500*/      OPC_MoveChild1,
/*  3501*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  3504*/      OPC_RecordChild0, // #1 = $op2
/*  3505*/      OPC_MoveChild0,
/*  3506*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3508*/      OPC_MoveParent,
/*  3509*/      OPC_CheckChild1Integer, 16, 
/*  3511*/      OPC_MoveParent,
/*  3512*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 13
                // Dst: (i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  3520*/    /*Scope*/ 25, /*->3546*/
/*  3521*/      OPC_MoveChild0,
/*  3522*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  3525*/      OPC_RecordChild0, // #0 = $op2
/*  3526*/      OPC_MoveChild0,
/*  3527*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3529*/      OPC_MoveParent,
/*  3530*/      OPC_CheckChild1Integer, 16, 
/*  3532*/      OPC_MoveParent,
/*  3533*/      OPC_RecordChild1, // #1 = $op1
/*  3534*/      OPC_MoveChild1,
/*  3535*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3537*/      OPC_MoveParent,
/*  3538*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:{ *:[i32] } (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1) - Complexity = 13
                // Dst: (i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  3546*/    /*Scope*/ 50, /*->3597*/
/*  3547*/      OPC_RecordChild0, // #0 = $op1
/*  3548*/      OPC_MoveChild0,
/*  3549*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3551*/      OPC_MoveParent,
/*  3552*/      OPC_RecordChild1, // #1 = $op2
/*  3553*/      OPC_MoveChild1,
/*  3554*/      OPC_Scope, 28, /*->3584*/ // 2 children in Scope
/*  3556*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3559*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  3561*/        OPC_MoveParent,
/*  3562*/        OPC_EmitConvertToTarget, 1,
/*  3564*/        OPC_Scope, 8, /*->3574*/ // 2 children in Scope
/*  3566*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 9
                    // Dst: (i_comp_2reg_imm__opc_ori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3574*/        /*Scope*/ 8, /*->3583*/
/*  3575*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ori_emulation_alias__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 8
                    // Dst: (i_ori_emulation_alias__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3583*/        0, /*End of Scope*/
/*  3584*/      /*Scope*/ 11, /*->3596*/
/*  3585*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3587*/        OPC_MoveParent,
/*  3588*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_or__regs__regs__regs__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                  // Dst: (i_comp_3reg__opc_or__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  3596*/      0, /*End of Scope*/
/*  3597*/    0, /*End of Scope*/
/*  3598*/  /*SwitchOpcode*/ 9|128,2/*265*/, TARGET_VAL(CodasipISD::TailCall),// ->3867
/*  3602*/    OPC_RecordNode, // #0 = 'TailCall' chained node
/*  3603*/    OPC_CaptureGlueInput,
/*  3604*/    OPC_Scope, 116|128,1/*244*/, /*->3851*/ // 2 children in Scope
/*  3607*/      OPC_MoveChild1,
/*  3608*/      OPC_CheckOpcode, TARGET_VAL(CodasipISD::GAWrap),
/*  3611*/      OPC_RecordChild0, // #1 = $op0
/*  3612*/      OPC_MoveChild0,
/*  3613*/      OPC_SwitchOpcode /*4 cases */, 56, TARGET_VAL(ISD::TargetGlobalAddress),// ->3673
/*  3617*/        OPC_MoveParent,
/*  3618*/        OPC_CheckType, MVT::i32,
/*  3620*/        OPC_MoveParent,
/*  3621*/        OPC_EmitMergeInputChains1_0,
/*  3622*/        OPC_Scope, 6, /*->3630*/ // 7 children in Scope
/*  3624*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 11
                    // Dst: (i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3630*/        /*Scope*/ 6, /*->3637*/
/*  3631*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3637*/        /*Scope*/ 6, /*->3644*/
/*  3638*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3644*/        /*Scope*/ 6, /*->3651*/
/*  3645*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3651*/        /*Scope*/ 6, /*->3658*/
/*  3652*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3658*/        /*Scope*/ 6, /*->3665*/
/*  3659*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3665*/        /*Scope*/ 6, /*->3672*/
/*  3666*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 9
                    // Dst: (i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3672*/        0, /*End of Scope*/
/*  3673*/      /*SwitchOpcode*/ 56, TARGET_VAL(ISD::TargetExternalSymbol),// ->3732
/*  3676*/        OPC_MoveParent,
/*  3677*/        OPC_CheckType, MVT::i32,
/*  3679*/        OPC_MoveParent,
/*  3680*/        OPC_EmitMergeInputChains1_0,
/*  3681*/        OPC_Scope, 6, /*->3689*/ // 7 children in Scope
/*  3683*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 11
                    // Dst: (i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3689*/        /*Scope*/ 6, /*->3696*/
/*  3690*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3696*/        /*Scope*/ 6, /*->3703*/
/*  3697*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3703*/        /*Scope*/ 6, /*->3710*/
/*  3704*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3710*/        /*Scope*/ 6, /*->3717*/
/*  3711*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3717*/        /*Scope*/ 6, /*->3724*/
/*  3718*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3724*/        /*Scope*/ 6, /*->3731*/
/*  3725*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 9
                    // Dst: (i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3731*/        0, /*End of Scope*/
/*  3732*/      /*SwitchOpcode*/ 56, TARGET_VAL(ISD::MCSymbol),// ->3791
/*  3735*/        OPC_MoveParent,
/*  3736*/        OPC_CheckType, MVT::i32,
/*  3738*/        OPC_MoveParent,
/*  3739*/        OPC_EmitMergeInputChains1_0,
/*  3740*/        OPC_Scope, 6, /*->3748*/ // 7 children in Scope
/*  3742*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 11
                    // Dst: (i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3748*/        /*Scope*/ 6, /*->3755*/
/*  3749*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3755*/        /*Scope*/ 6, /*->3762*/
/*  3756*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3762*/        /*Scope*/ 6, /*->3769*/
/*  3763*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3769*/        /*Scope*/ 6, /*->3776*/
/*  3770*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3776*/        /*Scope*/ 6, /*->3783*/
/*  3777*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3783*/        /*Scope*/ 6, /*->3790*/
/*  3784*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 9
                    // Dst: (i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3790*/        0, /*End of Scope*/
/*  3791*/      /*SwitchOpcode*/ 56, TARGET_VAL(ISD::TargetBlockAddress),// ->3850
/*  3794*/        OPC_MoveParent,
/*  3795*/        OPC_CheckType, MVT::i32,
/*  3797*/        OPC_MoveParent,
/*  3798*/        OPC_EmitMergeInputChains1_0,
/*  3799*/        OPC_Scope, 6, /*->3807*/ // 7 children in Scope
/*  3801*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 11
                    // Dst: (i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3807*/        /*Scope*/ 6, /*->3814*/
/*  3808*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3814*/        /*Scope*/ 6, /*->3821*/
/*  3815*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3821*/        /*Scope*/ 6, /*->3828*/
/*  3822*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3828*/        /*Scope*/ 6, /*->3835*/
/*  3829*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3835*/        /*Scope*/ 6, /*->3842*/
/*  3836*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3842*/        /*Scope*/ 6, /*->3849*/
/*  3843*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 9
                    // Dst: (i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3849*/        0, /*End of Scope*/
/*  3850*/      0, // EndSwitchOpcode
/*  3851*/    /*Scope*/ 14, /*->3866*/
/*  3852*/      OPC_RecordChild1, // #1 = $op0
/*  3853*/      OPC_MoveChild1,
/*  3854*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3856*/      OPC_CheckType, MVT::i32,
/*  3858*/      OPC_MoveParent,
/*  3859*/      OPC_EmitMergeInputChains1_0,
/*  3860*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jump_reg_alias__regs__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    1/*#Ops*/, 1, 
                // Src: (TailCall regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0) - Complexity = 6
                // Dst: (i_jump_reg_alias__regs__TAILCALL_CLONE_ regs:{ *:[i32] }:$op0)
/*  3866*/    0, /*End of Scope*/
/*  3867*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->3892
/*  3870*/    OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*  3871*/    OPC_CheckChild1Integer, 17|128,1/*145*/, 
/*  3874*/    OPC_RecordChild2, // #1 = $op1
/*  3875*/    OPC_RecordChild3, // #2 = $op2
/*  3876*/    OPC_MoveChild3,
/*  3877*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3880*/    OPC_MoveParent,
/*  3881*/    OPC_EmitMergeInputChains1_0,
/*  3882*/    OPC_EmitConvertToTarget, 2,
/*  3884*/    OPC_MorphNodeTo1, TARGET_VAL(Codasip::hwloop_loop_decrement_reg), 0|OPFL_Chain,
                  MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_w_chain:{ *:[i32] } 145:{ *:[iPTR] }, regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2) - Complexity = 11
              // Dst: (hwloop_loop_decrement_reg:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3892*/  /*SwitchOpcode*/ 89, TARGET_VAL(CodasipISD::Call),// ->3984
/*  3895*/    OPC_RecordNode, // #0 = 'Call' chained node
/*  3896*/    OPC_CaptureGlueInput,
/*  3897*/    OPC_Scope, 68, /*->3967*/ // 2 children in Scope
/*  3899*/      OPC_MoveChild1,
/*  3900*/      OPC_CheckOpcode, TARGET_VAL(CodasipISD::GAWrap),
/*  3903*/      OPC_RecordChild0, // #1 = $op0
/*  3904*/      OPC_MoveChild0,
/*  3905*/      OPC_SwitchOpcode /*4 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->3921
/*  3909*/        OPC_MoveParent,
/*  3910*/        OPC_CheckType, MVT::i32,
/*  3912*/        OPC_MoveParent,
/*  3913*/        OPC_EmitMergeInputChains1_0,
/*  3914*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_rel_alias__rel_addr20__), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                  // Dst: (i_call_rel_alias__rel_addr20__:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)
/*  3921*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetExternalSymbol),// ->3936
/*  3924*/        OPC_MoveParent,
/*  3925*/        OPC_CheckType, MVT::i32,
/*  3927*/        OPC_MoveParent,
/*  3928*/        OPC_EmitMergeInputChains1_0,
/*  3929*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_rel_alias__rel_addr20__ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                  // Dst: (i_call_rel_alias__rel_addr20__ES:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)
/*  3936*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::MCSymbol),// ->3951
/*  3939*/        OPC_MoveParent,
/*  3940*/        OPC_CheckType, MVT::i32,
/*  3942*/        OPC_MoveParent,
/*  3943*/        OPC_EmitMergeInputChains1_0,
/*  3944*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_rel_alias__rel_addr20__MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                  // Dst: (i_call_rel_alias__rel_addr20__MC:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)
/*  3951*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetBlockAddress),// ->3966
/*  3954*/        OPC_MoveParent,
/*  3955*/        OPC_CheckType, MVT::i32,
/*  3957*/        OPC_MoveParent,
/*  3958*/        OPC_EmitMergeInputChains1_0,
/*  3959*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_rel_alias__rel_addr20__BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                  // Dst: (i_call_rel_alias__rel_addr20__BA:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)
/*  3966*/      0, // EndSwitchOpcode
/*  3967*/    /*Scope*/ 15, /*->3983*/
/*  3968*/      OPC_RecordChild1, // #1 = $op0
/*  3969*/      OPC_MoveChild1,
/*  3970*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3972*/      OPC_CheckType, MVT::i32,
/*  3974*/      OPC_MoveParent,
/*  3975*/      OPC_EmitMergeInputChains1_0,
/*  3976*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_reg_alias__regs__), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (Call regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0) - Complexity = 6
                // Dst: (i_call_reg_alias__regs__:{ *:[i32] } regs:{ *:[i32] }:$op0)
/*  3983*/    0, /*End of Scope*/
/*  3984*/  /*SwitchOpcode*/ 47, TARGET_VAL(ISD::SUB),// ->4034
/*  3987*/    OPC_Scope, 25, /*->4014*/ // 2 children in Scope
/*  3989*/      OPC_CheckChild0Integer, 0, 
/*  3991*/      OPC_RecordChild1, // #0 = $op1
/*  3992*/      OPC_MoveChild1,
/*  3993*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3995*/      OPC_MoveParent,
/*  3996*/      OPC_Scope, 7, /*->4005*/ // 2 children in Scope
/*  3998*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sub__regs__reg0__regs__), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i32] } 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1) - Complexity = 10
                  // Dst: (i_comp_3reg__opc_sub__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  4005*/      /*Scope*/ 7, /*->4013*/
/*  4006*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_neg_alias__regs__regs__), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i32] } 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1) - Complexity = 10
                  // Dst: (i_neg_alias__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  4013*/      0, /*End of Scope*/
/*  4014*/    /*Scope*/ 18, /*->4033*/
/*  4015*/      OPC_RecordChild0, // #0 = $op1
/*  4016*/      OPC_MoveChild0,
/*  4017*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4019*/      OPC_MoveParent,
/*  4020*/      OPC_RecordChild1, // #1 = $op2
/*  4021*/      OPC_MoveChild1,
/*  4022*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4024*/      OPC_MoveParent,
/*  4025*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sub__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (i_comp_3reg__opc_sub__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  4033*/    0, /*End of Scope*/
/*  4034*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::SELECT),// ->4347
/*  4038*/    OPC_Scope, 22|128,2/*278*/, /*->4319*/ // 2 children in Scope
/*  4041*/      OPC_MoveChild0,
/*  4042*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*  4045*/      OPC_RecordChild0, // #0 = $op0
/*  4046*/      OPC_MoveChild0,
/*  4047*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4049*/      OPC_CheckType, MVT::i32,
/*  4051*/      OPC_MoveParent,
/*  4052*/      OPC_RecordChild1, // #1 = $op1
/*  4053*/      OPC_MoveChild1,
/*  4054*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4056*/      OPC_MoveParent,
/*  4057*/      OPC_Scope, 25, /*->4084*/ // 10 children in Scope
/*  4059*/        OPC_CheckChild2CondCode, ISD::SETEQ,
/*  4061*/        OPC_MoveParent,
/*  4062*/        OPC_RecordChild1, // #2 = $op2
/*  4063*/        OPC_MoveChild1,
/*  4064*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4066*/        OPC_MoveParent,
/*  4067*/        OPC_RecordChild2, // #3 = $op3
/*  4068*/        OPC_MoveChild2,
/*  4069*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4071*/        OPC_MoveParent,
/*  4072*/        OPC_CheckType, MVT::i32,
/*  4074*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_7), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETEQ:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_7:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4084*/      /*Scope*/ 25, /*->4110*/
/*  4085*/        OPC_CheckChild2CondCode, ISD::SETNE,
/*  4087*/        OPC_MoveParent,
/*  4088*/        OPC_RecordChild1, // #2 = $op2
/*  4089*/        OPC_MoveChild1,
/*  4090*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4092*/        OPC_MoveParent,
/*  4093*/        OPC_RecordChild2, // #3 = $op3
/*  4094*/        OPC_MoveChild2,
/*  4095*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4097*/        OPC_MoveParent,
/*  4098*/        OPC_CheckType, MVT::i32,
/*  4100*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_8), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETNE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_8:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4110*/      /*Scope*/ 25, /*->4136*/
/*  4111*/        OPC_CheckChild2CondCode, ISD::SETGE,
/*  4113*/        OPC_MoveParent,
/*  4114*/        OPC_RecordChild1, // #2 = $op2
/*  4115*/        OPC_MoveChild1,
/*  4116*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4118*/        OPC_MoveParent,
/*  4119*/        OPC_RecordChild2, // #3 = $op3
/*  4120*/        OPC_MoveChild2,
/*  4121*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4123*/        OPC_MoveParent,
/*  4124*/        OPC_CheckType, MVT::i32,
/*  4126*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_9), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_9:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4136*/      /*Scope*/ 25, /*->4162*/
/*  4137*/        OPC_CheckChild2CondCode, ISD::SETGT,
/*  4139*/        OPC_MoveParent,
/*  4140*/        OPC_RecordChild1, // #2 = $op2
/*  4141*/        OPC_MoveChild1,
/*  4142*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4144*/        OPC_MoveParent,
/*  4145*/        OPC_RecordChild2, // #3 = $op3
/*  4146*/        OPC_MoveChild2,
/*  4147*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4149*/        OPC_MoveParent,
/*  4150*/        OPC_CheckType, MVT::i32,
/*  4152*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_10), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGT:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_10:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4162*/      /*Scope*/ 25, /*->4188*/
/*  4163*/        OPC_CheckChild2CondCode, ISD::SETLE,
/*  4165*/        OPC_MoveParent,
/*  4166*/        OPC_RecordChild1, // #2 = $op2
/*  4167*/        OPC_MoveChild1,
/*  4168*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4170*/        OPC_MoveParent,
/*  4171*/        OPC_RecordChild2, // #3 = $op3
/*  4172*/        OPC_MoveChild2,
/*  4173*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4175*/        OPC_MoveParent,
/*  4176*/        OPC_CheckType, MVT::i32,
/*  4178*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_11), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_11:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4188*/      /*Scope*/ 25, /*->4214*/
/*  4189*/        OPC_CheckChild2CondCode, ISD::SETLT,
/*  4191*/        OPC_MoveParent,
/*  4192*/        OPC_RecordChild1, // #2 = $op2
/*  4193*/        OPC_MoveChild1,
/*  4194*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4196*/        OPC_MoveParent,
/*  4197*/        OPC_RecordChild2, // #3 = $op3
/*  4198*/        OPC_MoveChild2,
/*  4199*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4201*/        OPC_MoveParent,
/*  4202*/        OPC_CheckType, MVT::i32,
/*  4204*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_12), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLT:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_12:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4214*/      /*Scope*/ 25, /*->4240*/
/*  4215*/        OPC_CheckChild2CondCode, ISD::SETUGE,
/*  4217*/        OPC_MoveParent,
/*  4218*/        OPC_RecordChild1, // #2 = $op2
/*  4219*/        OPC_MoveChild1,
/*  4220*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4222*/        OPC_MoveParent,
/*  4223*/        OPC_RecordChild2, // #3 = $op3
/*  4224*/        OPC_MoveChild2,
/*  4225*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4227*/        OPC_MoveParent,
/*  4228*/        OPC_CheckType, MVT::i32,
/*  4230*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_13), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_13:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4240*/      /*Scope*/ 25, /*->4266*/
/*  4241*/        OPC_CheckChild2CondCode, ISD::SETUGT,
/*  4243*/        OPC_MoveParent,
/*  4244*/        OPC_RecordChild1, // #2 = $op2
/*  4245*/        OPC_MoveChild1,
/*  4246*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4248*/        OPC_MoveParent,
/*  4249*/        OPC_RecordChild2, // #3 = $op3
/*  4250*/        OPC_MoveChild2,
/*  4251*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4253*/        OPC_MoveParent,
/*  4254*/        OPC_CheckType, MVT::i32,
/*  4256*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_14), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGT:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_14:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4266*/      /*Scope*/ 25, /*->4292*/
/*  4267*/        OPC_CheckChild2CondCode, ISD::SETULE,
/*  4269*/        OPC_MoveParent,
/*  4270*/        OPC_RecordChild1, // #2 = $op2
/*  4271*/        OPC_MoveChild1,
/*  4272*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4274*/        OPC_MoveParent,
/*  4275*/        OPC_RecordChild2, // #3 = $op3
/*  4276*/        OPC_MoveChild2,
/*  4277*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4279*/        OPC_MoveParent,
/*  4280*/        OPC_CheckType, MVT::i32,
/*  4282*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_15), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_15:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4292*/      /*Scope*/ 25, /*->4318*/
/*  4293*/        OPC_CheckChild2CondCode, ISD::SETULT,
/*  4295*/        OPC_MoveParent,
/*  4296*/        OPC_RecordChild1, // #2 = $op2
/*  4297*/        OPC_MoveChild1,
/*  4298*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4300*/        OPC_MoveParent,
/*  4301*/        OPC_RecordChild2, // #3 = $op3
/*  4302*/        OPC_MoveChild2,
/*  4303*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4305*/        OPC_MoveParent,
/*  4306*/        OPC_CheckType, MVT::i32,
/*  4308*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_16), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULT:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_16:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4318*/      0, /*End of Scope*/
/*  4319*/    /*Scope*/ 26, /*->4346*/
/*  4320*/      OPC_RecordChild0, // #0 = $op0
/*  4321*/      OPC_MoveChild0,
/*  4322*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4324*/      OPC_MoveParent,
/*  4325*/      OPC_RecordChild1, // #1 = $op1
/*  4326*/      OPC_MoveChild1,
/*  4327*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4329*/      OPC_MoveParent,
/*  4330*/      OPC_RecordChild2, // #2 = $op2
/*  4331*/      OPC_MoveChild2,
/*  4332*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4334*/      OPC_MoveParent,
/*  4335*/      OPC_CheckType, MVT::i32,
/*  4337*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_17), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (select:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (rule_SELECT_17:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  4346*/    0, /*End of Scope*/
/*  4347*/  /*SwitchOpcode*/ 38, TARGET_VAL(ISD::AND),// ->4388
/*  4350*/    OPC_RecordChild0, // #0 = $op1
/*  4351*/    OPC_MoveChild0,
/*  4352*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4354*/    OPC_MoveParent,
/*  4355*/    OPC_RecordChild1, // #1 = $op2
/*  4356*/    OPC_MoveChild1,
/*  4357*/    OPC_Scope, 16, /*->4375*/ // 2 children in Scope
/*  4359*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4362*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  4364*/      OPC_MoveParent,
/*  4365*/      OPC_EmitConvertToTarget, 1,
/*  4367*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_simple__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 9
                // Dst: (i_comp_2reg_imm__opc_andi__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  4375*/    /*Scope*/ 11, /*->4387*/
/*  4376*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4378*/      OPC_MoveParent,
/*  4379*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_and__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (i_comp_3reg__opc_and__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  4387*/    0, /*End of Scope*/
/*  4388*/  /*SwitchOpcode*/ 38, TARGET_VAL(ISD::XOR),// ->4429
/*  4391*/    OPC_RecordChild0, // #0 = $op1
/*  4392*/    OPC_MoveChild0,
/*  4393*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4395*/    OPC_MoveParent,
/*  4396*/    OPC_RecordChild1, // #1 = $op2
/*  4397*/    OPC_MoveChild1,
/*  4398*/    OPC_Scope, 16, /*->4416*/ // 2 children in Scope
/*  4400*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4403*/      OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  4405*/      OPC_MoveParent,
/*  4406*/      OPC_EmitConvertToTarget, 1,
/*  4408*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (xor:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 9
                // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  4416*/    /*Scope*/ 11, /*->4428*/
/*  4417*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4419*/      OPC_MoveParent,
/*  4420*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_xor__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (i_comp_3reg__opc_xor__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  4428*/    0, /*End of Scope*/
/*  4429*/  /*SwitchOpcode*/ 21, TARGET_VAL(ISD::CALLSEQ_START),// ->4453
/*  4432*/    OPC_RecordNode, // #0 = 'callseq_start' chained node
/*  4433*/    OPC_RecordChild1, // #1 = $InSize
/*  4434*/    OPC_MoveChild1,
/*  4435*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  4438*/    OPC_MoveParent,
/*  4439*/    OPC_RecordChild2, // #2 = $OutSize
/*  4440*/    OPC_MoveChild2,
/*  4441*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  4444*/    OPC_MoveParent,
/*  4445*/    OPC_EmitMergeInputChains1_0,
/*  4446*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::CALLSTART), 0|OPFL_Chain|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_start (timm:{ *:[i32] }):$InSize, (timm:{ *:[i32] }):$OutSize) - Complexity = 9
              // Dst: (CALLSTART (timm:{ *:[i32] }):$InSize, (timm:{ *:[i32] }):$OutSize)
/*  4453*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_END),// ->4478
/*  4456*/    OPC_RecordNode, // #0 = 'callseq_end' chained node
/*  4457*/    OPC_CaptureGlueInput,
/*  4458*/    OPC_RecordChild1, // #1 = $InSize
/*  4459*/    OPC_MoveChild1,
/*  4460*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  4463*/    OPC_MoveParent,
/*  4464*/    OPC_RecordChild2, // #2 = $OutSize
/*  4465*/    OPC_MoveChild2,
/*  4466*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  4469*/    OPC_MoveParent,
/*  4470*/    OPC_EmitMergeInputChains1_0,
/*  4471*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::CALLEND), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:{ *:[i32] }):$InSize, (timm:{ *:[i32] }):$OutSize) - Complexity = 9
              // Dst: (CALLEND (timm:{ *:[i32] }):$InSize, (timm:{ *:[i32] }):$OutSize)
/*  4478*/  /*SwitchOpcode*/ 12, TARGET_VAL(ISD::INTRINSIC_VOID),// ->4493
/*  4481*/    OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*  4482*/    OPC_CheckChild1Integer, 101|128,1/*229*/, 
/*  4485*/    OPC_RecordChild2, // #1 = $op0
/*  4486*/    OPC_EmitMergeInputChains1_0,
/*  4487*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::hwloop_set_loop_iterations), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (intrinsic_void 229:{ *:[iPTR] }, regs:{ *:[i32] }:$op0) - Complexity = 8
              // Dst: (hwloop_set_loop_iterations regs:{ *:[i32] }:$op0)
/*  4493*/  /*SwitchOpcode*/ 102|128,1/*230*/, TARGET_VAL(ISD::Constant),// ->4727
/*  4497*/    OPC_Scope, 109, /*->4608*/ // 5 children in Scope
/*  4499*/      OPC_CheckInteger, 0, 
/*  4501*/      OPC_Scope, 6, /*->4509*/ // 15 children in Scope
/*  4503*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_mv_alias__regs__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 7
                  // Dst: (i_mv_alias__regs__reg0__:{ *:[i32] })
/*  4509*/      /*Scope*/ 6, /*->4516*/
/*  4510*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_snez_alias__regs__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 7
                  // Dst: (i_snez_alias__regs__reg0__:{ *:[i32] })
/*  4516*/      /*Scope*/ 6, /*->4523*/
/*  4517*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_add__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_add__regs__reg0__reg0__:{ *:[i32] })
/*  4523*/      /*Scope*/ 6, /*->4530*/
/*  4524*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_and__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_and__regs__reg0__reg0__:{ *:[i32] })
/*  4530*/      /*Scope*/ 6, /*->4537*/
/*  4531*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_or__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_or__regs__reg0__reg0__:{ *:[i32] })
/*  4537*/      /*Scope*/ 6, /*->4544*/
/*  4538*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sll__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sll__regs__reg0__reg0__:{ *:[i32] })
/*  4544*/      /*Scope*/ 6, /*->4551*/
/*  4545*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_slt__regs__reg0__reg0__:{ *:[i32] })
/*  4551*/      /*Scope*/ 6, /*->4558*/
/*  4552*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sltu__regs__reg0__reg0__:{ *:[i32] })
/*  4558*/      /*Scope*/ 6, /*->4565*/
/*  4559*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sra__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sra__regs__reg0__reg0__:{ *:[i32] })
/*  4565*/      /*Scope*/ 6, /*->4572*/
/*  4566*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_srl__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_srl__regs__reg0__reg0__:{ *:[i32] })
/*  4572*/      /*Scope*/ 6, /*->4579*/
/*  4573*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sub__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sub__regs__reg0__reg0__:{ *:[i32] })
/*  4579*/      /*Scope*/ 6, /*->4586*/
/*  4580*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_xor__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_xor__regs__reg0__reg0__:{ *:[i32] })
/*  4586*/      /*Scope*/ 6, /*->4593*/
/*  4587*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_neg_alias__regs__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_neg_alias__regs__reg0__:{ *:[i32] })
/*  4593*/      /*Scope*/ 6, /*->4600*/
/*  4594*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:{ *:[i32] })
/*  4600*/      /*Scope*/ 6, /*->4607*/
/*  4601*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:{ *:[i32] })
/*  4607*/      0, /*End of Scope*/
/*  4608*/    /*Scope*/ 25, /*->4634*/
/*  4609*/      OPC_CheckInteger, 1, 
/*  4611*/      OPC_Scope, 6, /*->4619*/ // 3 children in Scope
/*  4613*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 1:{ *:[i32] } - Complexity = 7
                  // Dst: (i_seqz_alias__regs__reg0__:{ *:[i32] })
/*  4619*/      /*Scope*/ 6, /*->4626*/
/*  4620*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__1__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 1:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:{ *:[i32] })
/*  4626*/      /*Scope*/ 6, /*->4633*/
/*  4627*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__1__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 1:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:{ *:[i32] })
/*  4633*/      0, /*End of Scope*/
/*  4634*/    /*Scope*/ 46, /*->4681*/
/*  4635*/      OPC_RecordNode, // #0 = $op1
/*  4636*/      OPC_Scope, 30, /*->4668*/ // 2 children in Scope
/*  4638*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  4640*/        OPC_EmitConvertToTarget, 0,
/*  4642*/        OPC_Scope, 7, /*->4651*/ // 3 children in Scope
/*  4644*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_simple__), 0,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1 - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_addi__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4651*/        /*Scope*/ 7, /*->4659*/
/*  4652*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_simple__), 0,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1 - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_ori__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4659*/        /*Scope*/ 7, /*->4667*/
/*  4660*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_simple__), 0,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1 - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_xori__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4667*/        0, /*End of Scope*/
/*  4668*/      /*Scope*/ 11, /*->4680*/
/*  4669*/        OPC_CheckPredicate, 14, // Predicate_Trunc12_i32imm
/*  4671*/        OPC_EmitConvertToTarget, 0,
/*  4673*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_lui__opc_lui__regs__imm20_s12__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i32] })<<P:Predicate_Trunc12_i32imm>>:$op1 - Complexity = 5
                  // Dst: (i_lui__opc_lui__regs__imm20_s12__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4680*/      0, /*End of Scope*/
/*  4681*/    /*Scope*/ 18, /*->4700*/
/*  4682*/      OPC_CheckInteger, 0, 
/*  4684*/      OPC_Scope, 6, /*->4692*/ // 2 children in Scope
/*  4686*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 5
                  // Dst: (i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__:{ *:[i32] })
/*  4692*/      /*Scope*/ 6, /*->4699*/
/*  4693*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 5
                  // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__reg0__:{ *:[i32] })
/*  4699*/      0, /*End of Scope*/
/*  4700*/    /*Scope*/ 25, /*->4726*/
/*  4701*/      OPC_RecordNode, // #0 = $op1
/*  4702*/      OPC_Scope, 11, /*->4715*/ // 2 children in Scope
/*  4704*/        OPC_CheckPredicate, 1, // Predicate_sext12To32imm
/*  4706*/        OPC_EmitConvertToTarget, 0,
/*  4708*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ori_emulation_alias__regs__reg0__simm12_simple__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1 - Complexity = 4
                  // Dst: (i_ori_emulation_alias__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4715*/      /*Scope*/ 9, /*->4725*/
/*  4716*/        OPC_EmitConvertToTarget, 0,
/*  4718*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i32] }):$op1 - Complexity = 3
                  // Dst: (e_movi32__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4725*/      0, /*End of Scope*/
/*  4726*/    0, /*End of Scope*/
/*  4727*/  /*SwitchOpcode*/ 15, TARGET_VAL(ISD::BRIND),// ->4745
/*  4730*/    OPC_RecordNode, // #0 = 'brind' chained node
/*  4731*/    OPC_RecordChild1, // #1 = $op0
/*  4732*/    OPC_MoveChild1,
/*  4733*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4735*/    OPC_CheckType, MVT::i32,
/*  4737*/    OPC_MoveParent,
/*  4738*/    OPC_EmitMergeInputChains1_0,
/*  4739*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jump_reg_alias__regs__), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (brind regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0) - Complexity = 6
              // Dst: (i_jump_reg_alias__regs__ regs:{ *:[i32] }:$op0)
/*  4745*/  /*SwitchOpcode*/ 82, TARGET_VAL(CodasipISD::GAWrap),// ->4830
/*  4748*/    OPC_RecordChild0, // #0 = $op1
/*  4749*/    OPC_MoveChild0,
/*  4750*/    OPC_SwitchOpcode /*6 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->4764
/*  4754*/      OPC_MoveParent,
/*  4755*/      OPC_CheckType, MVT::i32,
/*  4757*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__GA), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__GA:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op1)
/*  4764*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->4777
/*  4767*/      OPC_MoveParent,
/*  4768*/      OPC_CheckType, MVT::i32,
/*  4770*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__ES), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__ES:{ *:[i32] } (texternalsym:{ *:[i32] }):$op1)
/*  4777*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::MCSymbol),// ->4790
/*  4780*/      OPC_MoveParent,
/*  4781*/      OPC_CheckType, MVT::i32,
/*  4783*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__MC), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__MC:{ *:[i32] } (mcsym:{ *:[i32] }):$op1)
/*  4790*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->4803
/*  4793*/      OPC_MoveParent,
/*  4794*/      OPC_CheckType, MVT::i32,
/*  4796*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__BA), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__BA:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op1)
/*  4803*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetJumpTable),// ->4816
/*  4806*/      OPC_MoveParent,
/*  4807*/      OPC_CheckType, MVT::i32,
/*  4809*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__JT), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (tjumptable:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__JT:{ *:[i32] } (tjumptable:{ *:[i32] }):$op1)
/*  4816*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->4829
/*  4819*/      OPC_MoveParent,
/*  4820*/      OPC_CheckType, MVT::i32,
/*  4822*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__CP), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (tconstpool:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__CP:{ *:[i32] } (tconstpool:{ *:[i32] }):$op1)
/*  4829*/    0, // EndSwitchOpcode
/*  4830*/  /*SwitchOpcode*/ 59, TARGET_VAL(ISD::BR),// ->4892
/*  4833*/    OPC_RecordNode, // #0 = 'br' chained node
/*  4834*/    OPC_RecordChild1, // #1 = $op0
/*  4835*/    OPC_MoveChild1,
/*  4836*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  4839*/    OPC_MoveParent,
/*  4840*/    OPC_EmitMergeInputChains1_0,
/*  4841*/    OPC_Scope, 6, /*->4849*/ // 7 children in Scope
/*  4843*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 5
                // Dst: (i_jmp_rel_alias__rel_addr20__ (bb:{ *:[Other] }):$op0)
/*  4849*/    /*Scope*/ 6, /*->4856*/
/*  4850*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__ (bb:{ *:[Other] }):$op0)
/*  4856*/    /*Scope*/ 6, /*->4863*/
/*  4857*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__ (bb:{ *:[Other] }):$op0)
/*  4863*/    /*Scope*/ 6, /*->4870*/
/*  4864*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__ (bb:{ *:[Other] }):$op0)
/*  4870*/    /*Scope*/ 6, /*->4877*/
/*  4871*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__ (bb:{ *:[Other] }):$op0)
/*  4877*/    /*Scope*/ 6, /*->4884*/
/*  4878*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__ (bb:{ *:[Other] }):$op0)
/*  4884*/    /*Scope*/ 6, /*->4891*/
/*  4885*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 3
                // Dst: (i_jal__opc_jal__reg0__rel_addr20__ (bb:{ *:[Other] }):$op0)
/*  4891*/    0, /*End of Scope*/
/*  4892*/  /*SwitchOpcode*/ 8, TARGET_VAL(CodasipISD::Ret),// ->4903
/*  4895*/    OPC_RecordNode, // #0 = 'Return' chained node
/*  4896*/    OPC_CaptureGlueInput,
/*  4897*/    OPC_EmitMergeInputChains1_0,
/*  4898*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jump_reg_alias__regs___RET_EMUL_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (Return) - Complexity = 5
              // Dst: (i_jump_reg_alias__regs___RET_EMUL_)
/*  4903*/  /*SwitchOpcode*/ 8, TARGET_VAL(CodasipISD::MRET),// ->4914
/*  4906*/    OPC_RecordNode, // #0 = 'MRet' chained node
/*  4907*/    OPC_CaptureGlueInput,
/*  4908*/    OPC_EmitMergeInputChains1_0,
/*  4909*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_xret__opc_mret__), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (MRet) - Complexity = 3
              // Dst: (i_xret__opc_mret__)
/*  4914*/  /*SwitchOpcode*/ 11, TARGET_VAL(CodasipISD::EH_SJLJ_LONGJMP),// ->4928
/*  4917*/    OPC_RecordNode, // #0 = 'CDSPeh_sjlj_longjmp' chained node
/*  4918*/    OPC_RecordChild1, // #1 = $op0
/*  4919*/    OPC_CheckChild1Type, MVT::i32,
/*  4921*/    OPC_EmitMergeInputChains1_0,
/*  4922*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::EH_SjLj_LongJmp), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (CDSPeh_sjlj_longjmp regs:{ *:[i32] }:$op0) - Complexity = 3
              // Dst: (EH_SjLj_LongJmp regs:{ *:[i32] }:$op0)
/*  4928*/  /*SwitchOpcode*/ 12, TARGET_VAL(CodasipISD::EH_SJLJ_SETJMP),// ->4943
/*  4931*/    OPC_RecordNode, // #0 = 'CDSPeh_sjlj_setjmp' chained node
/*  4932*/    OPC_RecordChild1, // #1 = $op1
/*  4933*/    OPC_CheckChild1Type, MVT::i32,
/*  4935*/    OPC_EmitMergeInputChains1_0,
/*  4936*/    OPC_MorphNodeTo1, TARGET_VAL(Codasip::EH_SjLj_SetJmp), 0|OPFL_Chain,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (CDSPeh_sjlj_setjmp:{ *:[i32] } regs:{ *:[i32] }:$op1) - Complexity = 3
              // Dst: (EH_SjLj_SetJmp:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  4943*/  /*SwitchOpcode*/ 11, TARGET_VAL(CodasipISD::EH_SJLJ_SETUP_DISPATCH),// ->4957
/*  4946*/    OPC_RecordNode, // #0 = 'CDSPeh_sjlj_setup_dispatch' chained node
/*  4947*/    OPC_RecordChild1, // #1 = $op0
/*  4948*/    OPC_CheckChild1Type, MVT::i32,
/*  4950*/    OPC_EmitMergeInputChains1_0,
/*  4951*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::EH_SJLJ_SETUP_DISPATCH), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (CDSPeh_sjlj_setup_dispatch regs:{ *:[i32] }:$op0) - Complexity = 3
              // Dst: (EH_SJLJ_SETUP_DISPATCH regs:{ *:[i32] }:$op0)
/*  4957*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 4959 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 83
  // #OPC_RecordNode                           = 18
  // #OPC_RecordChild                          = 156
  // #OPC_RecordMemRef                         = 2
  // #OPC_CaptureGlueInput                     = 5
  // #OPC_MoveChild                            = 233
  // #OPC_MoveParent                           = 353
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 49
  // #OPC_CheckPatternPredicate                = 0
  // #OPC_CheckPredicate                       = 268
  // #OPC_CheckOpcode                          = 111
  // #OPC_SwitchOpcode                         = 4
  // #OPC_CheckType                            = 43
  // #OPC_SwitchType                           = 0
  // #OPC_CheckChildType                       = 9
  // #OPC_CheckInteger                         = 3
  // #OPC_CheckChildInteger                    = 53
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckChild2CondCode                  = 54
  // #OPC_CheckValueType                       = 0
  // #OPC_CheckComplexPat                      = 0
  // #OPC_CheckAndImm                          = 44
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 4
  // #OPC_EmitStringInteger                    = 0
  // #OPC_EmitRegister                         = 0
  // #OPC_EmitConvertToTarget                  = 56
  // #OPC_EmitMergeInputChains                 = 91
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 16
  // #OPC_EmitNodeXForm                        = 0
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 246

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckNodePredicate(SDNode *Node, unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_CheckFI_i32_regs
    SDNode *N = Node;
    (void)N;
return CheckFI(N, Codasip::regsRegClassID);
  }
  case 1: { 
    // Predicate_sext12To32imm
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return CheckImm(Imm,12,1,0);
  }
  case 2: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 3: { 
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 4: { 
    // Predicate_store_a1_s0
    // Predicate_truncstorei8_a1_s0
    // Predicate_truncstorei16_a1_s0
    // Predicate_sextloadi8_a1_s0
    // Predicate_zextloadi8_a1_s0
    // Predicate_sextloadi16_a1_s0
    // Predicate_zextloadi16_a1_s0
    // Predicate_load_a1_s0
    // Predicate_extloadi8_a1_s0
    // Predicate_extloadi16_a1_s0
    SDNode *N = Node;
    (void)N;
return CheckLoadStore(cast<MemSDNode>(N),1,0);
  }
  case 5: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 6: { 
    // Predicate_truncstorei8
    // Predicate_sextloadi8
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 7: { 
    // Predicate_truncstorei16
    // Predicate_sextloadi16
    // Predicate_zextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 8: { 
    // Predicate_zext5To32imm
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return CheckImm(Imm,5,0,0);
  }
  case 9: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 10: { 
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 11: { 
    // Predicate_zextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 12: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 13: { 
    // Predicate_extload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 14: { 
    // Predicate_Trunc12_i32imm
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return CheckImm(Imm,32,0,12);
  }
  }
}
#endif // GET_DAGISEL_BODY


#ifdef DAGISEL_INLINE
#undef DAGISEL_INLINE
#endif
#ifdef DAGISEL_CLASS_COLONCOLON
#undef DAGISEL_CLASS_COLONCOLON
#endif
#ifdef GET_DAGISEL_DECL
#undef GET_DAGISEL_DECL
#endif
#ifdef GET_DAGISEL_BODY
#undef GET_DAGISEL_BODY
#endif
