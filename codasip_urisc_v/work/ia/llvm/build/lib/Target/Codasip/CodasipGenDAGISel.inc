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
/*     0*/  OPC_SwitchOpcode /*28 cases */, 78|128,9/*1230*/, TARGET_VAL(ISD::ADD),// ->1235
/*     5*/    OPC_Scope, 125|128,8/*1149*/, /*->1157*/ // 2 children in Scope
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
/*  1093*/      /*Scope*/ 62, /*->1156*/
/*  1094*/        OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*  1097*/        OPC_Scope, 23, /*->1122*/ // 2 children in Scope
/*  1099*/          OPC_RecordChild0, // #0 = $op1
/*  1100*/          OPC_MoveChild0,
/*  1101*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1103*/          OPC_MoveParent,
/*  1104*/          OPC_CheckChild1Integer, 16, 
/*  1106*/          OPC_MoveParent,
/*  1107*/          OPC_MoveChild1,
/*  1108*/          OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*  1112*/          OPC_CheckChild0Same, 0,
/*  1114*/          OPC_MoveParent,
/*  1115*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__), 0,
                        MVT::i32, 1/*#Ops*/, 0, 
                    // Src: (add:{ *:[i32] } (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }), (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 65535:{ *:[i32] })) - Complexity = 21
                    // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  1122*/        /*Scope*/ 32, /*->1155*/
/*  1123*/          OPC_MoveChild0,
/*  1124*/          OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*  1127*/          OPC_RecordChild0, // #0 = $op1
/*  1128*/          OPC_MoveChild0,
/*  1129*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1131*/          OPC_MoveParent,
/*  1132*/          OPC_RecordChild1, // #1 = $op2
/*  1133*/          OPC_MoveChild1,
/*  1134*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1136*/          OPC_MoveParent,
/*  1137*/          OPC_MoveParent,
/*  1138*/          OPC_CheckChild1Integer, 8, 
/*  1140*/          OPC_MoveParent,
/*  1141*/          OPC_RecordChild1, // #2 = $op3
/*  1142*/          OPC_MoveChild1,
/*  1143*/          OPC_CheckPredicate, 1, // Predicate_NotFI_i32_regs
/*  1145*/          OPC_MoveParent,
/*  1146*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__regs__regs__), 0,
                        MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (add:{ *:[i32] } (sra:{ *:[i32] } (mul:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2), 8:{ *:[i32] }), regs:{ *:[i32] }<<P:Predicate_NotFI_i32_regs>>:$op3) - Complexity = 17
                    // Dst: (i_ext_hackaton__opc_hackaton_custom_b__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  1155*/        0, /*End of Scope*/
/*  1156*/      0, /*End of Scope*/
/*  1157*/    /*Scope*/ 76, /*->1234*/
/*  1158*/      OPC_RecordChild0, // #0 = $op3
/*  1159*/      OPC_MoveChild0,
/*  1160*/      OPC_Scope, 34, /*->1196*/ // 2 children in Scope
/*  1162*/        OPC_CheckPredicate, 1, // Predicate_NotFI_i32_regs
/*  1164*/        OPC_MoveParent,
/*  1165*/        OPC_MoveChild1,
/*  1166*/        OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*  1169*/        OPC_MoveChild0,
/*  1170*/        OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*  1173*/        OPC_RecordChild0, // #1 = $op1
/*  1174*/        OPC_MoveChild0,
/*  1175*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1177*/        OPC_MoveParent,
/*  1178*/        OPC_RecordChild1, // #2 = $op2
/*  1179*/        OPC_MoveChild1,
/*  1180*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1182*/        OPC_MoveParent,
/*  1183*/        OPC_MoveParent,
/*  1184*/        OPC_CheckChild1Integer, 8, 
/*  1186*/        OPC_MoveParent,
/*  1187*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__regs__regs__), 0,
                      MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_NotFI_i32_regs>>:$op3, (sra:{ *:[i32] } (mul:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2), 8:{ *:[i32] })) - Complexity = 17
                  // Dst: (i_ext_hackaton__opc_hackaton_custom_b__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  1196*/      /*Scope*/ 36, /*->1233*/
/*  1197*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1199*/        OPC_MoveParent,
/*  1200*/        OPC_RecordChild1, // #1 = $op2
/*  1201*/        OPC_MoveChild1,
/*  1202*/        OPC_Scope, 16, /*->1220*/ // 2 children in Scope
/*  1204*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1207*/          OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1209*/          OPC_MoveParent,
/*  1210*/          OPC_EmitConvertToTarget, 1,
/*  1212*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 9
                    // Dst: (i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1220*/        /*Scope*/ 11, /*->1232*/
/*  1221*/          OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1223*/          OPC_MoveParent,
/*  1224*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_add__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_add__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1232*/        0, /*End of Scope*/
/*  1233*/      0, /*End of Scope*/
/*  1234*/    0, /*End of Scope*/
/*  1235*/  /*SwitchOpcode*/ 5|128,5/*645*/, TARGET_VAL(ISD::STORE),// ->1884
/*  1239*/    OPC_RecordMemRef,
/*  1240*/    OPC_RecordNode, // #0 = 'st' chained node
/*  1241*/    OPC_Scope, 49|128,1/*177*/, /*->1421*/ // 8 children in Scope
/*  1244*/      OPC_CheckChild1Integer, 0, 
/*  1246*/      OPC_Scope, 36, /*->1284*/ // 4 children in Scope
/*  1248*/        OPC_CheckChild1Type, MVT::i8,
/*  1250*/        OPC_MoveChild2,
/*  1251*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1254*/        OPC_RecordChild0, // #1 = $op0
/*  1255*/        OPC_MoveChild0,
/*  1256*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1258*/        OPC_MoveParent,
/*  1259*/        OPC_RecordChild1, // #2 = $op1
/*  1260*/        OPC_MoveChild1,
/*  1261*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1264*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1266*/        OPC_MoveParent,
/*  1267*/        OPC_MoveParent,
/*  1268*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1270*/        OPC_CheckPredicate, 4, // Predicate_store
/*  1272*/        OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1274*/        OPC_EmitMergeInputChains1_0,
/*  1275*/        OPC_EmitConvertToTarget, 2,
/*  1277*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 3, 
                  // Src: (st 0:{ *:[i8] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 18
                  // Dst: (i_store__opc_storeb__reg0__simm12_simple__regs__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1284*/      /*Scope*/ 36, /*->1321*/
/*  1285*/        OPC_CheckChild1Type, MVT::i16,
/*  1287*/        OPC_MoveChild2,
/*  1288*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1291*/        OPC_RecordChild0, // #1 = $op0
/*  1292*/        OPC_MoveChild0,
/*  1293*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1295*/        OPC_MoveParent,
/*  1296*/        OPC_RecordChild1, // #2 = $op1
/*  1297*/        OPC_MoveChild1,
/*  1298*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1301*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1303*/        OPC_MoveParent,
/*  1304*/        OPC_MoveParent,
/*  1305*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1307*/        OPC_CheckPredicate, 4, // Predicate_store
/*  1309*/        OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1311*/        OPC_EmitMergeInputChains1_0,
/*  1312*/        OPC_EmitConvertToTarget, 2,
/*  1314*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 3, 
                  // Src: (st 0:{ *:[i16] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 18
                  // Dst: (i_store__opc_storeh__reg0__simm12_simple__regs__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1321*/      /*Scope*/ 72, /*->1394*/
/*  1322*/        OPC_MoveChild2,
/*  1323*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1326*/        OPC_RecordChild0, // #1 = $op0
/*  1327*/        OPC_MoveChild0,
/*  1328*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1330*/        OPC_MoveParent,
/*  1331*/        OPC_RecordChild1, // #2 = $op1
/*  1332*/        OPC_MoveChild1,
/*  1333*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1336*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1338*/        OPC_MoveParent,
/*  1339*/        OPC_MoveParent,
/*  1340*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1342*/        OPC_Scope, 14, /*->1358*/ // 2 children in Scope
/*  1344*/          OPC_CheckPredicate, 4, // Predicate_store
/*  1346*/          OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1348*/          OPC_EmitMergeInputChains1_0,
/*  1349*/          OPC_EmitConvertToTarget, 2,
/*  1351*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__reg0__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#Ops*/, 1, 3, 
                    // Src: (st 0:{ *:[i32] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 18
                    // Dst: (i_store__opc_storew__reg0__simm12_simple__regs__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1358*/        /*Scope*/ 34, /*->1393*/
/*  1359*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*  1361*/          OPC_Scope, 14, /*->1377*/ // 2 children in Scope
/*  1363*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*  1365*/            OPC_CheckPredicate, 5, // Predicate_truncstorei8_a1_s0
/*  1367*/            OPC_EmitMergeInputChains1_0,
/*  1368*/            OPC_EmitConvertToTarget, 2,
/*  1370*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 3, 
                      // Src: (st 0:{ *:[i32] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 18
                      // Dst: (i_store__opc_storeb__reg0__simm12_simple__regs__i32_TRUNC_CLONE_ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1377*/          /*Scope*/ 14, /*->1392*/
/*  1378*/            OPC_CheckPredicate, 8, // Predicate_truncstorei16
/*  1380*/            OPC_CheckPredicate, 5, // Predicate_truncstorei16_a1_s0
/*  1382*/            OPC_EmitMergeInputChains1_0,
/*  1383*/            OPC_EmitConvertToTarget, 2,
/*  1385*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 3, 
                      // Src: (st 0:{ *:[i32] }, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 18
                      // Dst: (i_store__opc_storeh__reg0__simm12_simple__regs__i32_TRUNC_CLONE_ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1392*/          0, /*End of Scope*/
/*  1393*/        0, /*End of Scope*/
/*  1394*/      /*Scope*/ 25, /*->1420*/
/*  1395*/        OPC_CheckChild1Type, MVT::i8,
/*  1397*/        OPC_RecordChild2, // #1 = $op0
/*  1398*/        OPC_MoveChild2,
/*  1399*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1402*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1404*/        OPC_MoveParent,
/*  1405*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1407*/        OPC_CheckPredicate, 4, // Predicate_store
/*  1409*/        OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1411*/        OPC_EmitMergeInputChains1_0,
/*  1412*/        OPC_EmitConvertToTarget, 1,
/*  1414*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#Ops*/, 2, 
                  // Src: (st 0:{ *:[i8] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 14
                  // Dst: (i_store__opc_storeb__reg0__simm12_simple__reg0__ (imm:{ *:[i32] }):$op0)
/*  1420*/      0, /*End of Scope*/
/*  1421*/    /*Scope*/ 44, /*->1466*/
/*  1422*/      OPC_RecordChild1, // #1 = $op0
/*  1423*/      OPC_MoveChild1,
/*  1424*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1426*/      OPC_CheckType, MVT::i32,
/*  1428*/      OPC_MoveParent,
/*  1429*/      OPC_MoveChild2,
/*  1430*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1433*/      OPC_RecordChild0, // #2 = $op1
/*  1434*/      OPC_MoveChild0,
/*  1435*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1437*/      OPC_MoveParent,
/*  1438*/      OPC_RecordChild1, // #3 = $op2
/*  1439*/      OPC_MoveChild1,
/*  1440*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1443*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1445*/      OPC_MoveParent,
/*  1446*/      OPC_MoveParent,
/*  1447*/      OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1449*/      OPC_CheckPredicate, 6, // Predicate_truncstore
/*  1451*/      OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*  1453*/      OPC_CheckPredicate, 5, // Predicate_truncstorei8_a1_s0
/*  1455*/      OPC_EmitMergeInputChains1_0,
/*  1456*/      OPC_EmitConvertToTarget, 3,
/*  1458*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 2, 4, 
                // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storeb__regs__simm12_simple__regs__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1466*/    /*Scope*/ 27, /*->1494*/
/*  1467*/      OPC_CheckChild1Integer, 0, 
/*  1469*/      OPC_CheckChild1Type, MVT::i16,
/*  1471*/      OPC_RecordChild2, // #1 = $op0
/*  1472*/      OPC_MoveChild2,
/*  1473*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1476*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1478*/      OPC_MoveParent,
/*  1479*/      OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1481*/      OPC_CheckPredicate, 4, // Predicate_store
/*  1483*/      OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1485*/      OPC_EmitMergeInputChains1_0,
/*  1486*/      OPC_EmitConvertToTarget, 1,
/*  1488*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#Ops*/, 2, 
                // Src: (st 0:{ *:[i16] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storeh__reg0__simm12_simple__reg0__ (imm:{ *:[i32] }):$op0)
/*  1494*/    /*Scope*/ 44, /*->1539*/
/*  1495*/      OPC_RecordChild1, // #1 = $op0
/*  1496*/      OPC_MoveChild1,
/*  1497*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1499*/      OPC_CheckType, MVT::i32,
/*  1501*/      OPC_MoveParent,
/*  1502*/      OPC_MoveChild2,
/*  1503*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1506*/      OPC_RecordChild0, // #2 = $op1
/*  1507*/      OPC_MoveChild0,
/*  1508*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1510*/      OPC_MoveParent,
/*  1511*/      OPC_RecordChild1, // #3 = $op2
/*  1512*/      OPC_MoveChild1,
/*  1513*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1516*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1518*/      OPC_MoveParent,
/*  1519*/      OPC_MoveParent,
/*  1520*/      OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1522*/      OPC_CheckPredicate, 6, // Predicate_truncstore
/*  1524*/      OPC_CheckPredicate, 8, // Predicate_truncstorei16
/*  1526*/      OPC_CheckPredicate, 5, // Predicate_truncstorei16_a1_s0
/*  1528*/      OPC_EmitMergeInputChains1_0,
/*  1529*/      OPC_EmitConvertToTarget, 3,
/*  1531*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 2, 4, 
                // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storeh__regs__simm12_simple__regs__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1539*/    /*Scope*/ 25, /*->1565*/
/*  1540*/      OPC_CheckChild1Integer, 0, 
/*  1542*/      OPC_RecordChild2, // #1 = $op0
/*  1543*/      OPC_MoveChild2,
/*  1544*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1547*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1549*/      OPC_MoveParent,
/*  1550*/      OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1552*/      OPC_CheckPredicate, 4, // Predicate_store
/*  1554*/      OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1556*/      OPC_EmitMergeInputChains1_0,
/*  1557*/      OPC_EmitConvertToTarget, 1,
/*  1559*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__reg0__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#Ops*/, 2, 
                // Src: (st 0:{ *:[i32] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storew__reg0__simm12_simple__reg0__ (imm:{ *:[i32] }):$op0)
/*  1565*/    /*Scope*/ 42, /*->1608*/
/*  1566*/      OPC_RecordChild1, // #1 = $op0
/*  1567*/      OPC_MoveChild1,
/*  1568*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1570*/      OPC_CheckType, MVT::i32,
/*  1572*/      OPC_MoveParent,
/*  1573*/      OPC_MoveChild2,
/*  1574*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  1577*/      OPC_RecordChild0, // #2 = $op1
/*  1578*/      OPC_MoveChild0,
/*  1579*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1581*/      OPC_MoveParent,
/*  1582*/      OPC_RecordChild1, // #3 = $op2
/*  1583*/      OPC_MoveChild1,
/*  1584*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1587*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1589*/      OPC_MoveParent,
/*  1590*/      OPC_MoveParent,
/*  1591*/      OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1593*/      OPC_CheckPredicate, 4, // Predicate_store
/*  1595*/      OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1597*/      OPC_EmitMergeInputChains1_0,
/*  1598*/      OPC_EmitConvertToTarget, 3,
/*  1600*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                    3/*#Ops*/, 1, 2, 4, 
                // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 14
                // Dst: (i_store__opc_storew__regs__simm12_simple__regs__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1608*/    /*Scope*/ 18|128,1/*146*/, /*->1756*/
/*  1610*/      OPC_CheckChild1Integer, 0, 
/*  1612*/      OPC_Scope, 42, /*->1656*/ // 4 children in Scope
/*  1614*/        OPC_RecordChild2, // #1 = $op0
/*  1615*/        OPC_MoveChild2,
/*  1616*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1619*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1621*/        OPC_MoveParent,
/*  1622*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1624*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*  1626*/        OPC_Scope, 13, /*->1641*/ // 2 children in Scope
/*  1628*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*  1630*/          OPC_CheckPredicate, 5, // Predicate_truncstorei8_a1_s0
/*  1632*/          OPC_EmitMergeInputChains1_0,
/*  1633*/          OPC_EmitConvertToTarget, 1,
/*  1635*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#Ops*/, 2, 
                    // Src: (st 0:{ *:[i32] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 14
                    // Dst: (i_store__opc_storeb__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_ (imm:{ *:[i32] }):$op0)
/*  1641*/        /*Scope*/ 13, /*->1655*/
/*  1642*/          OPC_CheckPredicate, 8, // Predicate_truncstorei16
/*  1644*/          OPC_CheckPredicate, 5, // Predicate_truncstorei16_a1_s0
/*  1646*/          OPC_EmitMergeInputChains1_0,
/*  1647*/          OPC_EmitConvertToTarget, 1,
/*  1649*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#Ops*/, 2, 
                    // Src: (st 0:{ *:[i32] }, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 14
                    // Dst: (i_store__opc_storeh__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_ (imm:{ *:[i32] }):$op0)
/*  1655*/        0, /*End of Scope*/
/*  1656*/      /*Scope*/ 22, /*->1679*/
/*  1657*/        OPC_CheckChild1Type, MVT::i8,
/*  1659*/        OPC_RecordChild2, // #1 = $op0
/*  1660*/        OPC_MoveChild2,
/*  1661*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1663*/        OPC_CheckType, MVT::i32,
/*  1665*/        OPC_MoveParent,
/*  1666*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1668*/        OPC_CheckPredicate, 4, // Predicate_store
/*  1670*/        OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1672*/        OPC_EmitMergeInputChains1_0,
/*  1673*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#Ops*/, 1, 
                  // Src: (st 0:{ *:[i8] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 11
                  // Dst: (i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0)
/*  1679*/      /*Scope*/ 22, /*->1702*/
/*  1680*/        OPC_CheckChild1Type, MVT::i16,
/*  1682*/        OPC_RecordChild2, // #1 = $op0
/*  1683*/        OPC_MoveChild2,
/*  1684*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1686*/        OPC_CheckType, MVT::i32,
/*  1688*/        OPC_MoveParent,
/*  1689*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1691*/        OPC_CheckPredicate, 4, // Predicate_store
/*  1693*/        OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1695*/        OPC_EmitMergeInputChains1_0,
/*  1696*/        OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#Ops*/, 1, 
                  // Src: (st 0:{ *:[i16] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 11
                  // Dst: (i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0)
/*  1702*/      /*Scope*/ 52, /*->1755*/
/*  1703*/        OPC_RecordChild2, // #1 = $op0
/*  1704*/        OPC_MoveChild2,
/*  1705*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1707*/        OPC_CheckType, MVT::i32,
/*  1709*/        OPC_MoveParent,
/*  1710*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1712*/        OPC_Scope, 11, /*->1725*/ // 2 children in Scope
/*  1714*/          OPC_CheckPredicate, 4, // Predicate_store
/*  1716*/          OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1718*/          OPC_EmitMergeInputChains1_0,
/*  1719*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__reg0__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#Ops*/, 1, 
                    // Src: (st 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 11
                    // Dst: (i_store__opc_storew__reg0__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0)
/*  1725*/        /*Scope*/ 28, /*->1754*/
/*  1726*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*  1728*/          OPC_Scope, 11, /*->1741*/ // 2 children in Scope
/*  1730*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*  1732*/            OPC_CheckPredicate, 5, // Predicate_truncstorei8_a1_s0
/*  1734*/            OPC_EmitMergeInputChains1_0,
/*  1735*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#Ops*/, 1, 
                      // Src: (st 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 11
                      // Dst: (i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_ regs:{ *:[i32] }:$op0)
/*  1741*/          /*Scope*/ 11, /*->1753*/
/*  1742*/            OPC_CheckPredicate, 8, // Predicate_truncstorei16
/*  1744*/            OPC_CheckPredicate, 5, // Predicate_truncstorei16_a1_s0
/*  1746*/            OPC_EmitMergeInputChains1_0,
/*  1747*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#Ops*/, 1, 
                      // Src: (st 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 11
                      // Dst: (i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_ regs:{ *:[i32] }:$op0)
/*  1753*/          0, /*End of Scope*/
/*  1754*/        0, /*End of Scope*/
/*  1755*/      0, /*End of Scope*/
/*  1756*/    /*Scope*/ 126, /*->1883*/
/*  1757*/      OPC_RecordChild1, // #1 = $op0
/*  1758*/      OPC_MoveChild1,
/*  1759*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1761*/      OPC_CheckType, MVT::i32,
/*  1763*/      OPC_MoveParent,
/*  1764*/      OPC_RecordChild2, // #2 = $op1
/*  1765*/      OPC_MoveChild2,
/*  1766*/      OPC_Scope, 60, /*->1828*/ // 2 children in Scope
/*  1768*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1771*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  1773*/        OPC_MoveParent,
/*  1774*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1776*/        OPC_Scope, 34, /*->1812*/ // 2 children in Scope
/*  1778*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*  1780*/          OPC_Scope, 14, /*->1796*/ // 2 children in Scope
/*  1782*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*  1784*/            OPC_CheckPredicate, 5, // Predicate_truncstorei8_a1_s0
/*  1786*/            OPC_EmitMergeInputChains1_0,
/*  1787*/            OPC_EmitConvertToTarget, 2,
/*  1789*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 3, 
                      // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 10
                      // Dst: (i_store__opc_storeb__regs__simm12_simple__reg0__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1796*/          /*Scope*/ 14, /*->1811*/
/*  1797*/            OPC_CheckPredicate, 8, // Predicate_truncstorei16
/*  1799*/            OPC_CheckPredicate, 5, // Predicate_truncstorei16_a1_s0
/*  1801*/            OPC_EmitMergeInputChains1_0,
/*  1802*/            OPC_EmitConvertToTarget, 2,
/*  1804*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 3, 
                      // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 10
                      // Dst: (i_store__opc_storeh__regs__simm12_simple__reg0__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1811*/          0, /*End of Scope*/
/*  1812*/        /*Scope*/ 14, /*->1827*/
/*  1813*/          OPC_CheckPredicate, 4, // Predicate_store
/*  1815*/          OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1817*/          OPC_EmitMergeInputChains1_0,
/*  1818*/          OPC_EmitConvertToTarget, 2,
/*  1820*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#Ops*/, 1, 3, 
                    // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 10
                    // Dst: (i_store__opc_storew__regs__simm12_simple__reg0__ regs:{ *:[i32] }:$op0, (imm:{ *:[i32] }):$op1)
/*  1827*/        0, /*End of Scope*/
/*  1828*/      /*Scope*/ 53, /*->1882*/
/*  1829*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1831*/        OPC_CheckType, MVT::i32,
/*  1833*/        OPC_MoveParent,
/*  1834*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*  1836*/        OPC_Scope, 30, /*->1868*/ // 2 children in Scope
/*  1838*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*  1840*/          OPC_Scope, 12, /*->1854*/ // 2 children in Scope
/*  1842*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*  1844*/            OPC_CheckPredicate, 5, // Predicate_truncstorei8_a1_s0
/*  1846*/            OPC_EmitMergeInputChains1_0,
/*  1847*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeb__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 2, 
                      // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_a1_s0>> - Complexity = 7
                      // Dst: (i_store__opc_storeb__regs__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1)
/*  1854*/          /*Scope*/ 12, /*->1867*/
/*  1855*/            OPC_CheckPredicate, 8, // Predicate_truncstorei16
/*  1857*/            OPC_CheckPredicate, 5, // Predicate_truncstorei16_a1_s0
/*  1859*/            OPC_EmitMergeInputChains1_0,
/*  1860*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storeh__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 2, 
                      // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a1_s0>> - Complexity = 7
                      // Dst: (i_store__opc_storeh__regs__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1)
/*  1867*/          0, /*End of Scope*/
/*  1868*/        /*Scope*/ 12, /*->1881*/
/*  1869*/          OPC_CheckPredicate, 4, // Predicate_store
/*  1871*/          OPC_CheckPredicate, 5, // Predicate_store_a1_s0
/*  1873*/          OPC_EmitMergeInputChains1_0,
/*  1874*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_store__opc_storew__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#Ops*/, 1, 2, 
                    // Src: (st regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a1_s0>> - Complexity = 7
                    // Dst: (i_store__opc_storew__regs__simm12_simple__regs__immspec_1_ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1)
/*  1881*/        0, /*End of Scope*/
/*  1882*/      0, /*End of Scope*/
/*  1883*/    0, /*End of Scope*/
/*  1884*/  /*SwitchOpcode*/ 68, TARGET_VAL(ISD::SHL),// ->1955
/*  1887*/    OPC_RecordChild0, // #0 = $op1
/*  1888*/    OPC_MoveChild0,
/*  1889*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1891*/    OPC_MoveParent,
/*  1892*/    OPC_Scope, 17, /*->1911*/ // 4 children in Scope
/*  1894*/      OPC_MoveChild1,
/*  1895*/      OPC_CheckAndImm, 31, 
/*  1897*/      OPC_RecordChild0, // #1 = $op2
/*  1898*/      OPC_MoveChild0,
/*  1899*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1901*/      OPC_MoveParent,
/*  1902*/      OPC_MoveParent,
/*  1903*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sll__regs__regs__regs__SHIFT_MASK_CLONE_), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 31:{ *:[i32] })) - Complexity = 14
                // Dst: (i_comp_3reg__opc_sll__regs__regs__regs__SHIFT_MASK_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1911*/    /*Scope*/ 18, /*->1930*/
/*  1912*/      OPC_RecordChild1, // #1 = $op2
/*  1913*/      OPC_MoveChild1,
/*  1914*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1917*/      OPC_CheckPredicate, 9, // Predicate_zext5To32imm
/*  1919*/      OPC_MoveParent,
/*  1920*/      OPC_EmitConvertToTarget, 1,
/*  1922*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm_shift__opc_slli__regs__regs__shift_imm__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_zext5To32imm>>:$op2) - Complexity = 9
                // Dst: (i_comp_2reg_imm_shift__opc_slli__regs__regs__shift_imm__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  1930*/    /*Scope*/ 9, /*->1940*/
/*  1931*/      OPC_CheckChild1Integer, 16, 
/*  1933*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 16:{ *:[i32] }) - Complexity = 9
                // Dst: (i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  1940*/    /*Scope*/ 13, /*->1954*/
/*  1941*/      OPC_RecordChild1, // #1 = $op2
/*  1942*/      OPC_MoveChild1,
/*  1943*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1945*/      OPC_MoveParent,
/*  1946*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sll__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (i_comp_3reg__opc_sll__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1954*/    0, /*End of Scope*/
/*  1955*/  /*SwitchOpcode*/ 90, TARGET_VAL(ISD::SRA),// ->2048
/*  1958*/    OPC_Scope, 22, /*->1982*/ // 3 children in Scope
/*  1960*/      OPC_RecordChild0, // #0 = $op1
/*  1961*/      OPC_MoveChild0,
/*  1962*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1964*/      OPC_MoveParent,
/*  1965*/      OPC_MoveChild1,
/*  1966*/      OPC_CheckAndImm, 31, 
/*  1968*/      OPC_RecordChild0, // #1 = $op2
/*  1969*/      OPC_MoveChild0,
/*  1970*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1972*/      OPC_MoveParent,
/*  1973*/      OPC_MoveParent,
/*  1974*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sra__regs__regs__regs__SHIFT_MASK_CLONE_), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 31:{ *:[i32] })) - Complexity = 14
                // Dst: (i_comp_3reg__opc_sra__regs__regs__regs__SHIFT_MASK_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  1982*/    /*Scope*/ 25, /*->2008*/
/*  1983*/      OPC_MoveChild0,
/*  1984*/      OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*  1987*/      OPC_RecordChild0, // #0 = $op1
/*  1988*/      OPC_MoveChild0,
/*  1989*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1991*/      OPC_MoveParent,
/*  1992*/      OPC_RecordChild1, // #1 = $op2
/*  1993*/      OPC_MoveChild1,
/*  1994*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  1996*/      OPC_MoveParent,
/*  1997*/      OPC_MoveParent,
/*  1998*/      OPC_CheckChild1Integer, 8, 
/*  2000*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i32] } (mul:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2), 8:{ *:[i32] }) - Complexity = 13
                // Dst: (i_ext_hackaton__opc_hackaton_custom_a__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2008*/    /*Scope*/ 38, /*->2047*/
/*  2009*/      OPC_RecordChild0, // #0 = $op1
/*  2010*/      OPC_MoveChild0,
/*  2011*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2013*/      OPC_MoveParent,
/*  2014*/      OPC_RecordChild1, // #1 = $op2
/*  2015*/      OPC_MoveChild1,
/*  2016*/      OPC_Scope, 16, /*->2034*/ // 2 children in Scope
/*  2018*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2021*/        OPC_CheckPredicate, 9, // Predicate_zext5To32imm
/*  2023*/        OPC_MoveParent,
/*  2024*/        OPC_EmitConvertToTarget, 1,
/*  2026*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm_shift__opc_srai__regs__regs__shift_imm__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_zext5To32imm>>:$op2) - Complexity = 9
                  // Dst: (i_comp_2reg_imm_shift__opc_srai__regs__regs__shift_imm__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  2034*/      /*Scope*/ 11, /*->2046*/
/*  2035*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2037*/        OPC_MoveParent,
/*  2038*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sra__regs__regs__regs__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sra__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2046*/      0, /*End of Scope*/
/*  2047*/    0, /*End of Scope*/
/*  2048*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::SRL),// ->2120
/*  2051*/    OPC_RecordChild0, // #0 = $op1
/*  2052*/    OPC_MoveChild0,
/*  2053*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2055*/    OPC_MoveParent,
/*  2056*/    OPC_Scope, 17, /*->2075*/ // 3 children in Scope
/*  2058*/      OPC_MoveChild1,
/*  2059*/      OPC_CheckAndImm, 31, 
/*  2061*/      OPC_RecordChild0, // #1 = $op2
/*  2062*/      OPC_MoveChild0,
/*  2063*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2065*/      OPC_MoveParent,
/*  2066*/      OPC_MoveParent,
/*  2067*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_srl__regs__regs__regs__SHIFT_MASK_CLONE_), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 31:{ *:[i32] })) - Complexity = 14
                // Dst: (i_comp_3reg__opc_srl__regs__regs__regs__SHIFT_MASK_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2075*/    /*Scope*/ 9, /*->2085*/
/*  2076*/      OPC_CheckChild1Integer, 31, 
/*  2078*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__reg0__), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (srl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 31:{ *:[i32] }) - Complexity = 10
                // Dst: (i_comp_3reg__opc_slt__regs__regs__reg0__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2085*/    /*Scope*/ 33, /*->2119*/
/*  2086*/      OPC_RecordChild1, // #1 = $op2
/*  2087*/      OPC_MoveChild1,
/*  2088*/      OPC_Scope, 16, /*->2106*/ // 2 children in Scope
/*  2090*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2093*/        OPC_CheckPredicate, 9, // Predicate_zext5To32imm
/*  2095*/        OPC_MoveParent,
/*  2096*/        OPC_EmitConvertToTarget, 1,
/*  2098*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm_shift__opc_srli__regs__regs__shift_imm__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_zext5To32imm>>:$op2) - Complexity = 9
                  // Dst: (i_comp_2reg_imm_shift__opc_srli__regs__regs__shift_imm__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  2106*/      /*Scope*/ 11, /*->2118*/
/*  2107*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2109*/        OPC_MoveParent,
/*  2110*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_srl__regs__regs__regs__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                  // Dst: (i_comp_3reg__opc_srl__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2118*/      0, /*End of Scope*/
/*  2119*/    0, /*End of Scope*/
/*  2120*/  /*SwitchOpcode*/ 74|128,4/*586*/, TARGET_VAL(ISD::BRCOND),// ->2710
/*  2124*/    OPC_RecordNode, // #0 = 'brcond' chained node
/*  2125*/    OPC_Scope, 49|128,4/*561*/, /*->2689*/ // 2 children in Scope
/*  2128*/      OPC_MoveChild1,
/*  2129*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*  2132*/      OPC_RecordChild0, // #1 = $op0
/*  2133*/      OPC_MoveChild0,
/*  2134*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2136*/      OPC_Scope, 91|128,2/*347*/, /*->2486*/ // 2 children in Scope
/*  2139*/        OPC_MoveParent,
/*  2140*/        OPC_Scope, 114, /*->2256*/ // 4 children in Scope
/*  2142*/          OPC_CheckChild1Integer, 0, 
/*  2144*/          OPC_Scope, 36, /*->2182*/ // 4 children in Scope
/*  2146*/            OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2148*/            OPC_MoveParent,
/*  2149*/            OPC_RecordChild2, // #2 = $op1
/*  2150*/            OPC_MoveChild2,
/*  2151*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2154*/            OPC_MoveParent,
/*  2155*/            OPC_EmitMergeInputChains1_0,
/*  2156*/            OPC_Scope, 7, /*->2165*/ // 3 children in Scope
/*  2158*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_beq__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2165*/            /*Scope*/ 7, /*->2173*/
/*  2166*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__regs__reg0__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_beq__regs__reg0__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2173*/            /*Scope*/ 7, /*->2181*/
/*  2174*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_bgeu__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2181*/            0, /*End of Scope*/
/*  2182*/          /*Scope*/ 17, /*->2200*/
/*  2183*/            OPC_CheckChild2CondCode, ISD::SETGT,
/*  2185*/            OPC_MoveParent,
/*  2186*/            OPC_RecordChild2, // #2 = $op1
/*  2187*/            OPC_MoveChild2,
/*  2188*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2191*/            OPC_MoveParent,
/*  2192*/            OPC_EmitMergeInputChains1_0,
/*  2193*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_blt__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETGT:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                      // Dst: (i_control_conditional__opc_blt__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2200*/          /*Scope*/ 17, /*->2218*/
/*  2201*/            OPC_CheckChild2CondCode, ISD::SETLT,
/*  2203*/            OPC_MoveParent,
/*  2204*/            OPC_RecordChild2, // #2 = $op1
/*  2205*/            OPC_MoveChild2,
/*  2206*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2209*/            OPC_MoveParent,
/*  2210*/            OPC_EmitMergeInputChains1_0,
/*  2211*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_blt__regs__reg0__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                      // Dst: (i_control_conditional__opc_blt__regs__reg0__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2218*/          /*Scope*/ 36, /*->2255*/
/*  2219*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2221*/            OPC_MoveParent,
/*  2222*/            OPC_RecordChild2, // #2 = $op1
/*  2223*/            OPC_MoveChild2,
/*  2224*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2227*/            OPC_MoveParent,
/*  2228*/            OPC_EmitMergeInputChains1_0,
/*  2229*/            OPC_Scope, 7, /*->2238*/ // 3 children in Scope
/*  2231*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2238*/            /*Scope*/ 7, /*->2246*/
/*  2239*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bne__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_bne__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2246*/            /*Scope*/ 7, /*->2254*/
/*  2247*/              OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bne__regs__reg0__rel_addr12__), 0|OPFL_Chain,
                            2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 0:{ *:[i32] }, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                        // Dst: (i_control_conditional__opc_bne__regs__reg0__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2254*/            0, /*End of Scope*/
/*  2255*/          0, /*End of Scope*/
/*  2256*/        /*Scope*/ 19, /*->2276*/
/*  2257*/          OPC_CheckChild1Integer, 1, 
/*  2259*/          OPC_CheckChild2CondCode, ISD::SETLT,
/*  2261*/          OPC_MoveParent,
/*  2262*/          OPC_RecordChild2, // #2 = $op1
/*  2263*/          OPC_MoveChild2,
/*  2264*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2267*/          OPC_MoveParent,
/*  2268*/          OPC_EmitMergeInputChains1_0,
/*  2269*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, 1:{ *:[i32] }, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                    // Dst: (i_control_conditional__opc_bge__reg0__regs__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2276*/        /*Scope*/ 28, /*->2305*/
/*  2277*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2288*/          OPC_CheckChild2CondCode, ISD::SETGT,
/*  2290*/          OPC_MoveParent,
/*  2291*/          OPC_RecordChild2, // #2 = $op1
/*  2292*/          OPC_MoveChild2,
/*  2293*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2296*/          OPC_MoveParent,
/*  2297*/          OPC_EmitMergeInputChains1_0,
/*  2298*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__regs__reg0__rel_addr12__), 0|OPFL_Chain,
                        2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, -1:{ *:[i32] }, SETGT:{ *:[Other] }), (bb:{ *:[Other] }):$op1) - Complexity = 13
                    // Dst: (i_control_conditional__opc_bge__regs__reg0__rel_addr12__ regs:{ *:[i32] }:$op0, (bb:{ *:[Other] }):$op1)
/*  2305*/        /*Scope*/ 50|128,1/*178*/, /*->2485*/
/*  2307*/          OPC_RecordChild1, // #2 = $op1
/*  2308*/          OPC_MoveChild1,
/*  2309*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2312*/          OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  2314*/          OPC_MoveParent,
/*  2315*/          OPC_Scope, 27, /*->2344*/ // 6 children in Scope
/*  2317*/            OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2319*/            OPC_MoveParent,
/*  2320*/            OPC_RecordChild2, // #3 = $op2
/*  2321*/            OPC_MoveChild2,
/*  2322*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2325*/            OPC_MoveParent,
/*  2326*/            OPC_EmitMergeInputChains1_0,
/*  2327*/            OPC_EmitConvertToTarget, 2,
/*  2329*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2337*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_beq__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2344*/          /*Scope*/ 27, /*->2372*/
/*  2345*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2347*/            OPC_MoveParent,
/*  2348*/            OPC_RecordChild2, // #3 = $op2
/*  2349*/            OPC_MoveChild2,
/*  2350*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2353*/            OPC_MoveParent,
/*  2354*/            OPC_EmitMergeInputChains1_0,
/*  2355*/            OPC_EmitConvertToTarget, 2,
/*  2357*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2365*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2372*/          /*Scope*/ 27, /*->2400*/
/*  2373*/            OPC_CheckChild2CondCode, ISD::SETGE,
/*  2375*/            OPC_MoveParent,
/*  2376*/            OPC_RecordChild2, // #3 = $op2
/*  2377*/            OPC_MoveChild2,
/*  2378*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2381*/            OPC_MoveParent,
/*  2382*/            OPC_EmitMergeInputChains1_0,
/*  2383*/            OPC_EmitConvertToTarget, 2,
/*  2385*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2393*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETGE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_beq__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2400*/          /*Scope*/ 27, /*->2428*/
/*  2401*/            OPC_CheckChild2CondCode, ISD::SETLT,
/*  2403*/            OPC_MoveParent,
/*  2404*/            OPC_RecordChild2, // #3 = $op2
/*  2405*/            OPC_MoveChild2,
/*  2406*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2409*/            OPC_MoveParent,
/*  2410*/            OPC_EmitMergeInputChains1_0,
/*  2411*/            OPC_EmitConvertToTarget, 2,
/*  2413*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2421*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2428*/          /*Scope*/ 27, /*->2456*/
/*  2429*/            OPC_CheckChild2CondCode, ISD::SETUGE,
/*  2431*/            OPC_MoveParent,
/*  2432*/            OPC_RecordChild2, // #3 = $op2
/*  2433*/            OPC_MoveChild2,
/*  2434*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2437*/            OPC_MoveParent,
/*  2438*/            OPC_EmitMergeInputChains1_0,
/*  2439*/            OPC_EmitConvertToTarget, 2,
/*  2441*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2449*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETUGE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_beq__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2456*/          /*Scope*/ 27, /*->2484*/
/*  2457*/            OPC_CheckChild2CondCode, ISD::SETULT,
/*  2459*/            OPC_MoveParent,
/*  2460*/            OPC_RecordChild2, // #3 = $op2
/*  2461*/            OPC_MoveChild2,
/*  2462*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2465*/            OPC_MoveParent,
/*  2466*/            OPC_EmitMergeInputChains1_0,
/*  2467*/            OPC_EmitConvertToTarget, 2,
/*  2469*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*  2477*/            OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                          2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETULT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 11
                      // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ (i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), (bb:{ *:[Other] }):$op2)
/*  2484*/          0, /*End of Scope*/
/*  2485*/        0, /*End of Scope*/
/*  2486*/      /*Scope*/ 72|128,1/*200*/, /*->2688*/
/*  2488*/        OPC_CheckType, MVT::i32,
/*  2490*/        OPC_MoveParent,
/*  2491*/        OPC_RecordChild1, // #2 = $op1
/*  2492*/        OPC_MoveChild1,
/*  2493*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2495*/        OPC_MoveParent,
/*  2496*/        OPC_Scope, 18, /*->2516*/ // 10 children in Scope
/*  2498*/          OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2500*/          OPC_MoveParent,
/*  2501*/          OPC_RecordChild2, // #3 = $op2
/*  2502*/          OPC_MoveChild2,
/*  2503*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2506*/          OPC_MoveParent,
/*  2507*/          OPC_EmitMergeInputChains1_0,
/*  2508*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETEQ:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_beq__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2516*/        /*Scope*/ 18, /*->2535*/
/*  2517*/          OPC_CheckChild2CondCode, ISD::SETGE,
/*  2519*/          OPC_MoveParent,
/*  2520*/          OPC_RecordChild2, // #3 = $op2
/*  2521*/          OPC_MoveChild2,
/*  2522*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2525*/          OPC_MoveParent,
/*  2526*/          OPC_EmitMergeInputChains1_0,
/*  2527*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bge__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2535*/        /*Scope*/ 18, /*->2554*/
/*  2536*/          OPC_CheckChild2CondCode, ISD::SETUGE,
/*  2538*/          OPC_MoveParent,
/*  2539*/          OPC_RecordChild2, // #3 = $op2
/*  2540*/          OPC_MoveChild2,
/*  2541*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2544*/          OPC_MoveParent,
/*  2545*/          OPC_EmitMergeInputChains1_0,
/*  2546*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bgeu__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2554*/        /*Scope*/ 18, /*->2573*/
/*  2555*/          OPC_CheckChild2CondCode, ISD::SETLT,
/*  2557*/          OPC_MoveParent,
/*  2558*/          OPC_RecordChild2, // #3 = $op2
/*  2559*/          OPC_MoveChild2,
/*  2560*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2563*/          OPC_MoveParent,
/*  2564*/          OPC_EmitMergeInputChains1_0,
/*  2565*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_blt__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2573*/        /*Scope*/ 18, /*->2592*/
/*  2574*/          OPC_CheckChild2CondCode, ISD::SETULT,
/*  2576*/          OPC_MoveParent,
/*  2577*/          OPC_RecordChild2, // #3 = $op2
/*  2578*/          OPC_MoveChild2,
/*  2579*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2582*/          OPC_MoveParent,
/*  2583*/          OPC_EmitMergeInputChains1_0,
/*  2584*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bltu__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2592*/        /*Scope*/ 18, /*->2611*/
/*  2593*/          OPC_CheckChild2CondCode, ISD::SETNE,
/*  2595*/          OPC_MoveParent,
/*  2596*/          OPC_RecordChild2, // #3 = $op2
/*  2597*/          OPC_MoveChild2,
/*  2598*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2601*/          OPC_MoveParent,
/*  2602*/          OPC_EmitMergeInputChains1_0,
/*  2603*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bne__regs__regs__rel_addr12__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETNE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bne__regs__regs__rel_addr12__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2611*/        /*Scope*/ 18, /*->2630*/
/*  2612*/          OPC_CheckChild2CondCode, ISD::SETLE,
/*  2614*/          OPC_MoveParent,
/*  2615*/          OPC_RecordChild2, // #3 = $op2
/*  2616*/          OPC_MoveChild2,
/*  2617*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2620*/          OPC_MoveParent,
/*  2621*/          OPC_EmitMergeInputChains1_0,
/*  2622*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__swappedCmpClone0__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bge__regs__regs__rel_addr12__swappedCmpClone0__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2630*/        /*Scope*/ 18, /*->2649*/
/*  2631*/          OPC_CheckChild2CondCode, ISD::SETULE,
/*  2633*/          OPC_MoveParent,
/*  2634*/          OPC_RecordChild2, // #3 = $op2
/*  2635*/          OPC_MoveChild2,
/*  2636*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2639*/          OPC_MoveParent,
/*  2640*/          OPC_EmitMergeInputChains1_0,
/*  2641*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__swappedCmpClone0__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULE:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bgeu__regs__regs__rel_addr12__swappedCmpClone0__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2649*/        /*Scope*/ 18, /*->2668*/
/*  2650*/          OPC_CheckChild2CondCode, ISD::SETGT,
/*  2652*/          OPC_MoveParent,
/*  2653*/          OPC_RecordChild2, // #3 = $op2
/*  2654*/          OPC_MoveChild2,
/*  2655*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2658*/          OPC_MoveParent,
/*  2659*/          OPC_EmitMergeInputChains1_0,
/*  2660*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__swappedCmpClone0__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_blt__regs__regs__rel_addr12__swappedCmpClone0__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2668*/        /*Scope*/ 18, /*->2687*/
/*  2669*/          OPC_CheckChild2CondCode, ISD::SETUGT,
/*  2671*/          OPC_MoveParent,
/*  2672*/          OPC_RecordChild2, // #3 = $op2
/*  2673*/          OPC_MoveChild2,
/*  2674*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2677*/          OPC_MoveParent,
/*  2678*/          OPC_EmitMergeInputChains1_0,
/*  2679*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__swappedCmpClone0__), 0|OPFL_Chain,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (brcond (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGT:{ *:[Other] }), (bb:{ *:[Other] }):$op2) - Complexity = 9
                    // Dst: (i_control_conditional__opc_bltu__regs__regs__rel_addr12__swappedCmpClone0__ regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, (bb:{ *:[Other] }):$op2)
/*  2687*/        0, /*End of Scope*/
/*  2688*/      0, /*End of Scope*/
/*  2689*/    /*Scope*/ 19, /*->2709*/
/*  2690*/      OPC_RecordChild1, // #1 = $op0
/*  2691*/      OPC_MoveChild1,
/*  2692*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2694*/      OPC_MoveParent,
/*  2695*/      OPC_RecordChild2, // #2 = $op1
/*  2696*/      OPC_MoveChild2,
/*  2697*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2700*/      OPC_MoveParent,
/*  2701*/      OPC_EmitMergeInputChains1_0,
/*  2702*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (brcond regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (bb:{ *:[Other] }):$op1) - Complexity = 4
                // Dst: (i_control_conditional__opc_bltu__reg0__regs__rel_addr12__ regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (bb:{ *:[Other] }):$op1)
/*  2709*/    0, /*End of Scope*/
/*  2710*/  /*SwitchOpcode*/ 8|128,3/*392*/, TARGET_VAL(ISD::SETCC),// ->3106
/*  2714*/    OPC_RecordChild0, // #0 = $op1
/*  2715*/    OPC_MoveChild0,
/*  2716*/    OPC_Scope, 34, /*->2752*/ // 2 children in Scope
/*  2718*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2721*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  2723*/      OPC_MoveParent,
/*  2724*/      OPC_CheckChild1Integer, 0, 
/*  2726*/      OPC_Scope, 11, /*->2739*/ // 2 children in Scope
/*  2728*/        OPC_CheckChild2CondCode, ISD::SETGT,
/*  2730*/        OPC_EmitConvertToTarget, 0,
/*  2732*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (setcc:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 13
                  // Dst: (i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  2739*/      /*Scope*/ 11, /*->2751*/
/*  2740*/        OPC_CheckChild2CondCode, ISD::SETNE,
/*  2742*/        OPC_EmitConvertToTarget, 0,
/*  2744*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (setcc:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 13
                  // Dst: (i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  2751*/      0, /*End of Scope*/
/*  2752*/    /*Scope*/ 95|128,2/*351*/, /*->3105*/
/*  2754*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2756*/      OPC_Scope, 41|128,1/*169*/, /*->2928*/ // 2 children in Scope
/*  2759*/        OPC_MoveParent,
/*  2760*/        OPC_Scope, 44, /*->2806*/ // 2 children in Scope
/*  2762*/          OPC_CheckChild1Integer, 0, 
/*  2764*/          OPC_Scope, 9, /*->2775*/ // 4 children in Scope
/*  2766*/            OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2768*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 0:{ *:[i32] }, SETEQ:{ *:[Other] }) - Complexity = 11
                      // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2775*/          /*Scope*/ 9, /*->2785*/
/*  2776*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2778*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_snez_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 11
                      // Dst: (i_snez_alias__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2785*/          /*Scope*/ 9, /*->2795*/
/*  2786*/            OPC_CheckChild2CondCode, ISD::SETGT,
/*  2788*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__reg0__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 10
                      // Dst: (i_comp_3reg__opc_slt__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2795*/          /*Scope*/ 9, /*->2805*/
/*  2796*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2798*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__reg0__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 0, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 10
                      // Dst: (i_comp_3reg__opc_sltu__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  2805*/          0, /*End of Scope*/
/*  2806*/        /*Scope*/ 120, /*->2927*/
/*  2807*/          OPC_RecordChild1, // #1 = $op2
/*  2808*/          OPC_MoveChild1,
/*  2809*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2812*/          OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  2814*/          OPC_MoveParent,
/*  2815*/          OPC_Scope, 12, /*->2829*/ // 6 children in Scope
/*  2817*/            OPC_CheckChild2CondCode, ISD::SETLT,
/*  2819*/            OPC_EmitConvertToTarget, 1,
/*  2821*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2, SETLT:{ *:[Other] }) - Complexity = 9
                      // Dst: (i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  2829*/          /*Scope*/ 12, /*->2842*/
/*  2830*/            OPC_CheckChild2CondCode, ISD::SETULT,
/*  2832*/            OPC_EmitConvertToTarget, 1,
/*  2834*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2, SETULT:{ *:[Other] }) - Complexity = 9
                      // Dst: (i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  2842*/          /*Scope*/ 19, /*->2862*/
/*  2843*/            OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2845*/            OPC_EmitConvertToTarget, 1,
/*  2847*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  2855*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 3, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETEQ:{ *:[Other] }) - Complexity = 8
                      // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))
/*  2862*/          /*Scope*/ 19, /*->2882*/
/*  2863*/            OPC_CheckChild2CondCode, ISD::SETNE,
/*  2865*/            OPC_EmitConvertToTarget, 1,
/*  2867*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  2875*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_snez_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 3, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETNE:{ *:[Other] }) - Complexity = 8
                      // Dst: (i_snez_alias__regs__regs__:{ *:[i32] } (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))
/*  2882*/          /*Scope*/ 19, /*->2902*/
/*  2883*/            OPC_CheckChild2CondCode, ISD::SETGE,
/*  2885*/            OPC_EmitConvertToTarget, 1,
/*  2887*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  2895*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                          MVT::i32, 1/*#Ops*/, 3, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETGE:{ *:[Other] }) - Complexity = 8
                      // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } (i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1))
/*  2902*/          /*Scope*/ 23, /*->2926*/
/*  2903*/            OPC_CheckChild2CondCode, ISD::SETUGE,
/*  2905*/            OPC_EmitConvertToTarget, 1,
/*  2907*/            OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*  2915*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2918*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                          MVT::i32, 2/*#Ops*/, 3, 4, 
                      // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1, SETUGE:{ *:[Other] }) - Complexity = 8
                      // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } (i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1), 1:{ *:[i32] })
/*  2926*/          0, /*End of Scope*/
/*  2927*/        0, /*End of Scope*/
/*  2928*/      /*Scope*/ 46|128,1/*174*/, /*->3104*/
/*  2930*/        OPC_CheckType, MVT::i32,
/*  2932*/        OPC_MoveParent,
/*  2933*/        OPC_RecordChild1, // #1 = $op2
/*  2934*/        OPC_MoveChild1,
/*  2935*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  2937*/        OPC_MoveParent,
/*  2938*/        OPC_Scope, 10, /*->2950*/ // 10 children in Scope
/*  2940*/          OPC_CheckChild2CondCode, ISD::SETLT,
/*  2942*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, SETLT:{ *:[Other] }) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_slt__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2950*/        /*Scope*/ 10, /*->2961*/
/*  2951*/          OPC_CheckChild2CondCode, ISD::SETULT,
/*  2953*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, SETULT:{ *:[Other] }) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_sltu__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2961*/        /*Scope*/ 10, /*->2972*/
/*  2962*/          OPC_CheckChild2CondCode, ISD::SETGT,
/*  2964*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__regs__swappedCmpClone0__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, SETGT:{ *:[Other] }) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_slt__regs__regs__regs__swappedCmpClone0__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2972*/        /*Scope*/ 10, /*->2983*/
/*  2973*/          OPC_CheckChild2CondCode, ISD::SETUGT,
/*  2975*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__swappedCmpClone0__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, SETUGT:{ *:[Other] }) - Complexity = 6
                    // Dst: (i_comp_3reg__opc_sltu__regs__regs__regs__swappedCmpClone0__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  2983*/        /*Scope*/ 17, /*->3001*/
/*  2984*/          OPC_CheckChild2CondCode, ISD::SETEQ,
/*  2986*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_xor__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  2994*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETEQ:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } (i_comp_3reg__opc_xor__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1))
/*  3001*/        /*Scope*/ 17, /*->3019*/
/*  3002*/          OPC_CheckChild2CondCode, ISD::SETNE,
/*  3004*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_xor__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  3012*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_snez_alias__regs__regs__), 0,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETNE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_snez_alias__regs__regs__:{ *:[i32] } (i_comp_3reg__opc_xor__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1))
/*  3019*/        /*Scope*/ 17, /*->3037*/
/*  3020*/          OPC_CheckChild2CondCode, ISD::SETGE,
/*  3022*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  3030*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__regs__), 0,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_seqz_alias__regs__regs__:{ *:[i32] } (i_comp_3reg__opc_slt__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1))
/*  3037*/        /*Scope*/ 21, /*->3059*/
/*  3038*/          OPC_CheckChild2CondCode, ISD::SETLE,
/*  3040*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*  3048*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3051*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } (i_comp_3reg__opc_slt__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0), 1:{ *:[i32] })
/*  3059*/        /*Scope*/ 21, /*->3081*/
/*  3060*/          OPC_CheckChild2CondCode, ISD::SETUGE,
/*  3062*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  3070*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3073*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } (i_comp_3reg__opc_sltu__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1), 1:{ *:[i32] })
/*  3081*/        /*Scope*/ 21, /*->3103*/
/*  3082*/          OPC_CheckChild2CondCode, ISD::SETULE,
/*  3084*/          OPC_EmitNode1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__), 0,
                        MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*  3092*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3095*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULE:{ *:[Other] }) - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } (i_comp_3reg__opc_sltu__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0), 1:{ *:[i32] })
/*  3103*/        0, /*End of Scope*/
/*  3104*/      0, /*End of Scope*/
/*  3105*/    0, /*End of Scope*/
/*  3106*/  /*SwitchOpcode*/ 101|128,3/*485*/, TARGET_VAL(ISD::LOAD),// ->3595
/*  3110*/    OPC_RecordMemRef,
/*  3111*/    OPC_RecordNode, // #0 = 'ld' chained node
/*  3112*/    OPC_Scope, 45|128,1/*173*/, /*->3288*/ // 2 children in Scope
/*  3115*/      OPC_MoveChild1,
/*  3116*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*  3119*/      OPC_RecordChild0, // #1 = $op1
/*  3120*/      OPC_MoveChild0,
/*  3121*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3123*/      OPC_MoveParent,
/*  3124*/      OPC_RecordChild1, // #2 = $op2
/*  3125*/      OPC_MoveChild1,
/*  3126*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3129*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  3131*/      OPC_MoveParent,
/*  3132*/      OPC_MoveParent,
/*  3133*/      OPC_CheckPredicate, 10, // Predicate_unindexedload
/*  3135*/      OPC_CheckType, MVT::i32,
/*  3137*/      OPC_Scope, 17, /*->3156*/ // 6 children in Scope
/*  3139*/        OPC_CheckPredicate, 11, // Predicate_sextload
/*  3141*/        OPC_CheckPredicate, 7, // Predicate_sextloadi8
/*  3143*/        OPC_CheckPredicate, 5, // Predicate_sextloadi8_a1_s0
/*  3145*/        OPC_EmitMergeInputChains1_0,
/*  3146*/        OPC_EmitConvertToTarget, 2,
/*  3148*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadb__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3156*/      /*Scope*/ 17, /*->3174*/
/*  3157*/        OPC_CheckPredicate, 12, // Predicate_zextload
/*  3159*/        OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*  3161*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8_a1_s0
/*  3163*/        OPC_EmitMergeInputChains1_0,
/*  3164*/        OPC_EmitConvertToTarget, 2,
/*  3166*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>><<P:Predicate_zextloadi8_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadbu__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3174*/      /*Scope*/ 17, /*->3192*/
/*  3175*/        OPC_CheckPredicate, 11, // Predicate_sextload
/*  3177*/        OPC_CheckPredicate, 8, // Predicate_sextloadi16
/*  3179*/        OPC_CheckPredicate, 5, // Predicate_sextloadi16_a1_s0
/*  3181*/        OPC_EmitMergeInputChains1_0,
/*  3182*/        OPC_EmitConvertToTarget, 2,
/*  3184*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadh__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3192*/      /*Scope*/ 17, /*->3210*/
/*  3193*/        OPC_CheckPredicate, 12, // Predicate_zextload
/*  3195*/        OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*  3197*/        OPC_CheckPredicate, 5, // Predicate_zextloadi16_a1_s0
/*  3199*/        OPC_EmitMergeInputChains1_0,
/*  3200*/        OPC_EmitConvertToTarget, 2,
/*  3202*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadhu__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3210*/      /*Scope*/ 15, /*->3226*/
/*  3211*/        OPC_CheckPredicate, 13, // Predicate_load
/*  3213*/        OPC_CheckPredicate, 5, // Predicate_load_a1_s0
/*  3215*/        OPC_EmitMergeInputChains1_0,
/*  3216*/        OPC_EmitConvertToTarget, 2,
/*  3218*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadw__regs__simm12_simple__regs__), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a1_s0>> - Complexity = 13
                  // Dst: (i_load__opc_loadw__regs__simm12_simple__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3226*/      /*Scope*/ 60, /*->3287*/
/*  3227*/        OPC_CheckPredicate, 14, // Predicate_extload
/*  3229*/        OPC_Scope, 27, /*->3258*/ // 2 children in Scope
/*  3231*/          OPC_CheckPredicate, 7, // Predicate_extloadi8
/*  3233*/          OPC_CheckPredicate, 5, // Predicate_extloadi8_a1_s0
/*  3235*/          OPC_EmitMergeInputChains1_0,
/*  3236*/          OPC_EmitConvertToTarget, 2,
/*  3238*/          OPC_Scope, 8, /*->3248*/ // 2 children in Scope
/*  3240*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__regs__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 13
                      // Dst: (i_load__opc_loadb__regs__simm12_simple__regs__AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3248*/          /*Scope*/ 8, /*->3257*/
/*  3249*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 13
                      // Dst: (i_load__opc_loadbu__regs__simm12_simple__regs__AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3257*/          0, /*End of Scope*/
/*  3258*/        /*Scope*/ 27, /*->3286*/
/*  3259*/          OPC_CheckPredicate, 8, // Predicate_extloadi16
/*  3261*/          OPC_CheckPredicate, 5, // Predicate_extloadi16_a1_s0
/*  3263*/          OPC_EmitMergeInputChains1_0,
/*  3264*/          OPC_EmitConvertToTarget, 2,
/*  3266*/          OPC_Scope, 8, /*->3276*/ // 2 children in Scope
/*  3268*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__regs__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 13
                      // Dst: (i_load__opc_loadh__regs__simm12_simple__regs__AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3276*/          /*Scope*/ 8, /*->3285*/
/*  3277*/            OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:{ *:[i32] } (add:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 13
                      // Dst: (i_load__opc_loadhu__regs__simm12_simple__regs__AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3285*/          0, /*End of Scope*/
/*  3286*/        0, /*End of Scope*/
/*  3287*/      0, /*End of Scope*/
/*  3288*/    /*Scope*/ 48|128,2/*304*/, /*->3594*/
/*  3290*/      OPC_RecordChild1, // #1 = $op1
/*  3291*/      OPC_MoveChild1,
/*  3292*/      OPC_Scope, 24|128,1/*152*/, /*->3447*/ // 2 children in Scope
/*  3295*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3298*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  3300*/        OPC_MoveParent,
/*  3301*/        OPC_CheckPredicate, 10, // Predicate_unindexedload
/*  3303*/        OPC_CheckType, MVT::i32,
/*  3305*/        OPC_Scope, 16, /*->3323*/ // 6 children in Scope
/*  3307*/          OPC_CheckPredicate, 11, // Predicate_sextload
/*  3309*/          OPC_CheckPredicate, 7, // Predicate_sextloadi8
/*  3311*/          OPC_CheckPredicate, 5, // Predicate_sextloadi8_a1_s0
/*  3313*/          OPC_EmitMergeInputChains1_0,
/*  3314*/          OPC_EmitConvertToTarget, 1,
/*  3316*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadb__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3323*/        /*Scope*/ 16, /*->3340*/
/*  3324*/          OPC_CheckPredicate, 12, // Predicate_zextload
/*  3326*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*  3328*/          OPC_CheckPredicate, 5, // Predicate_zextloadi8_a1_s0
/*  3330*/          OPC_EmitMergeInputChains1_0,
/*  3331*/          OPC_EmitConvertToTarget, 1,
/*  3333*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>><<P:Predicate_zextloadi8_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadbu__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3340*/        /*Scope*/ 16, /*->3357*/
/*  3341*/          OPC_CheckPredicate, 11, // Predicate_sextload
/*  3343*/          OPC_CheckPredicate, 8, // Predicate_sextloadi16
/*  3345*/          OPC_CheckPredicate, 5, // Predicate_sextloadi16_a1_s0
/*  3347*/          OPC_EmitMergeInputChains1_0,
/*  3348*/          OPC_EmitConvertToTarget, 1,
/*  3350*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadh__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3357*/        /*Scope*/ 16, /*->3374*/
/*  3358*/          OPC_CheckPredicate, 12, // Predicate_zextload
/*  3360*/          OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*  3362*/          OPC_CheckPredicate, 5, // Predicate_zextloadi16_a1_s0
/*  3364*/          OPC_EmitMergeInputChains1_0,
/*  3365*/          OPC_EmitConvertToTarget, 1,
/*  3367*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadhu__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3374*/        /*Scope*/ 14, /*->3389*/
/*  3375*/          OPC_CheckPredicate, 13, // Predicate_load
/*  3377*/          OPC_CheckPredicate, 5, // Predicate_load_a1_s0
/*  3379*/          OPC_EmitMergeInputChains1_0,
/*  3380*/          OPC_EmitConvertToTarget, 1,
/*  3382*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadw__regs__simm12_simple__reg0__), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 2, 
                    // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a1_s0>> - Complexity = 9
                    // Dst: (i_load__opc_loadw__regs__simm12_simple__reg0__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3389*/        /*Scope*/ 56, /*->3446*/
/*  3390*/          OPC_CheckPredicate, 14, // Predicate_extload
/*  3392*/          OPC_Scope, 25, /*->3419*/ // 2 children in Scope
/*  3394*/            OPC_CheckPredicate, 7, // Predicate_extloadi8
/*  3396*/            OPC_CheckPredicate, 5, // Predicate_extloadi8_a1_s0
/*  3398*/            OPC_EmitMergeInputChains1_0,
/*  3399*/            OPC_EmitConvertToTarget, 1,
/*  3401*/            OPC_Scope, 7, /*->3410*/ // 2 children in Scope
/*  3403*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__reg0__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 9
                        // Dst: (i_load__opc_loadb__regs__simm12_simple__reg0__AEXT_CLONE_:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3410*/            /*Scope*/ 7, /*->3418*/
/*  3411*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 9
                        // Dst: (i_load__opc_loadbu__regs__simm12_simple__reg0__AEXT_CLONE_:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3418*/            0, /*End of Scope*/
/*  3419*/          /*Scope*/ 25, /*->3445*/
/*  3420*/            OPC_CheckPredicate, 8, // Predicate_extloadi16
/*  3422*/            OPC_CheckPredicate, 5, // Predicate_extloadi16_a1_s0
/*  3424*/            OPC_EmitMergeInputChains1_0,
/*  3425*/            OPC_EmitConvertToTarget, 1,
/*  3427*/            OPC_Scope, 7, /*->3436*/ // 2 children in Scope
/*  3429*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__reg0__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 9
                        // Dst: (i_load__opc_loadh__regs__simm12_simple__reg0__AEXT_CLONE_:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3436*/            /*Scope*/ 7, /*->3444*/
/*  3437*/              OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i32, 1/*#Ops*/, 2, 
                        // Src: (ld:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 9
                        // Dst: (i_load__opc_loadhu__regs__simm12_simple__reg0__AEXT_CLONE_:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  3444*/            0, /*End of Scope*/
/*  3445*/          0, /*End of Scope*/
/*  3446*/        0, /*End of Scope*/
/*  3447*/      /*Scope*/ 16|128,1/*144*/, /*->3593*/
/*  3449*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3451*/        OPC_CheckType, MVT::i32,
/*  3453*/        OPC_MoveParent,
/*  3454*/        OPC_CheckPredicate, 10, // Predicate_unindexedload
/*  3456*/        OPC_CheckType, MVT::i32,
/*  3458*/        OPC_Scope, 14, /*->3474*/ // 9 children in Scope
/*  3460*/          OPC_CheckPredicate, 11, // Predicate_sextload
/*  3462*/          OPC_CheckPredicate, 7, // Predicate_sextloadi8
/*  3464*/          OPC_CheckPredicate, 5, // Predicate_sextloadi8_a1_s0
/*  3466*/          OPC_EmitMergeInputChains1_0,
/*  3467*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3474*/        /*Scope*/ 14, /*->3489*/
/*  3475*/          OPC_CheckPredicate, 14, // Predicate_extload
/*  3477*/          OPC_CheckPredicate, 7, // Predicate_extloadi8
/*  3479*/          OPC_CheckPredicate, 5, // Predicate_extloadi8_a1_s0
/*  3481*/          OPC_EmitMergeInputChains1_0,
/*  3482*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3489*/        /*Scope*/ 14, /*->3504*/
/*  3490*/          OPC_CheckPredicate, 12, // Predicate_zextload
/*  3492*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*  3494*/          OPC_CheckPredicate, 5, // Predicate_zextloadi8_a1_s0
/*  3496*/          OPC_EmitMergeInputChains1_0,
/*  3497*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>><<P:Predicate_zextloadi8_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3504*/        /*Scope*/ 14, /*->3519*/
/*  3505*/          OPC_CheckPredicate, 14, // Predicate_extload
/*  3507*/          OPC_CheckPredicate, 7, // Predicate_extloadi8
/*  3509*/          OPC_CheckPredicate, 5, // Predicate_extloadi8_a1_s0
/*  3511*/          OPC_EmitMergeInputChains1_0,
/*  3512*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>><<P:Predicate_extloadi8_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3519*/        /*Scope*/ 14, /*->3534*/
/*  3520*/          OPC_CheckPredicate, 11, // Predicate_sextload
/*  3522*/          OPC_CheckPredicate, 8, // Predicate_sextloadi16
/*  3524*/          OPC_CheckPredicate, 5, // Predicate_sextloadi16_a1_s0
/*  3526*/          OPC_EmitMergeInputChains1_0,
/*  3527*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3534*/        /*Scope*/ 14, /*->3549*/
/*  3535*/          OPC_CheckPredicate, 14, // Predicate_extload
/*  3537*/          OPC_CheckPredicate, 8, // Predicate_extloadi16
/*  3539*/          OPC_CheckPredicate, 5, // Predicate_extloadi16_a1_s0
/*  3541*/          OPC_EmitMergeInputChains1_0,
/*  3542*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3549*/        /*Scope*/ 14, /*->3564*/
/*  3550*/          OPC_CheckPredicate, 12, // Predicate_zextload
/*  3552*/          OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*  3554*/          OPC_CheckPredicate, 5, // Predicate_zextloadi16_a1_s0
/*  3556*/          OPC_EmitMergeInputChains1_0,
/*  3557*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3564*/        /*Scope*/ 14, /*->3579*/
/*  3565*/          OPC_CheckPredicate, 14, // Predicate_extload
/*  3567*/          OPC_CheckPredicate, 8, // Predicate_extloadi16
/*  3569*/          OPC_CheckPredicate, 5, // Predicate_extloadi16_a1_s0
/*  3571*/          OPC_EmitMergeInputChains1_0,
/*  3572*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3579*/        /*Scope*/ 12, /*->3592*/
/*  3580*/          OPC_CheckPredicate, 13, // Predicate_load
/*  3582*/          OPC_CheckPredicate, 5, // Predicate_load_a1_s0
/*  3584*/          OPC_EmitMergeInputChains1_0,
/*  3585*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_load__opc_loadw__regs__simm12_simple__regs__immspec_1_), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a1_s0>> - Complexity = 6
                    // Dst: (i_load__opc_loadw__regs__simm12_simple__regs__immspec_1_:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  3592*/        0, /*End of Scope*/
/*  3593*/      0, /*End of Scope*/
/*  3594*/    0, /*End of Scope*/
/*  3595*/  /*SwitchOpcode*/ 105, TARGET_VAL(ISD::OR),// ->3703
/*  3598*/    OPC_Scope, 25, /*->3625*/ // 3 children in Scope
/*  3600*/      OPC_RecordChild0, // #0 = $op1
/*  3601*/      OPC_MoveChild0,
/*  3602*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3604*/      OPC_MoveParent,
/*  3605*/      OPC_MoveChild1,
/*  3606*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  3609*/      OPC_RecordChild0, // #1 = $op2
/*  3610*/      OPC_MoveChild0,
/*  3611*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3613*/      OPC_MoveParent,
/*  3614*/      OPC_CheckChild1Integer, 16, 
/*  3616*/      OPC_MoveParent,
/*  3617*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] })) - Complexity = 13
                // Dst: (i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  3625*/    /*Scope*/ 25, /*->3651*/
/*  3626*/      OPC_MoveChild0,
/*  3627*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  3630*/      OPC_RecordChild0, // #0 = $op2
/*  3631*/      OPC_MoveChild0,
/*  3632*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3634*/      OPC_MoveParent,
/*  3635*/      OPC_CheckChild1Integer, 16, 
/*  3637*/      OPC_MoveParent,
/*  3638*/      OPC_RecordChild1, // #1 = $op1
/*  3639*/      OPC_MoveChild1,
/*  3640*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3642*/      OPC_MoveParent,
/*  3643*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:{ *:[i32] } (shl:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, 16:{ *:[i32] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1) - Complexity = 13
                // Dst: (i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  3651*/    /*Scope*/ 50, /*->3702*/
/*  3652*/      OPC_RecordChild0, // #0 = $op1
/*  3653*/      OPC_MoveChild0,
/*  3654*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3656*/      OPC_MoveParent,
/*  3657*/      OPC_RecordChild1, // #1 = $op2
/*  3658*/      OPC_MoveChild1,
/*  3659*/      OPC_Scope, 28, /*->3689*/ // 2 children in Scope
/*  3661*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3664*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  3666*/        OPC_MoveParent,
/*  3667*/        OPC_EmitConvertToTarget, 1,
/*  3669*/        OPC_Scope, 8, /*->3679*/ // 2 children in Scope
/*  3671*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 9
                    // Dst: (i_comp_2reg_imm__opc_ori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3679*/        /*Scope*/ 8, /*->3688*/
/*  3680*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ori_emulation_alias__regs__regs__simm12_simple__), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 8
                    // Dst: (i_ori_emulation_alias__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3688*/        0, /*End of Scope*/
/*  3689*/      /*Scope*/ 11, /*->3701*/
/*  3690*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3692*/        OPC_MoveParent,
/*  3693*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_or__regs__regs__regs__), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                  // Dst: (i_comp_3reg__opc_or__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  3701*/      0, /*End of Scope*/
/*  3702*/    0, /*End of Scope*/
/*  3703*/  /*SwitchOpcode*/ 9|128,2/*265*/, TARGET_VAL(CodasipISD::TailCall),// ->3972
/*  3707*/    OPC_RecordNode, // #0 = 'TailCall' chained node
/*  3708*/    OPC_CaptureGlueInput,
/*  3709*/    OPC_Scope, 116|128,1/*244*/, /*->3956*/ // 2 children in Scope
/*  3712*/      OPC_MoveChild1,
/*  3713*/      OPC_CheckOpcode, TARGET_VAL(CodasipISD::GAWrap),
/*  3716*/      OPC_RecordChild0, // #1 = $op0
/*  3717*/      OPC_MoveChild0,
/*  3718*/      OPC_SwitchOpcode /*4 cases */, 56, TARGET_VAL(ISD::TargetGlobalAddress),// ->3778
/*  3722*/        OPC_MoveParent,
/*  3723*/        OPC_CheckType, MVT::i32,
/*  3725*/        OPC_MoveParent,
/*  3726*/        OPC_EmitMergeInputChains1_0,
/*  3727*/        OPC_Scope, 6, /*->3735*/ // 7 children in Scope
/*  3729*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 11
                    // Dst: (i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3735*/        /*Scope*/ 6, /*->3742*/
/*  3736*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3742*/        /*Scope*/ 6, /*->3749*/
/*  3743*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3749*/        /*Scope*/ 6, /*->3756*/
/*  3750*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3756*/        /*Scope*/ 6, /*->3763*/
/*  3757*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3763*/        /*Scope*/ 6, /*->3770*/
/*  3764*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3770*/        /*Scope*/ 6, /*->3777*/
/*  3771*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 9
                    // Dst: (i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ (tglobaladdr:{ *:[i32] }):$op0)
/*  3777*/        0, /*End of Scope*/
/*  3778*/      /*SwitchOpcode*/ 56, TARGET_VAL(ISD::TargetExternalSymbol),// ->3837
/*  3781*/        OPC_MoveParent,
/*  3782*/        OPC_CheckType, MVT::i32,
/*  3784*/        OPC_MoveParent,
/*  3785*/        OPC_EmitMergeInputChains1_0,
/*  3786*/        OPC_Scope, 6, /*->3794*/ // 7 children in Scope
/*  3788*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 11
                    // Dst: (i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3794*/        /*Scope*/ 6, /*->3801*/
/*  3795*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3801*/        /*Scope*/ 6, /*->3808*/
/*  3802*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3808*/        /*Scope*/ 6, /*->3815*/
/*  3809*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3815*/        /*Scope*/ 6, /*->3822*/
/*  3816*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3822*/        /*Scope*/ 6, /*->3829*/
/*  3823*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3829*/        /*Scope*/ 6, /*->3836*/
/*  3830*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 9
                    // Dst: (i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES (texternalsym:{ *:[i32] }):$op0)
/*  3836*/        0, /*End of Scope*/
/*  3837*/      /*SwitchOpcode*/ 56, TARGET_VAL(ISD::MCSymbol),// ->3896
/*  3840*/        OPC_MoveParent,
/*  3841*/        OPC_CheckType, MVT::i32,
/*  3843*/        OPC_MoveParent,
/*  3844*/        OPC_EmitMergeInputChains1_0,
/*  3845*/        OPC_Scope, 6, /*->3853*/ // 7 children in Scope
/*  3847*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 11
                    // Dst: (i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3853*/        /*Scope*/ 6, /*->3860*/
/*  3854*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3860*/        /*Scope*/ 6, /*->3867*/
/*  3861*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3867*/        /*Scope*/ 6, /*->3874*/
/*  3868*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3874*/        /*Scope*/ 6, /*->3881*/
/*  3875*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3881*/        /*Scope*/ 6, /*->3888*/
/*  3882*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3888*/        /*Scope*/ 6, /*->3895*/
/*  3889*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 9
                    // Dst: (i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC (mcsym:{ *:[i32] }):$op0)
/*  3895*/        0, /*End of Scope*/
/*  3896*/      /*SwitchOpcode*/ 56, TARGET_VAL(ISD::TargetBlockAddress),// ->3955
/*  3899*/        OPC_MoveParent,
/*  3900*/        OPC_CheckType, MVT::i32,
/*  3902*/        OPC_MoveParent,
/*  3903*/        OPC_EmitMergeInputChains1_0,
/*  3904*/        OPC_Scope, 6, /*->3912*/ // 7 children in Scope
/*  3906*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 11
                    // Dst: (i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3912*/        /*Scope*/ 6, /*->3919*/
/*  3913*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3919*/        /*Scope*/ 6, /*->3926*/
/*  3920*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3926*/        /*Scope*/ 6, /*->3933*/
/*  3927*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3933*/        /*Scope*/ 6, /*->3940*/
/*  3934*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3940*/        /*Scope*/ 6, /*->3947*/
/*  3941*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                    // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3947*/        /*Scope*/ 6, /*->3954*/
/*  3948*/          OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                        1/*#Ops*/, 1, 
                    // Src: (TailCall (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 9
                    // Dst: (i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA (tblockaddress:{ *:[i32] }):$op0)
/*  3954*/        0, /*End of Scope*/
/*  3955*/      0, // EndSwitchOpcode
/*  3956*/    /*Scope*/ 14, /*->3971*/
/*  3957*/      OPC_RecordChild1, // #1 = $op0
/*  3958*/      OPC_MoveChild1,
/*  3959*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  3961*/      OPC_CheckType, MVT::i32,
/*  3963*/      OPC_MoveParent,
/*  3964*/      OPC_EmitMergeInputChains1_0,
/*  3965*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jump_reg_alias__regs__TAILCALL_CLONE_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    1/*#Ops*/, 1, 
                // Src: (TailCall regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0) - Complexity = 6
                // Dst: (i_jump_reg_alias__regs__TAILCALL_CLONE_ regs:{ *:[i32] }:$op0)
/*  3971*/    0, /*End of Scope*/
/*  3972*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->3997
/*  3975*/    OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*  3976*/    OPC_CheckChild1Integer, 17|128,1/*145*/, 
/*  3979*/    OPC_RecordChild2, // #1 = $op1
/*  3980*/    OPC_RecordChild3, // #2 = $op2
/*  3981*/    OPC_MoveChild3,
/*  3982*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3985*/    OPC_MoveParent,
/*  3986*/    OPC_EmitMergeInputChains1_0,
/*  3987*/    OPC_EmitConvertToTarget, 2,
/*  3989*/    OPC_MorphNodeTo1, TARGET_VAL(Codasip::hwloop_loop_decrement_reg), 0|OPFL_Chain,
                  MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_w_chain:{ *:[i32] } 145:{ *:[iPTR] }, regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2) - Complexity = 11
              // Dst: (hwloop_loop_decrement_reg:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  3997*/  /*SwitchOpcode*/ 89, TARGET_VAL(CodasipISD::Call),// ->4089
/*  4000*/    OPC_RecordNode, // #0 = 'Call' chained node
/*  4001*/    OPC_CaptureGlueInput,
/*  4002*/    OPC_Scope, 68, /*->4072*/ // 2 children in Scope
/*  4004*/      OPC_MoveChild1,
/*  4005*/      OPC_CheckOpcode, TARGET_VAL(CodasipISD::GAWrap),
/*  4008*/      OPC_RecordChild0, // #1 = $op0
/*  4009*/      OPC_MoveChild0,
/*  4010*/      OPC_SwitchOpcode /*4 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->4026
/*  4014*/        OPC_MoveParent,
/*  4015*/        OPC_CheckType, MVT::i32,
/*  4017*/        OPC_MoveParent,
/*  4018*/        OPC_EmitMergeInputChains1_0,
/*  4019*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_rel_alias__rel_addr20__), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)) - Complexity = 10
                  // Dst: (i_call_rel_alias__rel_addr20__:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op0)
/*  4026*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetExternalSymbol),// ->4041
/*  4029*/        OPC_MoveParent,
/*  4030*/        OPC_CheckType, MVT::i32,
/*  4032*/        OPC_MoveParent,
/*  4033*/        OPC_EmitMergeInputChains1_0,
/*  4034*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_rel_alias__rel_addr20__ES), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)) - Complexity = 10
                  // Dst: (i_call_rel_alias__rel_addr20__ES:{ *:[i32] } (texternalsym:{ *:[i32] }):$op0)
/*  4041*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::MCSymbol),// ->4056
/*  4044*/        OPC_MoveParent,
/*  4045*/        OPC_CheckType, MVT::i32,
/*  4047*/        OPC_MoveParent,
/*  4048*/        OPC_EmitMergeInputChains1_0,
/*  4049*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_rel_alias__rel_addr20__MC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)) - Complexity = 10
                  // Dst: (i_call_rel_alias__rel_addr20__MC:{ *:[i32] } (mcsym:{ *:[i32] }):$op0)
/*  4056*/      /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetBlockAddress),// ->4071
/*  4059*/        OPC_MoveParent,
/*  4060*/        OPC_CheckType, MVT::i32,
/*  4062*/        OPC_MoveParent,
/*  4063*/        OPC_EmitMergeInputChains1_0,
/*  4064*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_rel_alias__rel_addr20__BA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)) - Complexity = 10
                  // Dst: (i_call_rel_alias__rel_addr20__BA:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op0)
/*  4071*/      0, // EndSwitchOpcode
/*  4072*/    /*Scope*/ 15, /*->4088*/
/*  4073*/      OPC_RecordChild1, // #1 = $op0
/*  4074*/      OPC_MoveChild1,
/*  4075*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4077*/      OPC_CheckType, MVT::i32,
/*  4079*/      OPC_MoveParent,
/*  4080*/      OPC_EmitMergeInputChains1_0,
/*  4081*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_call_reg_alias__regs__), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (Call regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0) - Complexity = 6
                // Dst: (i_call_reg_alias__regs__:{ *:[i32] } regs:{ *:[i32] }:$op0)
/*  4088*/    0, /*End of Scope*/
/*  4089*/  /*SwitchOpcode*/ 47, TARGET_VAL(ISD::SUB),// ->4139
/*  4092*/    OPC_Scope, 25, /*->4119*/ // 2 children in Scope
/*  4094*/      OPC_CheckChild0Integer, 0, 
/*  4096*/      OPC_RecordChild1, // #0 = $op1
/*  4097*/      OPC_MoveChild1,
/*  4098*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4100*/      OPC_MoveParent,
/*  4101*/      OPC_Scope, 7, /*->4110*/ // 2 children in Scope
/*  4103*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sub__regs__reg0__regs__), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i32] } 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1) - Complexity = 10
                  // Dst: (i_comp_3reg__opc_sub__regs__reg0__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  4110*/      /*Scope*/ 7, /*->4118*/
/*  4111*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_neg_alias__regs__regs__), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i32] } 0:{ *:[i32] }, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1) - Complexity = 10
                  // Dst: (i_neg_alias__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  4118*/      0, /*End of Scope*/
/*  4119*/    /*Scope*/ 18, /*->4138*/
/*  4120*/      OPC_RecordChild0, // #0 = $op1
/*  4121*/      OPC_MoveChild0,
/*  4122*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4124*/      OPC_MoveParent,
/*  4125*/      OPC_RecordChild1, // #1 = $op2
/*  4126*/      OPC_MoveChild1,
/*  4127*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4129*/      OPC_MoveParent,
/*  4130*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sub__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (i_comp_3reg__opc_sub__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  4138*/    0, /*End of Scope*/
/*  4139*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::SELECT),// ->4452
/*  4143*/    OPC_Scope, 22|128,2/*278*/, /*->4424*/ // 2 children in Scope
/*  4146*/      OPC_MoveChild0,
/*  4147*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*  4150*/      OPC_RecordChild0, // #0 = $op0
/*  4151*/      OPC_MoveChild0,
/*  4152*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4154*/      OPC_CheckType, MVT::i32,
/*  4156*/      OPC_MoveParent,
/*  4157*/      OPC_RecordChild1, // #1 = $op1
/*  4158*/      OPC_MoveChild1,
/*  4159*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4161*/      OPC_MoveParent,
/*  4162*/      OPC_Scope, 25, /*->4189*/ // 10 children in Scope
/*  4164*/        OPC_CheckChild2CondCode, ISD::SETEQ,
/*  4166*/        OPC_MoveParent,
/*  4167*/        OPC_RecordChild1, // #2 = $op2
/*  4168*/        OPC_MoveChild1,
/*  4169*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4171*/        OPC_MoveParent,
/*  4172*/        OPC_RecordChild2, // #3 = $op3
/*  4173*/        OPC_MoveChild2,
/*  4174*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4176*/        OPC_MoveParent,
/*  4177*/        OPC_CheckType, MVT::i32,
/*  4179*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_7), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETEQ:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_7:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4189*/      /*Scope*/ 25, /*->4215*/
/*  4190*/        OPC_CheckChild2CondCode, ISD::SETNE,
/*  4192*/        OPC_MoveParent,
/*  4193*/        OPC_RecordChild1, // #2 = $op2
/*  4194*/        OPC_MoveChild1,
/*  4195*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4197*/        OPC_MoveParent,
/*  4198*/        OPC_RecordChild2, // #3 = $op3
/*  4199*/        OPC_MoveChild2,
/*  4200*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4202*/        OPC_MoveParent,
/*  4203*/        OPC_CheckType, MVT::i32,
/*  4205*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_8), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETNE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_8:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4215*/      /*Scope*/ 25, /*->4241*/
/*  4216*/        OPC_CheckChild2CondCode, ISD::SETGE,
/*  4218*/        OPC_MoveParent,
/*  4219*/        OPC_RecordChild1, // #2 = $op2
/*  4220*/        OPC_MoveChild1,
/*  4221*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4223*/        OPC_MoveParent,
/*  4224*/        OPC_RecordChild2, // #3 = $op3
/*  4225*/        OPC_MoveChild2,
/*  4226*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4228*/        OPC_MoveParent,
/*  4229*/        OPC_CheckType, MVT::i32,
/*  4231*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_9), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_9:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4241*/      /*Scope*/ 25, /*->4267*/
/*  4242*/        OPC_CheckChild2CondCode, ISD::SETGT,
/*  4244*/        OPC_MoveParent,
/*  4245*/        OPC_RecordChild1, // #2 = $op2
/*  4246*/        OPC_MoveChild1,
/*  4247*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4249*/        OPC_MoveParent,
/*  4250*/        OPC_RecordChild2, // #3 = $op3
/*  4251*/        OPC_MoveChild2,
/*  4252*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4254*/        OPC_MoveParent,
/*  4255*/        OPC_CheckType, MVT::i32,
/*  4257*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_10), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETGT:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_10:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4267*/      /*Scope*/ 25, /*->4293*/
/*  4268*/        OPC_CheckChild2CondCode, ISD::SETLE,
/*  4270*/        OPC_MoveParent,
/*  4271*/        OPC_RecordChild1, // #2 = $op2
/*  4272*/        OPC_MoveChild1,
/*  4273*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4275*/        OPC_MoveParent,
/*  4276*/        OPC_RecordChild2, // #3 = $op3
/*  4277*/        OPC_MoveChild2,
/*  4278*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4280*/        OPC_MoveParent,
/*  4281*/        OPC_CheckType, MVT::i32,
/*  4283*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_11), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_11:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4293*/      /*Scope*/ 25, /*->4319*/
/*  4294*/        OPC_CheckChild2CondCode, ISD::SETLT,
/*  4296*/        OPC_MoveParent,
/*  4297*/        OPC_RecordChild1, // #2 = $op2
/*  4298*/        OPC_MoveChild1,
/*  4299*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4301*/        OPC_MoveParent,
/*  4302*/        OPC_RecordChild2, // #3 = $op3
/*  4303*/        OPC_MoveChild2,
/*  4304*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4306*/        OPC_MoveParent,
/*  4307*/        OPC_CheckType, MVT::i32,
/*  4309*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_12), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETLT:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_12:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4319*/      /*Scope*/ 25, /*->4345*/
/*  4320*/        OPC_CheckChild2CondCode, ISD::SETUGE,
/*  4322*/        OPC_MoveParent,
/*  4323*/        OPC_RecordChild1, // #2 = $op2
/*  4324*/        OPC_MoveChild1,
/*  4325*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4327*/        OPC_MoveParent,
/*  4328*/        OPC_RecordChild2, // #3 = $op3
/*  4329*/        OPC_MoveChild2,
/*  4330*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4332*/        OPC_MoveParent,
/*  4333*/        OPC_CheckType, MVT::i32,
/*  4335*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_13), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_13:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4345*/      /*Scope*/ 25, /*->4371*/
/*  4346*/        OPC_CheckChild2CondCode, ISD::SETUGT,
/*  4348*/        OPC_MoveParent,
/*  4349*/        OPC_RecordChild1, // #2 = $op2
/*  4350*/        OPC_MoveChild1,
/*  4351*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4353*/        OPC_MoveParent,
/*  4354*/        OPC_RecordChild2, // #3 = $op3
/*  4355*/        OPC_MoveChild2,
/*  4356*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4358*/        OPC_MoveParent,
/*  4359*/        OPC_CheckType, MVT::i32,
/*  4361*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_14), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETUGT:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_14:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4371*/      /*Scope*/ 25, /*->4397*/
/*  4372*/        OPC_CheckChild2CondCode, ISD::SETULE,
/*  4374*/        OPC_MoveParent,
/*  4375*/        OPC_RecordChild1, // #2 = $op2
/*  4376*/        OPC_MoveChild1,
/*  4377*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4379*/        OPC_MoveParent,
/*  4380*/        OPC_RecordChild2, // #3 = $op3
/*  4381*/        OPC_MoveChild2,
/*  4382*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4384*/        OPC_MoveParent,
/*  4385*/        OPC_CheckType, MVT::i32,
/*  4387*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_15), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULE:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_15:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4397*/      /*Scope*/ 25, /*->4423*/
/*  4398*/        OPC_CheckChild2CondCode, ISD::SETULT,
/*  4400*/        OPC_MoveParent,
/*  4401*/        OPC_RecordChild1, // #2 = $op2
/*  4402*/        OPC_MoveChild1,
/*  4403*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4405*/        OPC_MoveParent,
/*  4406*/        OPC_RecordChild2, // #3 = $op3
/*  4407*/        OPC_MoveChild2,
/*  4408*/        OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4410*/        OPC_MoveParent,
/*  4411*/        OPC_CheckType, MVT::i32,
/*  4413*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_16), 0,
                      MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                  // Src: (select:{ *:[i32] } (setcc:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, SETULT:{ *:[Other] }), regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op3) - Complexity = 10
                  // Dst: (rule_SELECT_16:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2, regs:{ *:[i32] }:$op3)
/*  4423*/      0, /*End of Scope*/
/*  4424*/    /*Scope*/ 26, /*->4451*/
/*  4425*/      OPC_RecordChild0, // #0 = $op0
/*  4426*/      OPC_MoveChild0,
/*  4427*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4429*/      OPC_MoveParent,
/*  4430*/      OPC_RecordChild1, // #1 = $op1
/*  4431*/      OPC_MoveChild1,
/*  4432*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4434*/      OPC_MoveParent,
/*  4435*/      OPC_RecordChild2, // #2 = $op2
/*  4436*/      OPC_MoveChild2,
/*  4437*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4439*/      OPC_MoveParent,
/*  4440*/      OPC_CheckType, MVT::i32,
/*  4442*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::rule_SELECT_17), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (select:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (rule_SELECT_17:{ *:[i32] } regs:{ *:[i32] }:$op0, regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  4451*/    0, /*End of Scope*/
/*  4452*/  /*SwitchOpcode*/ 38, TARGET_VAL(ISD::AND),// ->4493
/*  4455*/    OPC_RecordChild0, // #0 = $op1
/*  4456*/    OPC_MoveChild0,
/*  4457*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4459*/    OPC_MoveParent,
/*  4460*/    OPC_RecordChild1, // #1 = $op2
/*  4461*/    OPC_MoveChild1,
/*  4462*/    OPC_Scope, 16, /*->4480*/ // 2 children in Scope
/*  4464*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4467*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  4469*/      OPC_MoveParent,
/*  4470*/      OPC_EmitConvertToTarget, 1,
/*  4472*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_simple__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 9
                // Dst: (i_comp_2reg_imm__opc_andi__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  4480*/    /*Scope*/ 11, /*->4492*/
/*  4481*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4483*/      OPC_MoveParent,
/*  4484*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_and__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (i_comp_3reg__opc_and__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  4492*/    0, /*End of Scope*/
/*  4493*/  /*SwitchOpcode*/ 38, TARGET_VAL(ISD::XOR),// ->4534
/*  4496*/    OPC_RecordChild0, // #0 = $op1
/*  4497*/    OPC_MoveChild0,
/*  4498*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4500*/    OPC_MoveParent,
/*  4501*/    OPC_RecordChild1, // #1 = $op2
/*  4502*/    OPC_MoveChild1,
/*  4503*/    OPC_Scope, 16, /*->4521*/ // 2 children in Scope
/*  4505*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4508*/      OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  4510*/      OPC_MoveParent,
/*  4511*/      OPC_EmitConvertToTarget, 1,
/*  4513*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (xor:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op2) - Complexity = 9
                // Dst: (i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:{ *:[i32] } regs:{ *:[i32] }:$op1, (imm:{ *:[i32] }):$op2)
/*  4521*/    /*Scope*/ 11, /*->4533*/
/*  4522*/      OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4524*/      OPC_MoveParent,
/*  4525*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_xor__regs__regs__regs__), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i32] } regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op1, regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op2) - Complexity = 6
                // Dst: (i_comp_3reg__opc_xor__regs__regs__regs__:{ *:[i32] } regs:{ *:[i32] }:$op1, regs:{ *:[i32] }:$op2)
/*  4533*/    0, /*End of Scope*/
/*  4534*/  /*SwitchOpcode*/ 21, TARGET_VAL(ISD::CALLSEQ_START),// ->4558
/*  4537*/    OPC_RecordNode, // #0 = 'callseq_start' chained node
/*  4538*/    OPC_RecordChild1, // #1 = $InSize
/*  4539*/    OPC_MoveChild1,
/*  4540*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  4543*/    OPC_MoveParent,
/*  4544*/    OPC_RecordChild2, // #2 = $OutSize
/*  4545*/    OPC_MoveChild2,
/*  4546*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  4549*/    OPC_MoveParent,
/*  4550*/    OPC_EmitMergeInputChains1_0,
/*  4551*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::CALLSTART), 0|OPFL_Chain|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_start (timm:{ *:[i32] }):$InSize, (timm:{ *:[i32] }):$OutSize) - Complexity = 9
              // Dst: (CALLSTART (timm:{ *:[i32] }):$InSize, (timm:{ *:[i32] }):$OutSize)
/*  4558*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_END),// ->4583
/*  4561*/    OPC_RecordNode, // #0 = 'callseq_end' chained node
/*  4562*/    OPC_CaptureGlueInput,
/*  4563*/    OPC_RecordChild1, // #1 = $InSize
/*  4564*/    OPC_MoveChild1,
/*  4565*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  4568*/    OPC_MoveParent,
/*  4569*/    OPC_RecordChild2, // #2 = $OutSize
/*  4570*/    OPC_MoveChild2,
/*  4571*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  4574*/    OPC_MoveParent,
/*  4575*/    OPC_EmitMergeInputChains1_0,
/*  4576*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::CALLEND), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:{ *:[i32] }):$InSize, (timm:{ *:[i32] }):$OutSize) - Complexity = 9
              // Dst: (CALLEND (timm:{ *:[i32] }):$InSize, (timm:{ *:[i32] }):$OutSize)
/*  4583*/  /*SwitchOpcode*/ 12, TARGET_VAL(ISD::INTRINSIC_VOID),// ->4598
/*  4586*/    OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*  4587*/    OPC_CheckChild1Integer, 101|128,1/*229*/, 
/*  4590*/    OPC_RecordChild2, // #1 = $op0
/*  4591*/    OPC_EmitMergeInputChains1_0,
/*  4592*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::hwloop_set_loop_iterations), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (intrinsic_void 229:{ *:[iPTR] }, regs:{ *:[i32] }:$op0) - Complexity = 8
              // Dst: (hwloop_set_loop_iterations regs:{ *:[i32] }:$op0)
/*  4598*/  /*SwitchOpcode*/ 109|128,1/*237*/, TARGET_VAL(ISD::Constant),// ->4839
/*  4602*/    OPC_Scope, 109, /*->4713*/ // 5 children in Scope
/*  4604*/      OPC_CheckInteger, 0, 
/*  4606*/      OPC_Scope, 6, /*->4614*/ // 15 children in Scope
/*  4608*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_mv_alias__regs__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 7
                  // Dst: (i_mv_alias__regs__reg0__:{ *:[i32] })
/*  4614*/      /*Scope*/ 6, /*->4621*/
/*  4615*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_snez_alias__regs__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 7
                  // Dst: (i_snez_alias__regs__reg0__:{ *:[i32] })
/*  4621*/      /*Scope*/ 6, /*->4628*/
/*  4622*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_add__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_add__regs__reg0__reg0__:{ *:[i32] })
/*  4628*/      /*Scope*/ 6, /*->4635*/
/*  4629*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_and__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_and__regs__reg0__reg0__:{ *:[i32] })
/*  4635*/      /*Scope*/ 6, /*->4642*/
/*  4636*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_or__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_or__regs__reg0__reg0__:{ *:[i32] })
/*  4642*/      /*Scope*/ 6, /*->4649*/
/*  4643*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sll__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sll__regs__reg0__reg0__:{ *:[i32] })
/*  4649*/      /*Scope*/ 6, /*->4656*/
/*  4650*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_slt__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_slt__regs__reg0__reg0__:{ *:[i32] })
/*  4656*/      /*Scope*/ 6, /*->4663*/
/*  4657*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sltu__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sltu__regs__reg0__reg0__:{ *:[i32] })
/*  4663*/      /*Scope*/ 6, /*->4670*/
/*  4664*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sra__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sra__regs__reg0__reg0__:{ *:[i32] })
/*  4670*/      /*Scope*/ 6, /*->4677*/
/*  4671*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_srl__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_srl__regs__reg0__reg0__:{ *:[i32] })
/*  4677*/      /*Scope*/ 6, /*->4684*/
/*  4678*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_sub__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_sub__regs__reg0__reg0__:{ *:[i32] })
/*  4684*/      /*Scope*/ 6, /*->4691*/
/*  4685*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_3reg__opc_xor__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_3reg__opc_xor__regs__reg0__reg0__:{ *:[i32] })
/*  4691*/      /*Scope*/ 6, /*->4698*/
/*  4692*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_neg_alias__regs__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_neg_alias__regs__reg0__:{ *:[i32] })
/*  4698*/      /*Scope*/ 6, /*->4705*/
/*  4699*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:{ *:[i32] })
/*  4705*/      /*Scope*/ 6, /*->4712*/
/*  4706*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:{ *:[i32] })
/*  4712*/      0, /*End of Scope*/
/*  4713*/    /*Scope*/ 25, /*->4739*/
/*  4714*/      OPC_CheckInteger, 1, 
/*  4716*/      OPC_Scope, 6, /*->4724*/ // 3 children in Scope
/*  4718*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_seqz_alias__regs__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 1:{ *:[i32] } - Complexity = 7
                  // Dst: (i_seqz_alias__regs__reg0__:{ *:[i32] })
/*  4724*/      /*Scope*/ 6, /*->4731*/
/*  4725*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__1__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 1:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:{ *:[i32] })
/*  4731*/      /*Scope*/ 6, /*->4738*/
/*  4732*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__1__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 1:{ *:[i32] } - Complexity = 6
                  // Dst: (i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:{ *:[i32] })
/*  4738*/      0, /*End of Scope*/
/*  4739*/    /*Scope*/ 46, /*->4786*/
/*  4740*/      OPC_RecordNode, // #0 = $op1
/*  4741*/      OPC_Scope, 30, /*->4773*/ // 2 children in Scope
/*  4743*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  4745*/        OPC_EmitConvertToTarget, 0,
/*  4747*/        OPC_Scope, 7, /*->4756*/ // 3 children in Scope
/*  4749*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_simple__), 0,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1 - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_addi__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4756*/        /*Scope*/ 7, /*->4764*/
/*  4757*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_simple__), 0,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1 - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_ori__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4764*/        /*Scope*/ 7, /*->4772*/
/*  4765*/          OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_simple__), 0,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1 - Complexity = 5
                    // Dst: (i_comp_2reg_imm__opc_xori__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4772*/        0, /*End of Scope*/
/*  4773*/      /*Scope*/ 11, /*->4785*/
/*  4774*/        OPC_CheckPredicate, 15, // Predicate_Trunc12_i32imm
/*  4776*/        OPC_EmitConvertToTarget, 0,
/*  4778*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_lui__opc_lui__regs__imm20_s12__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i32] })<<P:Predicate_Trunc12_i32imm>>:$op1 - Complexity = 5
                  // Dst: (i_lui__opc_lui__regs__imm20_s12__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4785*/      0, /*End of Scope*/
/*  4786*/    /*Scope*/ 25, /*->4812*/
/*  4787*/      OPC_CheckInteger, 0, 
/*  4789*/      OPC_Scope, 6, /*->4797*/ // 3 children in Scope
/*  4791*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 5
                  // Dst: (i_ext_hackaton__opc_hackaton_custom_a__regs__reg0__reg0__:{ *:[i32] })
/*  4797*/      /*Scope*/ 6, /*->4804*/
/*  4798*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 5
                  // Dst: (i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__:{ *:[i32] })
/*  4804*/      /*Scope*/ 6, /*->4811*/
/*  4805*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__reg0__), 0,
                      MVT::i32, 0/*#Ops*/, 
                  // Src: 0:{ *:[i32] } - Complexity = 5
                  // Dst: (i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__reg0__:{ *:[i32] })
/*  4811*/      0, /*End of Scope*/
/*  4812*/    /*Scope*/ 25, /*->4838*/
/*  4813*/      OPC_RecordNode, // #0 = $op1
/*  4814*/      OPC_Scope, 11, /*->4827*/ // 2 children in Scope
/*  4816*/        OPC_CheckPredicate, 2, // Predicate_sext12To32imm
/*  4818*/        OPC_EmitConvertToTarget, 0,
/*  4820*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::i_ori_emulation_alias__regs__reg0__simm12_simple__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i32] })<<P:Predicate_sext12To32imm>>:$op1 - Complexity = 4
                  // Dst: (i_ori_emulation_alias__regs__reg0__simm12_simple__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4827*/      /*Scope*/ 9, /*->4837*/
/*  4828*/        OPC_EmitConvertToTarget, 0,
/*  4830*/        OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__), 0,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i32] }):$op1 - Complexity = 3
                  // Dst: (e_movi32__:{ *:[i32] } (imm:{ *:[i32] }):$op1)
/*  4837*/      0, /*End of Scope*/
/*  4838*/    0, /*End of Scope*/
/*  4839*/  /*SwitchOpcode*/ 15, TARGET_VAL(ISD::BRIND),// ->4857
/*  4842*/    OPC_RecordNode, // #0 = 'brind' chained node
/*  4843*/    OPC_RecordChild1, // #1 = $op0
/*  4844*/    OPC_MoveChild1,
/*  4845*/    OPC_CheckPredicate, 0, // Predicate_CheckFI_i32_regs
/*  4847*/    OPC_CheckType, MVT::i32,
/*  4849*/    OPC_MoveParent,
/*  4850*/    OPC_EmitMergeInputChains1_0,
/*  4851*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jump_reg_alias__regs__), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (brind regs:{ *:[i32] }<<P:Predicate_CheckFI_i32_regs>>:$op0) - Complexity = 6
              // Dst: (i_jump_reg_alias__regs__ regs:{ *:[i32] }:$op0)
/*  4857*/  /*SwitchOpcode*/ 82, TARGET_VAL(CodasipISD::GAWrap),// ->4942
/*  4860*/    OPC_RecordChild0, // #0 = $op1
/*  4861*/    OPC_MoveChild0,
/*  4862*/    OPC_SwitchOpcode /*6 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->4876
/*  4866*/      OPC_MoveParent,
/*  4867*/      OPC_CheckType, MVT::i32,
/*  4869*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__GA), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__GA:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$op1)
/*  4876*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->4889
/*  4879*/      OPC_MoveParent,
/*  4880*/      OPC_CheckType, MVT::i32,
/*  4882*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__ES), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (texternalsym:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__ES:{ *:[i32] } (texternalsym:{ *:[i32] }):$op1)
/*  4889*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::MCSymbol),// ->4902
/*  4892*/      OPC_MoveParent,
/*  4893*/      OPC_CheckType, MVT::i32,
/*  4895*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__MC), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (mcsym:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__MC:{ *:[i32] } (mcsym:{ *:[i32] }):$op1)
/*  4902*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->4915
/*  4905*/      OPC_MoveParent,
/*  4906*/      OPC_CheckType, MVT::i32,
/*  4908*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__BA), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__BA:{ *:[i32] } (tblockaddress:{ *:[i32] }):$op1)
/*  4915*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetJumpTable),// ->4928
/*  4918*/      OPC_MoveParent,
/*  4919*/      OPC_CheckType, MVT::i32,
/*  4921*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__JT), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (tjumptable:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__JT:{ *:[i32] } (tjumptable:{ *:[i32] }):$op1)
/*  4928*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->4941
/*  4931*/      OPC_MoveParent,
/*  4932*/      OPC_CheckType, MVT::i32,
/*  4934*/      OPC_MorphNodeTo1, TARGET_VAL(Codasip::e_movi32__CP), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (GAWrap:{ *:[i32] } (tconstpool:{ *:[i32] }):$op1) - Complexity = 6
                // Dst: (e_movi32__CP:{ *:[i32] } (tconstpool:{ *:[i32] }):$op1)
/*  4941*/    0, // EndSwitchOpcode
/*  4942*/  /*SwitchOpcode*/ 59, TARGET_VAL(ISD::BR),// ->5004
/*  4945*/    OPC_RecordNode, // #0 = 'br' chained node
/*  4946*/    OPC_RecordChild1, // #1 = $op0
/*  4947*/    OPC_MoveChild1,
/*  4948*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  4951*/    OPC_MoveParent,
/*  4952*/    OPC_EmitMergeInputChains1_0,
/*  4953*/    OPC_Scope, 6, /*->4961*/ // 7 children in Scope
/*  4955*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jmp_rel_alias__rel_addr20__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 5
                // Dst: (i_jmp_rel_alias__rel_addr20__ (bb:{ *:[Other] }):$op0)
/*  4961*/    /*Scope*/ 6, /*->4968*/
/*  4962*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_jal_abs__opc_jal__reg0__rel_addr20__ (bb:{ *:[Other] }):$op0)
/*  4968*/    /*Scope*/ 6, /*->4975*/
/*  4969*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_control_conditional__opc_beq__reg0__reg0__rel_addr12__ (bb:{ *:[Other] }):$op0)
/*  4975*/    /*Scope*/ 6, /*->4982*/
/*  4976*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_control_conditional__opc_bge__reg0__reg0__rel_addr12__ (bb:{ *:[Other] }):$op0)
/*  4982*/    /*Scope*/ 6, /*->4989*/
/*  4983*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__ (bb:{ *:[Other] }):$op0)
/*  4989*/    /*Scope*/ 6, /*->4996*/
/*  4990*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 4
                // Dst: (i_jalr__opc_jalr__reg0__reg0__simm12_simple__ (bb:{ *:[Other] }):$op0)
/*  4996*/    /*Scope*/ 6, /*->5003*/
/*  4997*/      OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jal__opc_jal__reg0__rel_addr20__), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (br (bb:{ *:[Other] }):$op0) - Complexity = 3
                // Dst: (i_jal__opc_jal__reg0__rel_addr20__ (bb:{ *:[Other] }):$op0)
/*  5003*/    0, /*End of Scope*/
/*  5004*/  /*SwitchOpcode*/ 8, TARGET_VAL(CodasipISD::Ret),// ->5015
/*  5007*/    OPC_RecordNode, // #0 = 'Return' chained node
/*  5008*/    OPC_CaptureGlueInput,
/*  5009*/    OPC_EmitMergeInputChains1_0,
/*  5010*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_jump_reg_alias__regs___RET_EMUL_), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (Return) - Complexity = 5
              // Dst: (i_jump_reg_alias__regs___RET_EMUL_)
/*  5015*/  /*SwitchOpcode*/ 8, TARGET_VAL(CodasipISD::MRET),// ->5026
/*  5018*/    OPC_RecordNode, // #0 = 'MRet' chained node
/*  5019*/    OPC_CaptureGlueInput,
/*  5020*/    OPC_EmitMergeInputChains1_0,
/*  5021*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::i_xret__opc_mret__), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (MRet) - Complexity = 3
              // Dst: (i_xret__opc_mret__)
/*  5026*/  /*SwitchOpcode*/ 11, TARGET_VAL(CodasipISD::EH_SJLJ_LONGJMP),// ->5040
/*  5029*/    OPC_RecordNode, // #0 = 'CDSPeh_sjlj_longjmp' chained node
/*  5030*/    OPC_RecordChild1, // #1 = $op0
/*  5031*/    OPC_CheckChild1Type, MVT::i32,
/*  5033*/    OPC_EmitMergeInputChains1_0,
/*  5034*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::EH_SjLj_LongJmp), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (CDSPeh_sjlj_longjmp regs:{ *:[i32] }:$op0) - Complexity = 3
              // Dst: (EH_SjLj_LongJmp regs:{ *:[i32] }:$op0)
/*  5040*/  /*SwitchOpcode*/ 12, TARGET_VAL(CodasipISD::EH_SJLJ_SETJMP),// ->5055
/*  5043*/    OPC_RecordNode, // #0 = 'CDSPeh_sjlj_setjmp' chained node
/*  5044*/    OPC_RecordChild1, // #1 = $op1
/*  5045*/    OPC_CheckChild1Type, MVT::i32,
/*  5047*/    OPC_EmitMergeInputChains1_0,
/*  5048*/    OPC_MorphNodeTo1, TARGET_VAL(Codasip::EH_SjLj_SetJmp), 0|OPFL_Chain,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (CDSPeh_sjlj_setjmp:{ *:[i32] } regs:{ *:[i32] }:$op1) - Complexity = 3
              // Dst: (EH_SjLj_SetJmp:{ *:[i32] } regs:{ *:[i32] }:$op1)
/*  5055*/  /*SwitchOpcode*/ 11, TARGET_VAL(CodasipISD::EH_SJLJ_SETUP_DISPATCH),// ->5069
/*  5058*/    OPC_RecordNode, // #0 = 'CDSPeh_sjlj_setup_dispatch' chained node
/*  5059*/    OPC_RecordChild1, // #1 = $op0
/*  5060*/    OPC_CheckChild1Type, MVT::i32,
/*  5062*/    OPC_EmitMergeInputChains1_0,
/*  5063*/    OPC_MorphNodeTo0, TARGET_VAL(Codasip::EH_SJLJ_SETUP_DISPATCH), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (CDSPeh_sjlj_setup_dispatch regs:{ *:[i32] }:$op0) - Complexity = 3
              // Dst: (EH_SJLJ_SETUP_DISPATCH regs:{ *:[i32] }:$op0)
/*  5069*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 5071 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 85
  // #OPC_RecordNode                           = 18
  // #OPC_RecordChild                          = 164
  // #OPC_RecordMemRef                         = 2
  // #OPC_CaptureGlueInput                     = 5
  // #OPC_MoveChild                            = 245
  // #OPC_MoveParent                           = 367
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 49
  // #OPC_CheckPatternPredicate                = 0
  // #OPC_CheckPredicate                       = 277
  // #OPC_CheckOpcode                          = 115
  // #OPC_SwitchOpcode                         = 4
  // #OPC_CheckType                            = 43
  // #OPC_SwitchType                           = 0
  // #OPC_CheckChildType                       = 9
  // #OPC_CheckInteger                         = 3
  // #OPC_CheckChildInteger                    = 56
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
  // #OPC_MorphNodeTo                          = 250

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
    // Predicate_NotFI_i32_regs
    SDNode *N = Node;
    (void)N;
return !FrameIndexSDNode::classof(N);
  }
  case 2: { 
    // Predicate_sext12To32imm
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return CheckImm(Imm,12,1,0);
  }
  case 3: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 4: { 
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 5: { 
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
  case 6: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 7: { 
    // Predicate_truncstorei8
    // Predicate_sextloadi8
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 8: { 
    // Predicate_truncstorei16
    // Predicate_sextloadi16
    // Predicate_zextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 9: { 
    // Predicate_zext5To32imm
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return CheckImm(Imm,5,0,0);
  }
  case 10: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 11: { 
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 12: { 
    // Predicate_zextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 13: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 14: { 
    // Predicate_extload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 15: { 
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
