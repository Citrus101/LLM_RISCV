/**
 * Codasip s.r.o.
 *
 * CONFIDENTIAL
 *
 * Copyright 2025 Codasip s.r.o.
 *
 * All Rights Reserved.
 * This file is part of the Codasip Studio product. No part of the Studio product, including this
 * file, may be use, copied, modified, or distributed except in accordance with the terms contained
 * in Codasip license agreement under which you obtained this file.
 *
 * \file
 * \date    2025-04-13
 * \author  Codasip (c) C compiler backend generator
 * \version 9.4.2
 * \brief   Source for compiler backend
 * \project codasip_urisc_v.ia
 * \note          Codasip Studio version: 9.4.2
 *                Project: codasip_urisc_v.ia
 *                Date: 2025-04-13 19:12:34
 *                Copyright (C) 2025 Codasip s.r.o.
 */


#include "CodasipGenISelLowering.h"
#include "CodasipGenInstrInfo.h"
#include "CodasipInstructionSemantics.h"

#include "llvm/Analysis/OptimizationRemarkEmitter.h"

// turn of optimization on windows, too long function
#ifdef _WIN32
// disable global optimization, this will increase compilation times 8x-10x
#pragma optimize("", off)
#endif

llvm::SelectionDAG *llvm::GetCodasipPattern(const TargetMachine &TM,
                                            MachineFunction &mf, unsigned icode,
                                            std::vector<SDValue> &roots,
                                            bool lowlevel) {
  // hlp for memop
  MachinePointerInfo mpi;
  // resulting dag
  SelectionDAG *dag = new SelectionDAG(TM, CodeGenOpt::None);
  OptimizationRemarkEmitter ore(&mf.getFunction());
  dag->init(mf, ore, nullptr, nullptr, nullptr);
  // entry node
  SDValue entry = dag->getEntryNode();
  // dummy loc
  SDLoc dl;
  // building of nodes for each instruction
  switch (icode) {
  case Codasip::i_call_reg_alias__regs__:
    if (lowlevel) {
SDValue node0x22600910 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x22a022f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22600720 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x22a022f0);
SDValue node0x225ffcc0 = dag->getCopyToReg(node0x22600720, dl, dag->getRegister(Codasip::rf_gpr_1, MVT::i32), node0x22600910, SDValue());
roots.reserve(2);
roots.push_back(node0x225ffcc0);
roots.push_back(node0x22600720);
dag->setRoot(node0x225ffcc0);
    } else     {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jump_reg_alias__regs__:
    {
SDValue node0x22752a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22752800 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x22752a30);
roots.reserve(1);
roots.push_back(node0x22752800);
dag->setRoot(node0x22752800);
    }
    break;
  case Codasip::i_jmp_rel_alias__rel_addr20__:
    {
SDValue node0x227511d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x22751450 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x227511d0);
roots.reserve(1);
roots.push_back(node0x22751450);
dag->setRoot(node0x22751450);
    }
    break;
  case Codasip::i_get_pc_alias__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_get_pc_alias__regs__:
    {
SDValue node0x226dd2a0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x227370c0 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x227372e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x226dd2a0, node0x227370c0);
SDValue node0x22737070 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227372e0, SDValue());
roots.reserve(1);
roots.push_back(node0x22737070);
dag->setRoot(node0x22737070);
    }
    break;
  case Codasip::i_mv_alias__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_mv_alias__regs__reg0__:
    {
SDValue node0x227d97a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x227d9750 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227d97a0, SDValue());
roots.reserve(1);
roots.push_back(node0x227d9750);
dag->setRoot(node0x227d9750);
    }
    break;
  case Codasip::i_mv_alias__regs__regs__:
    {
SDValue node0x227da830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227da5e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227da830, SDValue());
roots.reserve(1);
roots.push_back(node0x227da5e0);
dag->setRoot(node0x227da5e0);
    }
    break;
  case Codasip::i_seqz_alias__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_seqz_alias__regs__reg0__:
    {
SDValue node0x227f8700 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x227f86b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227f8700, SDValue());
roots.reserve(1);
roots.push_back(node0x227f86b0);
dag->setRoot(node0x227f86b0);
    }
    break;
  case Codasip::i_seqz_alias__regs__regs__:
    {
SDValue node0x227f96b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x227f9830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227f98e0 = dag->getSetCC(dl, MVT::i32, node0x227f9830, node0x227f96b0, ISD::SETEQ);
SDValue node0x227f95e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227f98e0, SDValue());
roots.reserve(1);
roots.push_back(node0x227f95e0);
dag->setRoot(node0x227f95e0);
    }
    break;
  case Codasip::i_snez_alias__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_snez_alias__regs__reg0__:
    {
SDValue node0x228032b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22803260 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228032b0, SDValue());
roots.reserve(1);
roots.push_back(node0x22803260);
dag->setRoot(node0x22803260);
    }
    break;
  case Codasip::i_snez_alias__regs__regs__:
    {
SDValue node0x228041c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22804340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228043f0 = dag->getSetCC(dl, MVT::i32, node0x22804340, node0x228041c0, ISD::SETNE);
SDValue node0x228040f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228043f0, SDValue());
roots.reserve(1);
roots.push_back(node0x228040f0);
dag->setRoot(node0x228040f0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__regs__simm12_simple__immspec_1_:
    {
SDValue node0x2287cbe0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x2287b320 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2287cbe0, SDValue());
SDValue node0x2287cf50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2287d090 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x2287b320, node0x2287cf50);
roots.reserve(2);
roots.push_back(node0x2287b320);
roots.push_back(node0x2287d090);
dag->setRoot(node0x2287d090);
    }
    break;
  case Codasip::i_call_rel_alias__rel_addr20__:
case Codasip::i_call_rel_alias__rel_addr20__ES:
case Codasip::i_call_rel_alias__rel_addr20__MC:
case Codasip::i_call_rel_alias__rel_addr20__BA:
    if (lowlevel) {
SDValue node0x223edd90 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x223edfa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x223ee220 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x223edfa0);
SDValue node0x223ed4a0 = dag->getCopyToReg(node0x223ee220, dl, dag->getRegister(Codasip::rf_gpr_1, MVT::i32), node0x223edd90, SDValue());
roots.reserve(2);
roots.push_back(node0x223ed4a0);
roots.push_back(node0x223ee220);
dag->setRoot(node0x223ed4a0);
    } else     {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__:
    {
SDValue node0x22739fe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x22739ce0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x22739fe0);
roots.reserve(1);
roots.push_back(node0x22739ce0);
dag->setRoot(node0x22739ce0);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__regs__rel_addr20__:
    {
SDValue node0x2273a5c0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x22739590 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2273a5c0, SDValue());
SDValue node0x2273a930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2273a560 = dag->getNode(ISD::BR, dl, MVT::Other, node0x22739590, node0x2273a930);
roots.reserve(2);
roots.push_back(node0x22739590);
roots.push_back(node0x2273a560);
dag->setRoot(node0x2273a560);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__:
    {
SDValue node0x22908900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x22908bb0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x22908900);
roots.reserve(1);
roots.push_back(node0x22908bb0);
dag->setRoot(node0x22908bb0);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x22909e80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2290a000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2290a0b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2290a150 = dag->getSetCC(dl, MVT::iAny, node0x2290a000, node0x22909e80, ISD::SETEQ);
SDValue node0x2290a370 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2290a150, node0x2290a0b0);
roots.reserve(1);
roots.push_back(node0x2290a370);
dag->setRoot(node0x2290a370);
    } else     {
SDValue node0x22909e80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2290a000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2290a0b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2290a150 = dag->getSetCC(dl, MVT::i32, node0x2290a000, node0x22909e80, ISD::SETEQ);
SDValue node0x2290a370 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2290a150, node0x2290a0b0);
roots.reserve(1);
roots.push_back(node0x2290a370);
dag->setRoot(node0x2290a370);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x2290c820 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2290c9a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2290ca50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2290caf0 = dag->getSetCC(dl, MVT::iAny, node0x2290c9a0, node0x2290c820, ISD::SETEQ);
SDValue node0x2290cd10 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2290caf0, node0x2290ca50);
roots.reserve(1);
roots.push_back(node0x2290cd10);
dag->setRoot(node0x2290cd10);
    } else     {
SDValue node0x2290c820 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2290c9a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2290ca50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2290caf0 = dag->getSetCC(dl, MVT::i32, node0x2290c9a0, node0x2290c820, ISD::SETEQ);
SDValue node0x2290cd10 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2290caf0, node0x2290ca50);
roots.reserve(1);
roots.push_back(node0x2290cd10);
dag->setRoot(node0x2290cd10);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2290e490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2290e540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2290e5f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2290e690 = dag->getSetCC(dl, MVT::iAny, node0x2290e540, node0x2290e490, ISD::SETEQ);
SDValue node0x2290e8b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2290e690, node0x2290e5f0);
roots.reserve(1);
roots.push_back(node0x2290e8b0);
dag->setRoot(node0x2290e8b0);
    } else     {
SDValue node0x2290e490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2290e540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2290e5f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2290e690 = dag->getSetCC(dl, MVT::i32, node0x2290e540, node0x2290e490, ISD::SETEQ);
SDValue node0x2290e8b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2290e690, node0x2290e5f0);
roots.reserve(1);
roots.push_back(node0x2290e8b0);
dag->setRoot(node0x2290e8b0);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__:
    {
SDValue node0x2290f810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2290fac0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2290f810);
roots.reserve(1);
roots.push_back(node0x2290fac0);
dag->setRoot(node0x2290fac0);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x22910a20 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x22910d80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22910e30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22910ed0 = dag->getSetCC(dl, MVT::iAny, node0x22910d80, node0x22910a20, ISD::SETLT);
SDValue node0x229110f0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22910ed0, node0x22910e30);
roots.reserve(1);
roots.push_back(node0x229110f0);
dag->setRoot(node0x229110f0);
    } else     {
SDValue node0x22910a20 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x22910d80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22910e30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22910ed0 = dag->getSetCC(dl, MVT::i32, node0x22910d80, node0x22910a20, ISD::SETLT);
SDValue node0x229110f0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22910ed0, node0x22910e30);
roots.reserve(1);
roots.push_back(node0x229110f0);
dag->setRoot(node0x229110f0);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x229136e0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x229137c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22913870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22913910 = dag->getSetCC(dl, MVT::iAny, node0x229137c0, node0x229136e0, ISD::SETGT);
SDValue node0x22913b30 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22913910, node0x22913870);
roots.reserve(1);
roots.push_back(node0x22913b30);
dag->setRoot(node0x22913b30);
    } else     {
SDValue node0x229136e0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x229137c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22913870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22913910 = dag->getSetCC(dl, MVT::i32, node0x229137c0, node0x229136e0, ISD::SETGT);
SDValue node0x22913b30 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22913910, node0x22913870);
roots.reserve(1);
roots.push_back(node0x22913b30);
dag->setRoot(node0x22913b30);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x229152b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22915360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22915410 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x229154b0 = dag->getSetCC(dl, MVT::iAny, node0x22915360, node0x229152b0, ISD::SETGE);
SDValue node0x229156d0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x229154b0, node0x22915410);
roots.reserve(1);
roots.push_back(node0x229156d0);
dag->setRoot(node0x229156d0);
    } else     {
SDValue node0x229152b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22915360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22915410 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x229154b0 = dag->getSetCC(dl, MVT::i32, node0x22915360, node0x229152b0, ISD::SETGE);
SDValue node0x229156d0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x229154b0, node0x22915410);
roots.reserve(1);
roots.push_back(node0x229156d0);
dag->setRoot(node0x229156d0);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__:
    {
SDValue node0x22916630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x229168e0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x22916630);
roots.reserve(1);
roots.push_back(node0x229168e0);
dag->setRoot(node0x229168e0);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x22917a20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22917ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22917c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22917cf0 = dag->getSetCC(dl, MVT::iAny, node0x22917ba0, node0x22917a20, ISD::SETEQ);
SDValue node0x22917f10 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22917cf0, node0x22917c50);
roots.reserve(1);
roots.push_back(node0x22917f10);
dag->setRoot(node0x22917f10);
    } else     {
SDValue node0x22917a20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22917ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22917c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22917cf0 = dag->getSetCC(dl, MVT::i32, node0x22917ba0, node0x22917a20, ISD::SETEQ);
SDValue node0x22917f10 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22917cf0, node0x22917c50);
roots.reserve(1);
roots.push_back(node0x22917f10);
dag->setRoot(node0x22917f10);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2291bfc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2291c070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2291c120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2291c1c0 = dag->getSetCC(dl, MVT::iAny, node0x2291c070, node0x2291bfc0, ISD::SETUGE);
SDValue node0x2291c3e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2291c1c0, node0x2291c120);
roots.reserve(1);
roots.push_back(node0x2291c3e0);
dag->setRoot(node0x2291c3e0);
    } else     {
SDValue node0x2291bfc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2291c070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2291c120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2291c1c0 = dag->getSetCC(dl, MVT::i32, node0x2291c070, node0x2291bfc0, ISD::SETUGE);
SDValue node0x2291c3e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2291c1c0, node0x2291c120);
roots.reserve(1);
roots.push_back(node0x2291c3e0);
dag->setRoot(node0x2291c3e0);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2291e020 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2291e1a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2291e250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2291e2f0 = dag->getSetCC(dl, MVT::iAny, node0x2291e1a0, node0x2291e020, ISD::SETGT);
SDValue node0x2291e510 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2291e2f0, node0x2291e250);
roots.reserve(1);
roots.push_back(node0x2291e510);
dag->setRoot(node0x2291e510);
    } else     {
SDValue node0x2291e020 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2291e1a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2291e250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2291e2f0 = dag->getSetCC(dl, MVT::i32, node0x2291e1a0, node0x2291e020, ISD::SETGT);
SDValue node0x2291e510 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2291e2f0, node0x2291e250);
roots.reserve(1);
roots.push_back(node0x2291e510);
dag->setRoot(node0x2291e510);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x22920a10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22920b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22920c40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22920ce0 = dag->getSetCC(dl, MVT::iAny, node0x22920b90, node0x22920a10, ISD::SETLT);
SDValue node0x22920f00 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22920ce0, node0x22920c40);
roots.reserve(1);
roots.push_back(node0x22920f00);
dag->setRoot(node0x22920f00);
    } else     {
SDValue node0x22920a10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22920b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22920c40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22920ce0 = dag->getSetCC(dl, MVT::i32, node0x22920b90, node0x22920a10, ISD::SETLT);
SDValue node0x22920f00 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22920ce0, node0x22920c40);
roots.reserve(1);
roots.push_back(node0x22920f00);
dag->setRoot(node0x22920f00);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x22922680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22922730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x229227e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x22922880 = dag->getSetCC(dl, MVT::iAny, node0x22922730, node0x22922680, ISD::SETLT);
SDValue node0x22922aa0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22922880, node0x229227e0);
roots.reserve(1);
roots.push_back(node0x22922aa0);
dag->setRoot(node0x22922aa0);
    } else     {
SDValue node0x22922680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22922730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x229227e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x22922880 = dag->getSetCC(dl, MVT::i32, node0x22922730, node0x22922680, ISD::SETLT);
SDValue node0x22922aa0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22922880, node0x229227e0);
roots.reserve(1);
roots.push_back(node0x22922aa0);
dag->setRoot(node0x22922aa0);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x22924690 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22924810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x229248c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22924960 = dag->getSetCC(dl, MVT::iAny, node0x22924810, node0x22924690, ISD::SETNE);
SDValue node0x22924b80 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22924960, node0x229248c0);
roots.reserve(1);
roots.push_back(node0x22924b80);
dag->setRoot(node0x22924b80);
    } else     {
SDValue node0x22924690 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22924810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x229248c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22924960 = dag->getSetCC(dl, MVT::i32, node0x22924810, node0x22924690, ISD::SETNE);
SDValue node0x22924b80 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22924960, node0x229248c0);
roots.reserve(1);
roots.push_back(node0x22924b80);
dag->setRoot(node0x22924b80);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x22928480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22928530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x229285e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x22928680 = dag->getSetCC(dl, MVT::iAny, node0x22928530, node0x22928480, ISD::SETULT);
SDValue node0x229288a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22928680, node0x229285e0);
roots.reserve(1);
roots.push_back(node0x229288a0);
dag->setRoot(node0x229288a0);
    } else     {
SDValue node0x22928480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22928530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x229285e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x22928680 = dag->getSetCC(dl, MVT::i32, node0x22928530, node0x22928480, ISD::SETULT);
SDValue node0x229288a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22928680, node0x229285e0);
roots.reserve(1);
roots.push_back(node0x229288a0);
dag->setRoot(node0x229288a0);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2292a530 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2292a6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2292a760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2292a800 = dag->getSetCC(dl, MVT::iAny, node0x2292a6b0, node0x2292a530, ISD::SETNE);
SDValue node0x2292aa20 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2292a800, node0x2292a760);
roots.reserve(1);
roots.push_back(node0x2292aa20);
dag->setRoot(node0x2292aa20);
    } else     {
SDValue node0x2292a530 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2292a6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2292a760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2292a800 = dag->getSetCC(dl, MVT::i32, node0x2292a6b0, node0x2292a530, ISD::SETNE);
SDValue node0x2292aa20 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2292a800, node0x2292a760);
roots.reserve(1);
roots.push_back(node0x2292aa20);
dag->setRoot(node0x2292aa20);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x2292cf20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2292d0a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2292d150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2292d1f0 = dag->getSetCC(dl, MVT::iAny, node0x2292d0a0, node0x2292cf20, ISD::SETNE);
SDValue node0x2292d410 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2292d1f0, node0x2292d150);
roots.reserve(1);
roots.push_back(node0x2292d410);
dag->setRoot(node0x2292d410);
    } else     {
SDValue node0x2292cf20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2292d0a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2292d150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2292d1f0 = dag->getSetCC(dl, MVT::i32, node0x2292d0a0, node0x2292cf20, ISD::SETNE);
SDValue node0x2292d410 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2292d1f0, node0x2292d150);
roots.reserve(1);
roots.push_back(node0x2292d410);
dag->setRoot(node0x2292d410);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2292eb90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2292ec40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2292ecf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2292ed90 = dag->getSetCC(dl, MVT::iAny, node0x2292ec40, node0x2292eb90, ISD::SETNE);
SDValue node0x2292efb0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2292ed90, node0x2292ecf0);
roots.reserve(1);
roots.push_back(node0x2292efb0);
dag->setRoot(node0x2292efb0);
    } else     {
SDValue node0x2292eb90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2292ec40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2292ecf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2292ed90 = dag->getSetCC(dl, MVT::i32, node0x2292ec40, node0x2292eb90, ISD::SETNE);
SDValue node0x2292efb0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2292ed90, node0x2292ecf0);
roots.reserve(1);
roots.push_back(node0x2292efb0);
dag->setRoot(node0x2292efb0);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x2286f680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2286f8e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2286f990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2286fa40 = dag->getSetCC(dl, MVT::iAny, node0x2286f8e0, node0x2286f990, ISD::SETLE);
SDValue node0x2286fae0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2286fa40, node0x2286f680);
roots.reserve(1);
roots.push_back(node0x2286fae0);
dag->setRoot(node0x2286fae0);
    } else     {
SDValue node0x2286f680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2286f8e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2286f990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2286fa40 = dag->getSetCC(dl, MVT::i32, node0x2286f8e0, node0x2286f990, ISD::SETLE);
SDValue node0x2286fae0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2286fa40, node0x2286f680);
roots.reserve(1);
roots.push_back(node0x2286fae0);
dag->setRoot(node0x2286fae0);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x228705a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x22870830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x228708e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22870990 = dag->getSetCC(dl, MVT::iAny, node0x22870830, node0x228708e0, ISD::SETULE);
SDValue node0x22870a60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22870990, node0x228705a0);
roots.reserve(1);
roots.push_back(node0x22870a60);
dag->setRoot(node0x22870a60);
    } else     {
SDValue node0x228705a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x22870830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x228708e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22870990 = dag->getSetCC(dl, MVT::i32, node0x22870830, node0x228708e0, ISD::SETULE);
SDValue node0x22870a60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22870990, node0x228705a0);
roots.reserve(1);
roots.push_back(node0x22870a60);
dag->setRoot(node0x22870a60);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x22871470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x22871700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x228717b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22871860 = dag->getSetCC(dl, MVT::iAny, node0x22871700, node0x228717b0, ISD::SETGT);
SDValue node0x22871930 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22871860, node0x22871470);
roots.reserve(1);
roots.push_back(node0x22871930);
dag->setRoot(node0x22871930);
    } else     {
SDValue node0x22871470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x22871700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x228717b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22871860 = dag->getSetCC(dl, MVT::i32, node0x22871700, node0x228717b0, ISD::SETGT);
SDValue node0x22871930 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22871860, node0x22871470);
roots.reserve(1);
roots.push_back(node0x22871930);
dag->setRoot(node0x22871930);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x22872340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x228725d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22872680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22872730 = dag->getSetCC(dl, MVT::iAny, node0x228725d0, node0x22872680, ISD::SETUGT);
SDValue node0x22872800 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22872730, node0x22872340);
roots.reserve(1);
roots.push_back(node0x22872800);
dag->setRoot(node0x22872800);
    } else     {
SDValue node0x22872340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x228725d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22872680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22872730 = dag->getSetCC(dl, MVT::i32, node0x228725d0, node0x22872680, ISD::SETUGT);
SDValue node0x22872800 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x22872730, node0x22872340);
roots.reserve(1);
roots.push_back(node0x22872800);
dag->setRoot(node0x22872800);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__:
    {
SDValue node0x2273c910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2273c640 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2273c910);
roots.reserve(1);
roots.push_back(node0x2273c640);
dag->setRoot(node0x2273c640);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_simple__:
    {
SDValue node0x22746ed0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x227465f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22746ed0, SDValue());
SDValue node0x22747240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22746ea0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x227465f0, node0x22747240);
roots.reserve(2);
roots.push_back(node0x227465f0);
roots.push_back(node0x22746ea0);
dag->setRoot(node0x22746ea0);
    }
    break;
  case Codasip::i_auipc__opc_auipc__regs__imm20_s12__:
    {
SDValue node0x22991cb0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x223e1820 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x226195d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22619670 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22991cb0, node0x226195d0);
SDValue node0x22619730 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22619670, node0x223e1820);
SDValue node0x22991c60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22619730, SDValue());
roots.reserve(1);
roots.push_back(node0x22991c60);
dag->setRoot(node0x22991c60);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_simple__:
    {
SDValue node0x22999970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22998760 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22999970, SDValue());
roots.reserve(1);
roots.push_back(node0x22998760);
dag->setRoot(node0x22998760);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__:
    {
SDValue node0x22625b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22620e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22620ea0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22625b20, node0x22620e00);
SDValue node0x2261f920 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22620ea0, SDValue());
roots.reserve(1);
roots.push_back(node0x2261f920);
dag->setRoot(node0x2261f920);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_simple__:
    {
SDValue node0x229e6ca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229e6d50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x229e6df0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x229e6ca0, node0x229e6d50);
SDValue node0x229e57e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229e6df0, SDValue());
roots.reserve(1);
roots.push_back(node0x229e57e0);
dag->setRoot(node0x229e57e0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_simple__:
    {
SDValue node0x229f1b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229f0a10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229f1b80, SDValue());
roots.reserve(1);
roots.push_back(node0x229f0a10);
dag->setRoot(node0x229f0a10);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_simple__:
    {
SDValue node0x229f5d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229f5dd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x229f5e70 = dag->getNode(ISD::OR, dl, MVT::i32, node0x229f5d20, node0x229f5dd0);
SDValue node0x229f4870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229f5e70, SDValue());
roots.reserve(1);
roots.push_back(node0x229f4870);
dag->setRoot(node0x229f4870);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__:
    {
SDValue node0x226275e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x226276c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22627760 = dag->getSetCC(dl, MVT::i32, node0x226276c0, node0x226275e0, ISD::SETGT);
SDValue node0x229ffff0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22627760, SDValue());
roots.reserve(1);
roots.push_back(node0x229ffff0);
dag->setRoot(node0x229ffff0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:
    {
SDValue node0x2262bc00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2262bcb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2262bd50 = dag->getSetCC(dl, MVT::i32, node0x2262bc00, node0x2262bcb0, ISD::SETLT);
SDValue node0x2262a5f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2262bd50, SDValue());
roots.reserve(1);
roots.push_back(node0x2262a5f0);
dag->setRoot(node0x2262a5f0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__:
    {
SDValue node0x22637220 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22637300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226373a0 = dag->getSetCC(dl, MVT::i32, node0x22637300, node0x22637220, ISD::SETNE);
SDValue node0x22635f40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226373a0, SDValue());
roots.reserve(1);
roots.push_back(node0x22635f40);
dag->setRoot(node0x22635f40);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:
    {
SDValue node0x2263b840 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2263b8f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2263b990 = dag->getSetCC(dl, MVT::i32, node0x2263b840, node0x2263b8f0, ISD::SETULT);
SDValue node0x2263a230 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2263b990, SDValue());
roots.reserve(1);
roots.push_back(node0x2263a230);
dag->setRoot(node0x2263a230);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_simple__:
    {
SDValue node0x22646b50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22645940 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22646b50, SDValue());
roots.reserve(1);
roots.push_back(node0x22645940);
dag->setRoot(node0x22645940);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:
    {
SDValue node0x2264ae30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2264aee0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2264af80 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x2264ae30, node0x2264aee0);
SDValue node0x226498e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2264af80, SDValue());
roots.reserve(1);
roots.push_back(node0x226498e0);
dag->setRoot(node0x226498e0);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_slli__regs__regs__shift_imm__:
    {
SDValue node0x2264fcf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2264fda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2264fe40 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x2264fcf0, node0x2264fda0);
SDValue node0x2264f840 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2264fe40, SDValue());
roots.reserve(1);
roots.push_back(node0x2264f840);
dag->setRoot(node0x2264f840);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_srai__regs__regs__shift_imm__:
    {
SDValue node0x22654e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22654ec0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22654f60 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x22654e10, node0x22654ec0);
SDValue node0x22654960 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22654f60, SDValue());
roots.reserve(1);
roots.push_back(node0x22654960);
dag->setRoot(node0x22654960);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_srli__regs__regs__shift_imm__:
    {
SDValue node0x22659f30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22659fe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2265a080 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x22659f30, node0x22659fe0);
SDValue node0x22659a80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2265a080, SDValue());
roots.reserve(1);
roots.push_back(node0x22659a80);
dag->setRoot(node0x22659a80);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__reg0__reg0__:
    {
SDValue node0x2266f9d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2266db80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2266f9d0, SDValue());
roots.reserve(1);
roots.push_back(node0x2266db80);
dag->setRoot(node0x2266db80);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__reg0__regs__:
    {
SDValue node0x22670bc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2266fbc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22670bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x2266fbc0);
dag->setRoot(node0x2266fbc0);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__regs__reg0__:
    {
SDValue node0x22672c20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22670d50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22672c20, SDValue());
roots.reserve(1);
roots.push_back(node0x22670d50);
dag->setRoot(node0x22670d50);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__regs__regs__:
    {
SDValue node0x22673f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22674000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x226740b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22673f50, node0x22674000);
SDValue node0x22673c60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226740b0, SDValue());
roots.reserve(1);
roots.push_back(node0x22673c60);
dag->setRoot(node0x22673c60);
    }
    break;
  case Codasip::i_comp_3reg__opc_and__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_and__regs__reg0__reg0__:
    {
SDValue node0x2267c3c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2267a570 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2267c3c0, SDValue());
roots.reserve(1);
roots.push_back(node0x2267a570);
dag->setRoot(node0x2267a570);
    }
    break;
  case Codasip::i_comp_3reg__opc_and__regs__regs__regs__:
    {
SDValue node0x22680650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22680700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x226807b0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x22680650, node0x22680700);
SDValue node0x2267f4b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226807b0, SDValue());
roots.reserve(1);
roots.push_back(node0x2267f4b0);
dag->setRoot(node0x2267f4b0);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__reg0__reg0__:
    {
SDValue node0x22688c40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22686df0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22688c40, SDValue());
roots.reserve(1);
roots.push_back(node0x22686df0);
dag->setRoot(node0x22686df0);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__reg0__regs__:
    {
SDValue node0x22689e90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22688e30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22689e90, SDValue());
roots.reserve(1);
roots.push_back(node0x22688e30);
dag->setRoot(node0x22688e30);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__regs__reg0__:
    {
SDValue node0x2268bf50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2268a020 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2268bf50, SDValue());
roots.reserve(1);
roots.push_back(node0x2268a020);
dag->setRoot(node0x2268a020);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__regs__regs__:
    {
SDValue node0x2268d290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2268d340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2268d3f0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x2268d290, node0x2268d340);
SDValue node0x2268c0e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2268d3f0, SDValue());
roots.reserve(1);
roots.push_back(node0x2268c0e0);
dag->setRoot(node0x2268c0e0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__reg0__reg0__:
    {
SDValue node0x22695760 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22693910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22695760, SDValue());
roots.reserve(1);
roots.push_back(node0x22693910);
dag->setRoot(node0x22693910);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__reg0__:
    {
SDValue node0x22698860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22696940 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22698860, SDValue());
roots.reserve(1);
roots.push_back(node0x22696940);
dag->setRoot(node0x22696940);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__regs__:
    {
SDValue node0x22699be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22699c90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22699dd0 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x22699be0, node0x22699c90);
SDValue node0x226989f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22699dd0, SDValue());
roots.reserve(1);
roots.push_back(node0x226989f0);
dag->setRoot(node0x226989f0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__reg0__reg0__:
    {
SDValue node0x226a2110 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x226a02c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226a2110, SDValue());
roots.reserve(1);
roots.push_back(node0x226a02c0);
dag->setRoot(node0x226a02c0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__reg0__regs__:
    {
SDValue node0x226a3180 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x226a3300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226a33b0 = dag->getSetCC(dl, MVT::i32, node0x226a3300, node0x226a3180, ISD::SETGT);
SDValue node0x226a2300 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226a33b0, SDValue());
roots.reserve(1);
roots.push_back(node0x226a2300);
dag->setRoot(node0x226a2300);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__reg0__:
    {
SDValue node0x226a5360 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x226a5580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226a5630 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x226a5580, node0x226a5360);
SDValue node0x226a36d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226a5630, SDValue());
roots.reserve(1);
roots.push_back(node0x226a36d0);
dag->setRoot(node0x226a36d0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__regs__:
    {
SDValue node0x226a6920 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226a69d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x226a6a80 = dag->getSetCC(dl, MVT::i32, node0x226a6920, node0x226a69d0, ISD::SETLT);
SDValue node0x226a5840 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226a6a80, SDValue());
roots.reserve(1);
roots.push_back(node0x226a5840);
dag->setRoot(node0x226a5840);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__reg0__reg0__:
    {
SDValue node0x228d0bd0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x228ceee0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228d0bd0, SDValue());
roots.reserve(1);
roots.push_back(node0x228ceee0);
dag->setRoot(node0x228ceee0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__reg0__regs__:
    {
SDValue node0x228d1c40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x228d1dc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228d1e70 = dag->getSetCC(dl, MVT::i32, node0x228d1dc0, node0x228d1c40, ISD::SETNE);
SDValue node0x228d0dc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228d1e70, SDValue());
roots.reserve(1);
roots.push_back(node0x228d0dc0);
dag->setRoot(node0x228d0dc0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__:
    {
SDValue node0x228d5130 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228d51e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x228d5290 = dag->getSetCC(dl, MVT::i32, node0x228d5130, node0x228d51e0, ISD::SETULT);
SDValue node0x228d3f90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228d5290, SDValue());
roots.reserve(1);
roots.push_back(node0x228d3f90);
dag->setRoot(node0x228d3f90);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__reg0__reg0__:
    {
SDValue node0x228dd660 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x228db810 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228dd660, SDValue());
roots.reserve(1);
roots.push_back(node0x228db810);
dag->setRoot(node0x228db810);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__reg0__:
    {
SDValue node0x228e0760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228de840 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228e0760, SDValue());
roots.reserve(1);
roots.push_back(node0x228de840);
dag->setRoot(node0x228de840);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__regs__:
    {
SDValue node0x228e1ae0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228e1b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x228e1cd0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x228e1ae0, node0x228e1b90);
SDValue node0x228e08f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228e1cd0, SDValue());
roots.reserve(1);
roots.push_back(node0x228e08f0);
dag->setRoot(node0x228e08f0);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__reg0__reg0__:
    {
SDValue node0x228ea010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x228e81c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228ea010, SDValue());
roots.reserve(1);
roots.push_back(node0x228e81c0);
dag->setRoot(node0x228e81c0);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__reg0__:
    {
SDValue node0x228ed110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228eb1f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228ed110, SDValue());
roots.reserve(1);
roots.push_back(node0x228eb1f0);
dag->setRoot(node0x228eb1f0);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__regs__:
    {
SDValue node0x228ee490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228ee540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x228ee680 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x228ee490, node0x228ee540);
SDValue node0x228ed2a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228ee680, SDValue());
roots.reserve(1);
roots.push_back(node0x228ed2a0);
dag->setRoot(node0x228ed2a0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__reg0__reg0__:
    {
SDValue node0x228f69c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x228f4b70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228f69c0, SDValue());
roots.reserve(1);
roots.push_back(node0x228f4b70);
dag->setRoot(node0x228f4b70);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__reg0__regs__:
    {
SDValue node0x228f79b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x228f7bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228f7c60 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x228f79b0, node0x228f7bb0);
SDValue node0x228f6bb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228f7c60, SDValue());
roots.reserve(1);
roots.push_back(node0x228f6bb0);
dag->setRoot(node0x228f6bb0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__regs__reg0__:
    {
SDValue node0x228f9cd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228f7e70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228f9cd0, SDValue());
roots.reserve(1);
roots.push_back(node0x228f7e70);
dag->setRoot(node0x228f7e70);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__regs__regs__:
    {
SDValue node0x228fafb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228fb060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x228fb110 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x228fafb0, node0x228fb060);
SDValue node0x228f9e60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228fb110, SDValue());
roots.reserve(1);
roots.push_back(node0x228f9e60);
dag->setRoot(node0x228f9e60);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__reg0__reg0__:
    {
SDValue node0x22903420 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x229015d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22903420, SDValue());
roots.reserve(1);
roots.push_back(node0x229015d0);
dag->setRoot(node0x229015d0);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__reg0__regs__:
    {
SDValue node0x22904610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22903610 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22904610, SDValue());
roots.reserve(1);
roots.push_back(node0x22903610);
dag->setRoot(node0x22903610);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__regs__reg0__:
    {
SDValue node0x22906670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229047a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22906670, SDValue());
roots.reserve(1);
roots.push_back(node0x229047a0);
dag->setRoot(node0x229047a0);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__regs__regs__:
    {
SDValue node0x22907950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22907a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22907ab0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x22907950, node0x22907a00);
SDValue node0x22906800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22907ab0, SDValue());
roots.reserve(1);
roots.push_back(node0x22906800);
dag->setRoot(node0x22906800);
    }
    break;
  case Codasip::i_load__opc_loadb__reg0__simm12_simple__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadb__reg0__simm12_simple__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__reg0__:
    {
SDValue node0x227654e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2275b560 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x227654e0, mpi, MVT::i8, 1);
SDValue node0x22764860 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2275b560, SDValue());
roots.reserve(1);
roots.push_back(node0x22764860);
dag->setRoot(node0x22764860);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__:
    {
SDValue node0x22766800 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227668b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22766950 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22766800, node0x227668b0);
SDValue node0x2275a2f0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x22766950, mpi, MVT::i8, 1);
SDValue node0x22764720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2275a2f0, SDValue());
roots.reserve(1);
roots.push_back(node0x22764720);
dag->setRoot(node0x22764720);
    }
    break;
  case Codasip::i_load__opc_loadbu__reg0__simm12_simple__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadbu__reg0__simm12_simple__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__:
    {
SDValue node0x22777050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2276cd20 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x22777050, mpi, MVT::i8, 1);
SDValue node0x227763d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2276cd20, SDValue());
roots.reserve(1);
roots.push_back(node0x227763d0);
dag->setRoot(node0x227763d0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__:
    {
SDValue node0x22778370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22778420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227784c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22778370, node0x22778420);
SDValue node0x2276bab0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x227784c0, mpi, MVT::i8, 1);
SDValue node0x22776290 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2276bab0, SDValue());
roots.reserve(1);
roots.push_back(node0x22776290);
dag->setRoot(node0x22776290);
    }
    break;
  case Codasip::i_load__opc_loadh__reg0__simm12_simple__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadh__reg0__simm12_simple__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__reg0__:
    {
SDValue node0x22788be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2277e8b0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x22788be0, mpi, MVT::i16, 1);
SDValue node0x22787f60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2277e8b0, SDValue());
roots.reserve(1);
roots.push_back(node0x22787f60);
dag->setRoot(node0x22787f60);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__:
    {
SDValue node0x22789f00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22789fb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2278a050 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22789f00, node0x22789fb0);
SDValue node0x2277d640 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x2278a050, mpi, MVT::i16, 1);
SDValue node0x22787e20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2277d640, SDValue());
roots.reserve(1);
roots.push_back(node0x22787e20);
dag->setRoot(node0x22787e20);
    }
    break;
  case Codasip::i_load__opc_loadhu__reg0__simm12_simple__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadhu__reg0__simm12_simple__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__:
    {
SDValue node0x2279a750 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22790420 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x2279a750, mpi, MVT::i16, 1);
SDValue node0x22799ad0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22790420, SDValue());
roots.reserve(1);
roots.push_back(node0x22799ad0);
dag->setRoot(node0x22799ad0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__:
    {
SDValue node0x2279ba70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2279bb20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2279bbc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2279ba70, node0x2279bb20);
SDValue node0x2278f1b0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x2279bbc0, mpi, MVT::i16, 1);
SDValue node0x22799990 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2278f1b0, SDValue());
roots.reserve(1);
roots.push_back(node0x22799990);
dag->setRoot(node0x22799990);
    }
    break;
  case Codasip::i_load__opc_loadw__reg0__simm12_simple__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadw__reg0__simm12_simple__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__reg0__:
    {
SDValue node0x227b4db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227b4e50 = dag->getLoad(MVT::i32, dl, entry, node0x227b4db0, mpi, 1);
SDValue node0x227b4180 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227b4e50, SDValue());
roots.reserve(1);
roots.push_back(node0x227b4180);
dag->setRoot(node0x227b4180);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__:
    {
SDValue node0x227b6070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227b6120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227b61c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x227b6070, node0x227b6120);
SDValue node0x227b6250 = dag->getLoad(MVT::i32, dl, entry, node0x227b61c0, mpi, 1);
SDValue node0x227b4090 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227b6250, SDValue());
roots.reserve(1);
roots.push_back(node0x227b4090);
dag->setRoot(node0x227b4090);
    }
    break;
  case Codasip::i_lui__opc_lui__regs__imm20_s12__:
    {
SDValue node0x227d1910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227d14e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227d1910, SDValue());
roots.reserve(1);
roots.push_back(node0x227d14e0);
dag->setRoot(node0x227d14e0);
    }
    break;
  case Codasip::i_neg_alias__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_neg_alias__regs__reg0__:
    {
SDValue node0x227dd370 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x227dd320 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227dd370, SDValue());
roots.reserve(1);
roots.push_back(node0x227dd320);
dag->setRoot(node0x227dd320);
    }
    break;
  case Codasip::i_neg_alias__regs__regs__:
    {
SDValue node0x227de200 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x227de400 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227de4b0 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x227de200, node0x227de400);
SDValue node0x227de1b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227de4b0, SDValue());
roots.reserve(1);
roots.push_back(node0x227de1b0);
dag->setRoot(node0x227de1b0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__:
    {
SDValue node0x22809580 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x22809820 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x228098c0 = dag->getStore(entry, dl, node0x22809580, node0x22809820, mpi, 1);
roots.reserve(1);
roots.push_back(node0x228098c0);
dag->setRoot(node0x228098c0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__:
    {
SDValue node0x2280a550 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x2280a890 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2280a940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2280a9e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2280a890, node0x2280a940);
SDValue node0x2280aa70 = dag->getStore(entry, dl, node0x2280a550, node0x2280a9e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2280aa70);
dag->setRoot(node0x2280aa70);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__reg0__:
    {
SDValue node0x22815880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22815930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228a2010 = dag->getTruncStore(entry, dl, node0x22815880, node0x22815930, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x228a2010);
dag->setRoot(node0x228a2010);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__regs__:
    {
SDValue node0x22816c00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22816cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22816d60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22816eb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22816cb0, node0x22816d60);
SDValue node0x22815a80 = dag->getTruncStore(entry, dl, node0x22816c00, node0x22816eb0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x22815a80);
dag->setRoot(node0x22815a80);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__:
    {
SDValue node0x2281c360 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2281c600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2281c6a0 = dag->getStore(entry, dl, node0x2281c360, node0x2281c600, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2281c6a0);
dag->setRoot(node0x2281c6a0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__:
    {
SDValue node0x2281d520 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2281d860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2281d910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2281d9b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2281d860, node0x2281d910);
SDValue node0x2281da40 = dag->getStore(entry, dl, node0x2281d520, node0x2281d9b0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2281da40);
dag->setRoot(node0x2281da40);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__reg0__:
    {
SDValue node0x22828850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22828900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228a2570 = dag->getTruncStore(entry, dl, node0x22828850, node0x22828900, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x228a2570);
dag->setRoot(node0x228a2570);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__regs__:
    {
SDValue node0x22829bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22829c80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22829d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22829e80 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22829c80, node0x22829d30);
SDValue node0x22828a50 = dag->getTruncStore(entry, dl, node0x22829bd0, node0x22829e80, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x22828a50);
dag->setRoot(node0x22828a50);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__reg0__:
    {
SDValue node0x2282f0b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2282f2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2282f350 = dag->getStore(entry, dl, node0x2282f0b0, node0x2282f2b0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2282f350);
dag->setRoot(node0x2282f350);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__regs__:
    {
SDValue node0x228301d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22830470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22830520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228305c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22830470, node0x22830520);
SDValue node0x22830650 = dag->getStore(entry, dl, node0x228301d0, node0x228305c0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22830650);
dag->setRoot(node0x22830650);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__reg0__:
    {
SDValue node0x2283b150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2283b200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2283b2a0 = dag->getStore(entry, dl, node0x2283b150, node0x2283b200, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2283b2a0);
dag->setRoot(node0x2283b2a0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__:
    {
SDValue node0x2283c470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2283c520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2283c5d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2283c670 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2283c520, node0x2283c5d0);
SDValue node0x2283c700 = dag->getStore(entry, dl, node0x2283c470, node0x2283c670, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2283c700);
dag->setRoot(node0x2283c700);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:
    {
SDValue node0x2286c8c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2286c6a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2286c8c0, SDValue());
roots.reserve(1);
roots.push_back(node0x2286c6a0);
dag->setRoot(node0x2286c6a0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:
    {
SDValue node0x2286c420 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x2286bb80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2286c420, SDValue());
roots.reserve(1);
roots.push_back(node0x2286bb80);
dag->setRoot(node0x2286bb80);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:
    {
SDValue node0x2286d7c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2286ce50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2286d7c0, SDValue());
roots.reserve(1);
roots.push_back(node0x2286ce50);
dag->setRoot(node0x2286ce50);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:
    {
SDValue node0x2286d020 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x2286c750 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2286d020, SDValue());
roots.reserve(1);
roots.push_back(node0x2286c750);
dag->setRoot(node0x2286c750);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x2274a900 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x22799780 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22749450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x228289a0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x22749450, node0x2274a900);
SDValue node0x22816e00 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x22799780, node0x228289a0);
SDValue node0x228a0880 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22816e00, SDValue());
roots.reserve(1);
roots.push_back(node0x228a0880);
dag->setRoot(node0x228a0880);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__regs__swappedCmpClone0__:
    {
SDValue node0x2286bbd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2286bd00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2286e060 = dag->getSetCC(dl, MVT::i32, node0x2286bbd0, node0x2286bd00, ISD::SETGT);
SDValue node0x2286dcf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2286e060, SDValue());
roots.reserve(1);
roots.push_back(node0x2286dcf0);
dag->setRoot(node0x2286dcf0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__swappedCmpClone0__:
    {
SDValue node0x2286e8e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2286ea30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2286eae0 = dag->getSetCC(dl, MVT::i32, node0x2286e8e0, node0x2286ea30, ISD::SETUGT);
SDValue node0x2286d5f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2286eae0, SDValue());
roots.reserve(1);
roots.push_back(node0x2286d5f0);
dag->setRoot(node0x2286d5f0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x226999c0 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x2273f740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2273e710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22699d40 = dag->getNode(ISD::AND, dl, MVT::i32, node0x2273e710, node0x226999c0);
SDValue node0x228159d0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x2273f740, node0x22699d40);
SDValue node0x228c92a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228159d0, SDValue());
roots.reserve(1);
roots.push_back(node0x228c92a0);
dag->setRoot(node0x228c92a0);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x228e18c0 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x225fd390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227a1f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x228e1c40 = dag->getNode(ISD::AND, dl, MVT::i32, node0x227a1f90, node0x228e18c0);
SDValue node0x22804490 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x225fd390, node0x228e1c40);
SDValue node0x2240e2b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22804490, SDValue());
roots.reserve(1);
roots.push_back(node0x2240e2b0);
dag->setRoot(node0x2240e2b0);
    }
    break;
  case Codasip::i_load__opc_loadb__reg0__simm12_simple__regs__immspec_1_:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x22750e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22765580 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x22750e00, mpi, MVT::i8, 1);
SDValue node0x22985840 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22765580, SDValue());
roots.reserve(1);
roots.push_back(node0x22985840);
dag->setRoot(node0x22985840);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x227669e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227664c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22766ab0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x227669e0, node0x227664c0);
SDValue node0x226afb30 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x22766ab0, mpi, MVT::i8, 1);
SDValue node0x2296c8b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226afb30, SDValue());
roots.reserve(1);
roots.push_back(node0x2296c8b0);
dag->setRoot(node0x2296c8b0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x2287e060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22876dc0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x2287e060, mpi, MVT::i8, 1);
SDValue node0x22879d60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22876dc0, SDValue());
roots.reserve(1);
roots.push_back(node0x22879d60);
dag->setRoot(node0x22879d60);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x2287e110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22876300 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x2287e110, mpi, MVT::i8, 1);
SDValue node0x2286e690 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22876300, SDValue());
roots.reserve(1);
roots.push_back(node0x2286e690);
dag->setRoot(node0x2286e690);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x2276b810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227770f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x2276b810, mpi, MVT::i8, 1);
SDValue node0x226db070 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227770f0, SDValue());
roots.reserve(1);
roots.push_back(node0x226db070);
dag->setRoot(node0x226db070);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x22778550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22778030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22778620 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22778550, node0x22778030);
SDValue node0x226ad7b0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x22778620, mpi, MVT::i8, 1);
SDValue node0x2289d610 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226ad7b0, SDValue());
roots.reserve(1);
roots.push_back(node0x2289d610);
dag->setRoot(node0x2289d610);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x2287e9d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228757d0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x2287e9d0, mpi, MVT::i8, 1);
SDValue node0x2287a860 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228757d0, SDValue());
roots.reserve(1);
roots.push_back(node0x2287a860);
dag->setRoot(node0x2287a860);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x2287ea80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22874d50 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x2287ea80, mpi, MVT::i8, 1);
SDValue node0x2286f0c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22874d50, SDValue());
roots.reserve(1);
roots.push_back(node0x2286f0c0);
dag->setRoot(node0x2286f0c0);
    }
    break;
  case Codasip::i_load__opc_loadh__reg0__simm12_simple__regs__immspec_1_:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x2277d3a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22788c80 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x2277d3a0, mpi, MVT::i16, 1);
SDValue node0x2289e250 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22788c80, SDValue());
roots.reserve(1);
roots.push_back(node0x2289e250);
dag->setRoot(node0x2289e250);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x2278a0e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22789bc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2278a1b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2278a0e0, node0x22789bc0);
SDValue node0x22887be0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x2278a1b0, mpi, MVT::i16, 1);
SDValue node0x2289ed60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22887be0, SDValue());
roots.reserve(1);
roots.push_back(node0x2289ed60);
dag->setRoot(node0x2289ed60);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x2287fca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2287f430 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x2287fca0, mpi, MVT::i16, 1);
SDValue node0x2287e610 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2287f430, SDValue());
roots.reserve(1);
roots.push_back(node0x2287e610);
dag->setRoot(node0x2287e610);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x2287fd50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22874ca0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x2287fd50, mpi, MVT::i16, 1);
SDValue node0x2240e680 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22874ca0, SDValue());
roots.reserve(1);
roots.push_back(node0x2240e680);
dag->setRoot(node0x2240e680);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x2278ef10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2279a7f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x2278ef10, mpi, MVT::i16, 1);
SDValue node0x2289f970 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2279a7f0, SDValue());
roots.reserve(1);
roots.push_back(node0x2289f970);
dag->setRoot(node0x2289f970);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x2279bc50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2279b730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2279bd20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2279bc50, node0x2279b730);
SDValue node0x228a0480 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x2279bd20, mpi, MVT::i16, 1);
SDValue node0x228a0510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228a0480, SDValue());
roots.reserve(1);
roots.push_back(node0x228a0510);
dag->setRoot(node0x228a0510);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x22880610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228740b0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x22880610, mpi, MVT::i16, 1);
SDValue node0x2287c9c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x228740b0, SDValue());
roots.reserve(1);
roots.push_back(node0x2287c9c0);
dag->setRoot(node0x2287c9c0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x228806c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227a0d20 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x228806c0, mpi, MVT::i16, 1);
SDValue node0x22877d80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227a0d20, SDValue());
roots.reserve(1);
roots.push_back(node0x22877d80);
dag->setRoot(node0x22877d80);
    }
    break;
  case Codasip::i_load__opc_loadw__reg0__simm12_simple__regs__immspec_1_:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x228818e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22881990 = dag->getLoad(MVT::i32, dl, entry, node0x228818e0, mpi, 1);
SDValue node0x22880250 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22881990, SDValue());
roots.reserve(1);
roots.push_back(node0x22880250);
dag->setRoot(node0x22880250);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x22881ff0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x22882210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22881f90 = dag->getStore(entry, dl, node0x22881ff0, node0x22882210, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22881f90);
dag->setRoot(node0x22881f90);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x22882a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22882ab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22877f80 = dag->getTruncStore(entry, dl, node0x22882a00, node0x22882ab0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x22877f80);
dag->setRoot(node0x22877f80);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x22883150 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x22883370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x228830f0 = dag->getStore(entry, dl, node0x22883150, node0x22883370, mpi, 1);
roots.reserve(1);
roots.push_back(node0x228830f0);
dag->setRoot(node0x228830f0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x22883bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22883c80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2287aa20 = dag->getTruncStore(entry, dl, node0x22883bd0, node0x22883c80, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x2287aa20);
dag->setRoot(node0x2287aa20);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x22884320 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x228844a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x228842c0 = dag->getStore(entry, dl, node0x22884320, node0x228844a0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x228842c0);
dag->setRoot(node0x228842c0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x22884d00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22884db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22884b40 = dag->getStore(entry, dl, node0x22884d00, node0x22884db0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22884b40);
dag->setRoot(node0x22884b40);
    }
    break;
  case Codasip::i_jal__opc_jal__reg0__rel_addr20__:
    {
SDValue node0x22737e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x22738010 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x22737e20);
roots.reserve(1);
roots.push_back(node0x22738010);
dag->setRoot(node0x22738010);
    }
    break;
  case Codasip::i_jal__opc_jal__regs__rel_addr20__:
    {
SDValue node0x22738dd0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x22737450 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22738dd0, SDValue());
SDValue node0x227391e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x227393d0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x22737450, node0x227391e0);
roots.reserve(2);
roots.push_back(node0x22737450);
roots.push_back(node0x227393d0);
dag->setRoot(node0x227393d0);
    }
    break;
  case Codasip::i_ebreak__opc_ebreak__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ecall__opc_ecall__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__reg0__reg0__:
    {
SDValue node0x229694b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22969410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229694b0, SDValue());
roots.reserve(1);
roots.push_back(node0x22969410);
dag->setRoot(node0x22969410);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__regs__regs__:
    {
SDValue node0x2296dd40 = dag->getConstant(8LL, dl, MVT::i32);
SDValue node0x2296df60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2296e010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22967250 = dag->getNode(ISD::MUL, dl, MVT::i32, node0x2296df60, node0x2296e010);
SDValue node0x2296e0e0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x22967250, node0x2296dd40);
SDValue node0x2296db80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2296e0e0, SDValue());
roots.reserve(1);
roots.push_back(node0x2296db80);
dag->setRoot(node0x2296db80);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__:
    {
SDValue node0x226ba7c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x226ba720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226ba7c0, SDValue());
roots.reserve(1);
roots.push_back(node0x226ba720);
dag->setRoot(node0x226ba720);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__regs__:
    {
SDValue node0x226bbb90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226bb8f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226bbb90, SDValue());
roots.reserve(1);
roots.push_back(node0x226bb8f0);
dag->setRoot(node0x226bb8f0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__:
    {
SDValue node0x226bde30 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x226be050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226b8560 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x226be050, node0x226bde30);
SDValue node0x226bdd10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226b8560, SDValue());
roots.reserve(1);
roots.push_back(node0x226bdd10);
dag->setRoot(node0x226bdd10);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__:
    {
SDValue node0x226bf3e0 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x226bf600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226bf6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x226bf760 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x226bf6b0, node0x226bf3e0);
SDValue node0x226bf7f0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x226bf600, node0x226bf760);
SDValue node0x226bf220 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226bf7f0, SDValue());
roots.reserve(1);
roots.push_back(node0x226bf220);
dag->setRoot(node0x226bf220);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__reg0__:
    {
SDValue node0x226c8cf0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x226c8c50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226c8cf0, SDValue());
roots.reserve(1);
roots.push_back(node0x226c8c50);
dag->setRoot(node0x226c8c50);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__:
    {
SDValue node0x226c9f40 = dag->getConstant(65535LL, dl, MVT::i32);
SDValue node0x226c9fe0 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x226ca200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226c6a30 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x226ca200, node0x226c9fe0);
SDValue node0x226ca2d0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x226ca200, node0x226c9f40);
SDValue node0x226ca390 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x226ca2d0, node0x226c6a30);
SDValue node0x226c9e20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226ca390, SDValue());
roots.reserve(1);
roots.push_back(node0x226c9e20);
dag->setRoot(node0x226c9e20);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__reg0__:
    {
SDValue node0x226cc670 = dag->getConstant(65535LL, dl, MVT::i32);
SDValue node0x226cc710 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x226cc930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226cc9e0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x226cc930, node0x226cc710);
SDValue node0x226cca70 = dag->getNode(ISD::AND, dl, MVT::i32, node0x226cc930, node0x226cc670);
SDValue node0x226ccb30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x226cca70, node0x226cc9e0);
SDValue node0x226cc550 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226ccb30, SDValue());
roots.reserve(1);
roots.push_back(node0x226cc550);
dag->setRoot(node0x226cc550);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:
    {
SDValue node0x226cde60 = dag->getConstant(65535LL, dl, MVT::i32);
SDValue node0x226cdf00 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x226ce1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226ce270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x226ce320 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x226ce1c0, node0x226cdf00);
SDValue node0x226ce3b0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x226ce1c0, node0x226cde60);
SDValue node0x226ce470 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x226ce270, node0x226cdf00);
SDValue node0x226ce530 = dag->getNode(ISD::AND, dl, MVT::i32, node0x226ce270, node0x226cde60);
SDValue node0x226ce5f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x226ce3b0, node0x226ce320);
SDValue node0x226ce6b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x226ce5f0, node0x226ce530);
SDValue node0x226ce770 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x226ce6b0, node0x226ce470);
SDValue node0x226cd4f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226ce770, SDValue());
roots.reserve(1);
roots.push_back(node0x226cd4f0);
dag->setRoot(node0x226cd4f0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_e__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_hint_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_i_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_io_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ior_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iorw_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iow_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ir_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_irw_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_iw_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_o_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_or_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_orw_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_ow_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_r_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_rw_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_hint_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_i_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_io_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_ior_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_iorw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_iow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_ir_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_irw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_iw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_o_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_or_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_orw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_ow_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_r_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_rw_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fence__opc_fence__opc_w_fence__opc_w_fence__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_fencei__opc_fencei__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_nop_alias__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_simple__:
    {
SDValue node0x227f31e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227f2280 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227f31e0, SDValue());
roots.reserve(1);
roots.push_back(node0x227f2280);
dag->setRoot(node0x227f2280);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_simple__:
    {
SDValue node0x227f57a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227f5850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227f58f0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x227f57a0, node0x227f5850);
SDValue node0x227f4560 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227f58f0, SDValue());
roots.reserve(1);
roots.push_back(node0x227f4560);
dag->setRoot(node0x227f4560);
    }
    break;
  case Codasip::i_xret__opc_mret__:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::e_movi32__:
case Codasip::e_movi32__GA:
case Codasip::e_movi32__ES:
case Codasip::e_movi32__MC:
case Codasip::e_movi32__BA:
case Codasip::e_movi32__JT:
case Codasip::e_movi32__CP:
    {
SDValue node0x2286b190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2286aea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2286b190, SDValue());
roots.reserve(1);
roots.push_back(node0x2286aea0);
dag->setRoot(node0x2286aea0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__regs__regs__:
    {
SDValue node0x226b0e70 = dag->getConstant(8LL, dl, MVT::i32);
SDValue node0x226b1090 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226b1140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x226b11f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x226aa170 = dag->getNode(ISD::MUL, dl, MVT::i32, node0x226b1090, node0x226b1140);
SDValue node0x226b12c0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x226aa170, node0x226b0e70);
SDValue node0x226b1380 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x226b12c0, node0x226b11f0);
SDValue node0x226b0cb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226b1380, SDValue());
roots.reserve(1);
roots.push_back(node0x226b0cb0);
dag->setRoot(node0x226b0cb0);
    }
    break;
  case Codasip::i_jump_reg_alias__regs__TAILCALL_CLONE_:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_:
case Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_ES:
case Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_MC:
case Codasip::i_jmp_rel_alias__rel_addr20__TAILCALL_CLONE_BA:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_:
case Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES:
case Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC:
case Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_:
case Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES:
case Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC:
case Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_:
case Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES:
case Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC:
case Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_:
case Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_ES:
case Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_MC:
case Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__TAILCALL_CLONE_BA:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_:
case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_ES:
case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_MC:
case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__TAILCALL_CLONE_BA:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_:
case Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_ES:
case Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_MC:
case Codasip::i_jal__opc_jal__reg0__rel_addr20__TAILCALL_CLONE_BA:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_:
    {
SDValue node0x22433330 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x224333b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22433e00 = dag->getTruncStore(entry, dl, node0x22433330, node0x224333b0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x22433e00);
dag->setRoot(node0x22433e00);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__i32_TRUNC_CLONE_:
    {
SDValue node0x22433230 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2242f0d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x224332b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2242f320 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2242f0d0, node0x224332b0);
SDValue node0x22434780 = dag->getTruncStore(entry, dl, node0x22433230, node0x2242f320, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x22434780);
dag->setRoot(node0x22434780);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_:
    {
SDValue node0x22433430 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22434da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22435090 = dag->getTruncStore(entry, dl, node0x22433430, node0x22434da0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x22435090);
dag->setRoot(node0x22435090);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__i32_TRUNC_CLONE_:
    {
SDValue node0x224356b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22432fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22435730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2242f160 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22432fc0, node0x22435730);
SDValue node0x22435b10 = dag->getTruncStore(entry, dl, node0x224356b0, node0x2242f160, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x22435b10);
dag->setRoot(node0x22435b10);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_:
    {
SDValue node0x22435ea0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x224330e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22436090 = dag->getTruncStore(entry, dl, node0x22435ea0, node0x224330e0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x22436090);
dag->setRoot(node0x22436090);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_:
    {
SDValue node0x22436480 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x226ac530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22436660 = dag->getTruncStore(entry, dl, node0x22436480, node0x226ac530, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x22436660);
dag->setRoot(node0x22436660);
    }
    break;
  case Codasip::i_jump_reg_alias__regs___RET_EMUL_:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__0_REG_EMUL_:
    {
SDValue node0x224369e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22437ee0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22433050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243cfb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22437ee0, node0x22433050);
SDValue node0x22433170 = dag->getStore(entry, dl, node0x224369e0, node0x2243cfb0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22433170);
dag->setRoot(node0x22433170);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__1_BIGIMM_EMUL_:
    {
SDValue node0x22436fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22437c90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2243a260 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243c4d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22437c90, node0x2243a260);
SDValue node0x22438a30 = dag->getStore(entry, dl, node0x22436fc0, node0x2243c4d0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22438a30);
dag->setRoot(node0x22438a30);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__2_REG_EMUL_:
    {
SDValue node0x2243d550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2243cd30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243d5e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2243d550, node0x2243cd30);
SDValue node0x2243af90 = dag->getLoad(MVT::i32, dl, entry, node0x2243d5e0, mpi, 1);
SDValue node0x2243de20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2243af90, SDValue());
roots.reserve(1);
roots.push_back(node0x2243de20);
dag->setRoot(node0x2243de20);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__3_BIGIMM_EMUL_:
    {
SDValue node0x2243c040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2243f220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243bdd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2243c040, node0x2243f220);
SDValue node0x2243d650 = dag->getLoad(MVT::i32, dl, entry, node0x2243bdd0, mpi, 1);
SDValue node0x22439170 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2243d650, SDValue());
roots.reserve(1);
roots.push_back(node0x22439170);
dag->setRoot(node0x22439170);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__4_BIGIMM_EMUL_:
    {
SDValue node0x2243c720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2243aae0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2243fbb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243c460 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2243aae0, node0x2243fbb0);
SDValue node0x22436b30 = dag->getStore(entry, dl, node0x2243c720, node0x2243c460, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22436b30);
dag->setRoot(node0x22436b30);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__5_BIGIMM_EMUL_:
    {
SDValue node0x2243d1e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22440780 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243d4e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2243d1e0, node0x22440780);
SDValue node0x2243b7b0 = dag->getLoad(MVT::i32, dl, entry, node0x2243d4e0, mpi, 1);
SDValue node0x22440800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2243b7b0, SDValue());
roots.reserve(1);
roots.push_back(node0x22440800);
dag->setRoot(node0x22440800);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__6_BIGIMM_EMUL_:
    {
SDValue node0x2243cdc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x224412a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243c3f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2243cdc0, node0x224412a0);
SDValue node0x22441320 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2243c3f0, SDValue());
roots.reserve(1);
roots.push_back(node0x22441320);
dag->setRoot(node0x22441320);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__7_BIGIMM_EMUL_:
    {
SDValue node0x2243ab70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22441e60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243bc60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2243ab70, node0x22441e60);
SDValue node0x22441ee0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2243bc60, SDValue());
roots.reserve(1);
roots.push_back(node0x22441ee0);
dag->setRoot(node0x22441ee0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__8_BIGIMM_EMUL_:
    {
SDValue node0x22441890 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22442a10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2243acd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22441890, node0x22442a10);
SDValue node0x22442a90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2243acd0, SDValue());
roots.reserve(1);
roots.push_back(node0x22442a90);
dag->setRoot(node0x22442a90);
    }
    break;
  case Codasip::c_addi_lo__opc_addi__regs__regs__:
    {
SDValue node0x2240dce0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229e0a70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2297e990 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2240dce0, node0x229e0a70);
SDValue node0x2297e940 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2297e990, SDValue());
roots.reserve(1);
roots.push_back(node0x2297e940);
dag->setRoot(node0x2297e940);
    }
    break;
  case Codasip::c_lui_hi__opc_lui__regs__:
    {
SDValue node0x227aa9f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2297eaf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227aa9f0, SDValue());
roots.reserve(1);
roots.push_back(node0x2297eaf0);
dag->setRoot(node0x2297eaf0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_lo__:
    {
SDValue node0x22998070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22997d50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22998070, SDValue());
roots.reserve(1);
roots.push_back(node0x22997d50);
dag->setRoot(node0x22997d50);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x22998cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229981a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22998cf0, SDValue());
roots.reserve(1);
roots.push_back(node0x229981a0);
dag->setRoot(node0x229981a0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_lo__:
    {
SDValue node0x202034e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2299be00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2299bea0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x202034e0, node0x2299be00);
SDValue node0x2299ba20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2299bea0, SDValue());
roots.reserve(1);
roots.push_back(node0x2299ba20);
dag->setRoot(node0x2299ba20);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x2261f5e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2261ffd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22620070 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2261f5e0, node0x2261ffd0);
SDValue node0x2299c0b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22620070, SDValue());
roots.reserve(1);
roots.push_back(node0x2299c0b0);
dag->setRoot(node0x2299c0b0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_lo__:
    {
SDValue node0x22990a50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229e4f70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x229e5010 = dag->getNode(ISD::AND, dl, MVT::i32, node0x22990a50, node0x229e4f70);
SDValue node0x229e4b90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229e5010, SDValue());
roots.reserve(1);
roots.push_back(node0x229e4b90);
dag->setRoot(node0x229e4b90);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x229e12d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229e5e90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x229e5f30 = dag->getNode(ISD::AND, dl, MVT::i32, node0x229e12d0, node0x229e5e90);
SDValue node0x229e5220 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229e5f30, SDValue());
roots.reserve(1);
roots.push_back(node0x229e5220);
dag->setRoot(node0x229e5220);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_lo__:
    {
SDValue node0x229f0320 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229f0000 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229f0320, SDValue());
roots.reserve(1);
roots.push_back(node0x229f0000);
dag->setRoot(node0x229f0000);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x229f0fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229f0450 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229f0fa0, SDValue());
roots.reserve(1);
roots.push_back(node0x229f0450);
dag->setRoot(node0x229f0450);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_lo__:
    {
SDValue node0x229f3cd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229f4000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x229f40a0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x229f3cd0, node0x229f4000);
SDValue node0x229f3b90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229f40a0, SDValue());
roots.reserve(1);
roots.push_back(node0x229f3b90);
dag->setRoot(node0x229f3b90);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x229f4c80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229f4fb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x229f5050 = dag->getNode(ISD::OR, dl, MVT::i32, node0x229f4c80, node0x229f4fb0);
SDValue node0x229f42b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229f5050, SDValue());
roots.reserve(1);
roots.push_back(node0x229f42b0);
dag->setRoot(node0x229f42b0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_lo__:
    {
SDValue node0x229ff5e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x229ff6c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x229ff760 = dag->getSetCC(dl, MVT::i32, node0x229ff6c0, node0x229ff5e0, ISD::SETGT);
SDValue node0x229ff3a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x229ff760, SDValue());
roots.reserve(1);
roots.push_back(node0x229ff3a0);
dag->setRoot(node0x229ff3a0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x226267e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x226268c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22626960 = dag->getSetCC(dl, MVT::i32, node0x226268c0, node0x226267e0, ISD::SETGT);
SDValue node0x229ffa30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22626960, SDValue());
roots.reserve(1);
roots.push_back(node0x229ffa30);
dag->setRoot(node0x229ffa30);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_lo__:
    {
SDValue node0x22629940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22629c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22629d10 = dag->getSetCC(dl, MVT::i32, node0x22629940, node0x22629c70, ISD::SETLT);
SDValue node0x22629800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22629d10, SDValue());
roots.reserve(1);
roots.push_back(node0x22629800);
dag->setRoot(node0x22629800);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x2262aa00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2262ad30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2262add0 = dag->getSetCC(dl, MVT::i32, node0x2262aa00, node0x2262ad30, ISD::SETLT);
SDValue node0x2262a030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2262add0, SDValue());
roots.reserve(1);
roots.push_back(node0x2262a030);
dag->setRoot(node0x2262a030);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_lo__:
    {
SDValue node0x22635530 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22635610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226356b0 = dag->getSetCC(dl, MVT::i32, node0x22635610, node0x22635530, ISD::SETNE);
SDValue node0x226352f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226356b0, SDValue());
roots.reserve(1);
roots.push_back(node0x226352f0);
dag->setRoot(node0x226352f0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x22636420 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x22636500 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226365a0 = dag->getSetCC(dl, MVT::i32, node0x22636500, node0x22636420, ISD::SETNE);
SDValue node0x22635980 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x226365a0, SDValue());
roots.reserve(1);
roots.push_back(node0x22635980);
dag->setRoot(node0x22635980);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_lo__:
    {
SDValue node0x22639580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x226398b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22639950 = dag->getSetCC(dl, MVT::i32, node0x22639580, node0x226398b0, ISD::SETULT);
SDValue node0x22639440 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22639950, SDValue());
roots.reserve(1);
roots.push_back(node0x22639440);
dag->setRoot(node0x22639440);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x2263a640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2263a970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2263aa10 = dag->getSetCC(dl, MVT::i32, node0x2263a640, node0x2263a970, ISD::SETULT);
SDValue node0x22639c70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2263aa10, SDValue());
roots.reserve(1);
roots.push_back(node0x22639c70);
dag->setRoot(node0x22639c70);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_lo__:
    {
SDValue node0x22645250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22644f30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22645250, SDValue());
roots.reserve(1);
roots.push_back(node0x22644f30);
dag->setRoot(node0x22644f30);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x22645ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22645380 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22645ed0, SDValue());
roots.reserve(1);
roots.push_back(node0x22645380);
dag->setRoot(node0x22645380);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_lo__:
    {
SDValue node0x22648d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22649070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22649110 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x22648d40, node0x22649070);
SDValue node0x22648c00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22649110, SDValue());
roots.reserve(1);
roots.push_back(node0x22648c00);
dag->setRoot(node0x22648c00);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x22649cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2264a020 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2264a0c0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x22649cf0, node0x2264a020);
SDValue node0x22649320 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2264a0c0, SDValue());
roots.reserve(1);
roots.push_back(node0x22649320);
dag->setRoot(node0x22649320);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_lo__:
    {
SDValue node0x2273b2f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2273aff0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2273b2f0);
roots.reserve(1);
roots.push_back(node0x2273aff0);
dag->setRoot(node0x2273aff0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_pcrel_lo__:
    {
SDValue node0x2273bd70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2273baa0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2273bd70);
roots.reserve(1);
roots.push_back(node0x2273baa0);
dag->setRoot(node0x2273baa0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_lo__:
    {
SDValue node0x22745480 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x22743bd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22745480, SDValue());
SDValue node0x227457f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22745450 = dag->getNode(ISD::BR, dl, MVT::Other, node0x22743bd0, node0x227457f0);
roots.reserve(2);
roots.push_back(node0x22743bd0);
roots.push_back(node0x22745450);
dag->setRoot(node0x22745450);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x22746190 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x227459d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22746190, SDValue());
SDValue node0x22746500 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x22746160 = dag->getNode(ISD::BR, dl, MVT::Other, node0x227459d0, node0x22746500);
roots.reserve(2);
roots.push_back(node0x227459d0);
roots.push_back(node0x22746160);
dag->setRoot(node0x22746160);
    }
    break;
  case Codasip::i_load__opc_loadb__reg0__simm12_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadb__reg0__simm12_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadb__reg0__simm12_pcrel_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadb__reg0__simm12_pcrel_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_lo__reg0__:
    {
SDValue node0x22760620 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2274a710 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x22760620, mpi, MVT::i8, 1);
SDValue node0x2275fa10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2274a710, SDValue());
roots.reserve(1);
roots.push_back(node0x2275fa10);
dag->setRoot(node0x2275fa10);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_lo__regs__:
    {
SDValue node0x22761a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22761d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22761dd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22761a00, node0x22761d30);
SDValue node0x227606c0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x22761dd0, mpi, MVT::i8, 1);
SDValue node0x22760970 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227606c0, SDValue());
roots.reserve(1);
roots.push_back(node0x22760970);
dag->setRoot(node0x22760970);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x22762de0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22761e60 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x22762de0, mpi, MVT::i8, 1);
SDValue node0x22762200 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22761e60, SDValue());
roots.reserve(1);
roots.push_back(node0x22762200);
dag->setRoot(node0x22762200);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x227640b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227643e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22764480 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x227640b0, node0x227643e0);
SDValue node0x22762e80 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x22764480, mpi, MVT::i8, 1);
SDValue node0x22762020 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22762e80, SDValue());
roots.reserve(1);
roots.push_back(node0x22762020);
dag->setRoot(node0x22762020);
    }
    break;
  case Codasip::i_load__opc_loadbu__reg0__simm12_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadbu__reg0__simm12_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadbu__reg0__simm12_pcrel_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadbu__reg0__simm12_pcrel_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_lo__reg0__:
    {
SDValue node0x227720c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22764510 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x227720c0, mpi, MVT::i8, 1);
SDValue node0x22771630 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22764510, SDValue());
roots.reserve(1);
roots.push_back(node0x22771630);
dag->setRoot(node0x22771630);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_lo__regs__:
    {
SDValue node0x22773570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227738a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22773940 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22773570, node0x227738a0);
SDValue node0x22772160 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x22773940, mpi, MVT::i8, 1);
SDValue node0x22772410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22772160, SDValue());
roots.reserve(1);
roots.push_back(node0x22772410);
dag->setRoot(node0x22772410);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x227749a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227739d0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x227749a0, mpi, MVT::i8, 1);
SDValue node0x22773d20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227739d0, SDValue());
roots.reserve(1);
roots.push_back(node0x22773d20);
dag->setRoot(node0x22773d20);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x22775c20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22775f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22775ff0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22775c20, node0x22775f50);
SDValue node0x22774a40 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x22775ff0, mpi, MVT::i8, 1);
SDValue node0x22773be0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22774a40, SDValue());
roots.reserve(1);
roots.push_back(node0x22773be0);
dag->setRoot(node0x22773be0);
    }
    break;
  case Codasip::i_load__opc_loadh__reg0__simm12_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadh__reg0__simm12_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadh__reg0__simm12_pcrel_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadh__reg0__simm12_pcrel_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_lo__reg0__:
    {
SDValue node0x22783c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22776080 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x22783c50, mpi, MVT::i16, 1);
SDValue node0x22783040 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22776080, SDValue());
roots.reserve(1);
roots.push_back(node0x22783040);
dag->setRoot(node0x22783040);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_lo__regs__:
    {
SDValue node0x22785100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22785430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227854d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22785100, node0x22785430);
SDValue node0x22783cf0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x227854d0, mpi, MVT::i16, 1);
SDValue node0x22783fa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22783cf0, SDValue());
roots.reserve(1);
roots.push_back(node0x22783fa0);
dag->setRoot(node0x22783fa0);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x227864e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22785560 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x227864e0, mpi, MVT::i16, 1);
SDValue node0x22785900 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22785560, SDValue());
roots.reserve(1);
roots.push_back(node0x22785900);
dag->setRoot(node0x22785900);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x227877b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22787ae0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22787b80 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x227877b0, node0x22787ae0);
SDValue node0x22786580 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x22787b80, mpi, MVT::i16, 1);
SDValue node0x22785720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22786580, SDValue());
roots.reserve(1);
roots.push_back(node0x22785720);
dag->setRoot(node0x22785720);
    }
    break;
  case Codasip::i_load__opc_loadhu__reg0__simm12_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadhu__reg0__simm12_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadhu__reg0__simm12_pcrel_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadhu__reg0__simm12_pcrel_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_lo__reg0__:
    {
SDValue node0x227957c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22787c10 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x227957c0, mpi, MVT::i16, 1);
SDValue node0x22794d30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22787c10, SDValue());
roots.reserve(1);
roots.push_back(node0x22794d30);
dag->setRoot(node0x22794d30);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_lo__regs__:
    {
SDValue node0x22796c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22796fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22797040 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22796c70, node0x22796fa0);
SDValue node0x22795860 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x22797040, mpi, MVT::i16, 1);
SDValue node0x22795b10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22795860, SDValue());
roots.reserve(1);
roots.push_back(node0x22795b10);
dag->setRoot(node0x22795b10);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x227980a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227970d0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x227980a0, mpi, MVT::i16, 1);
SDValue node0x22797420 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227970d0, SDValue());
roots.reserve(1);
roots.push_back(node0x22797420);
dag->setRoot(node0x22797420);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x22799320 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22799650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227996f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22799320, node0x22799650);
SDValue node0x22798140 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x227996f0, mpi, MVT::i16, 1);
SDValue node0x227972e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x22798140, SDValue());
roots.reserve(1);
roots.push_back(node0x227972e0);
dag->setRoot(node0x227972e0);
    }
    break;
  case Codasip::i_load__opc_loadw__reg0__simm12_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadw__reg0__simm12_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadw__reg0__simm12_pcrel_lo__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadw__reg0__simm12_pcrel_lo__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_lo__reg0__:
    {
SDValue node0x227b0130 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227b01d0 = dag->getLoad(MVT::i32, dl, entry, node0x227b0130, mpi, 1);
SDValue node0x227a6720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227b01d0, SDValue());
roots.reserve(1);
roots.push_back(node0x227a6720);
dag->setRoot(node0x227a6720);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_lo__regs__:
    {
SDValue node0x227b1530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227b1860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227b1900 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x227b1530, node0x227b1860);
SDValue node0x227b1990 = dag->getLoad(MVT::i32, dl, entry, node0x227b1900, mpi, 1);
SDValue node0x227b0380 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227b1990, SDValue());
roots.reserve(1);
roots.push_back(node0x227b0380);
dag->setRoot(node0x227b0380);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x227b2810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227b28b0 = dag->getLoad(MVT::i32, dl, entry, node0x227b2810, mpi, 1);
SDValue node0x227b1c30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227b28b0, SDValue());
roots.reserve(1);
roots.push_back(node0x227b1c30);
dag->setRoot(node0x227b1c30);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x227b3a80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227b3db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227b3e50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x227b3a80, node0x227b3db0);
SDValue node0x227b3ee0 = dag->getLoad(MVT::i32, dl, entry, node0x227b3e50, mpi, 1);
SDValue node0x227b1b40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227b3ee0, SDValue());
roots.reserve(1);
roots.push_back(node0x227b1b40);
dag->setRoot(node0x227b1b40);
    }
    break;
  case Codasip::i_lui_hi__opc_lui__regs__imm20_hi__:
    {
SDValue node0x227d3160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227d31e0 = dag->getConstant(2048LL, dl, MVT::i32);
SDValue node0x227d32a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x227d3160, node0x227d31e0);
SDValue node0x227d3310 = dag->getConstant(-4096LL, dl, MVT::i32);
SDValue node0x227d33d0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x227d32a0, node0x227d3310);
SDValue node0x227d2e70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227d33d0, SDValue());
roots.reserve(1);
roots.push_back(node0x227d2e70);
dag->setRoot(node0x227d2e70);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_lo__:
    {
SDValue node0x227f1b40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227eec80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227f1b40, SDValue());
roots.reserve(1);
roots.push_back(node0x227eec80);
dag->setRoot(node0x227eec80);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x227f26e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227f1c70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227f26e0, SDValue());
roots.reserve(1);
roots.push_back(node0x227f1c70);
dag->setRoot(node0x227f1c70);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_lo__:
    {
SDValue node0x227f3a10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227f3d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227f3de0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x227f3a10, node0x227f3d40);
SDValue node0x227f2d80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227f3de0, SDValue());
roots.reserve(1);
roots.push_back(node0x227f2d80);
dag->setRoot(node0x227f2d80);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x227f4810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x227f4b40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x227f4be0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x227f4810, node0x227f4b40);
SDValue node0x227f3f50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x227f4be0, SDValue());
roots.reserve(1);
roots.push_back(node0x227f3f50);
dag->setRoot(node0x227f3f50);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x22804e50 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x228050f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x226d5c70 = dag->getStore(entry, dl, node0x22804e50, node0x228050f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x226d5c70);
dag->setRoot(node0x226d5c70);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_lo__regs__:
    {
SDValue node0x22805f70 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x228060d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22806360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22806400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x228060d0, node0x22806360);
SDValue node0x22806490 = dag->getStore(entry, dl, node0x22805f70, node0x22806400, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22806490);
dag->setRoot(node0x22806490);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x22807010 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x228072b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22807350 = dag->getStore(entry, dl, node0x22807010, node0x228072b0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22807350);
dag->setRoot(node0x22807350);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x22808500 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x22808660 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x228088f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22808990 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22808660, node0x228088f0);
SDValue node0x22808a20 = dag->getStore(entry, dl, node0x22808500, node0x22808990, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22808a20);
dag->setRoot(node0x22808a20);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_lo__reg0__:
    {
SDValue node0x22810520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22810860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228c2c70 = dag->getTruncStore(entry, dl, node0x22810520, node0x22810860, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x228c2c70);
dag->setRoot(node0x228c2c70);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_lo__regs__:
    {
SDValue node0x22811bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22811db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22812040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x228120e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22811db0, node0x22812040);
SDValue node0x228c2e50 = dag->getTruncStore(entry, dl, node0x22811bb0, node0x228120e0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x228c2e50);
dag->setRoot(node0x228c2e50);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x22812e30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22813170 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228c3050 = dag->getTruncStore(entry, dl, node0x22812e30, node0x22813170, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x228c3050);
dag->setRoot(node0x228c3050);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x22814440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22814640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228148d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22814970 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22814640, node0x228148d0);
SDValue node0x228c3230 = dag->getTruncStore(entry, dl, node0x22814440, node0x22814970, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x228c3230);
dag->setRoot(node0x228c3230);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x22817a50 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x22817cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22817d90 = dag->getStore(entry, dl, node0x22817a50, node0x22817cf0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22817d90);
dag->setRoot(node0x22817d90);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_lo__regs__:
    {
SDValue node0x22818d50 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x22818eb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22819140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228191e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22818eb0, node0x22819140);
SDValue node0x22819270 = dag->getStore(entry, dl, node0x22818d50, node0x228191e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22819270);
dag->setRoot(node0x22819270);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x22819df0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2281a090 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2281a130 = dag->getStore(entry, dl, node0x22819df0, node0x2281a090, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2281a130);
dag->setRoot(node0x2281a130);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x2281b2e0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2281b440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2281b6d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2281b770 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2281b440, node0x2281b6d0);
SDValue node0x2281b800 = dag->getStore(entry, dl, node0x2281b2e0, node0x2281b770, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2281b800);
dag->setRoot(node0x2281b800);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_lo__reg0__:
    {
SDValue node0x228234f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22823830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228c3f10 = dag->getTruncStore(entry, dl, node0x228234f0, node0x22823830, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x228c3f10);
dag->setRoot(node0x228c3f10);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_lo__regs__:
    {
SDValue node0x22824b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22824d80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22825010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x228250b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22824d80, node0x22825010);
SDValue node0x228c40f0 = dag->getTruncStore(entry, dl, node0x22824b80, node0x228250b0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x228c40f0);
dag->setRoot(node0x228c40f0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x22825e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22826140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228c42f0 = dag->getTruncStore(entry, dl, node0x22825e00, node0x22826140, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x228c42f0);
dag->setRoot(node0x228c42f0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x22827410 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22827610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x228278a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22827940 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22827610, node0x228278a0);
SDValue node0x228c44d0 = dag->getTruncStore(entry, dl, node0x22827410, node0x22827940, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x228c44d0);
dag->setRoot(node0x228c44d0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x2282aa20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2282ac20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2282acc0 = dag->getStore(entry, dl, node0x2282aa20, node0x2282ac20, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2282acc0);
dag->setRoot(node0x2282acc0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_lo__regs__:
    {
SDValue node0x2282bc80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2282bde0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2282bfd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2282c070 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2282bde0, node0x2282bfd0);
SDValue node0x2282c100 = dag->getStore(entry, dl, node0x2282bc80, node0x2282c070, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2282c100);
dag->setRoot(node0x2282c100);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x2282cc80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2282ce80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2282cf20 = dag->getStore(entry, dl, node0x2282cc80, node0x2282ce80, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2282cf20);
dag->setRoot(node0x2282cf20);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x2282e0d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2282e230 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2282e420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2282e4c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2282e230, node0x2282e420);
SDValue node0x2282e550 = dag->getStore(entry, dl, node0x2282e0d0, node0x2282e4c0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2282e550);
dag->setRoot(node0x2282e550);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_lo__reg0__:
    {
SDValue node0x22836100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22836390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22833bc0 = dag->getStore(entry, dl, node0x22836100, node0x22836390, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22833bc0);
dag->setRoot(node0x22833bc0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_lo__regs__:
    {
SDValue node0x228376e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22837830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22837ac0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x22837b60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22837830, node0x22837ac0);
SDValue node0x22837bf0 = dag->getStore(entry, dl, node0x228376e0, node0x22837b60, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22837bf0);
dag->setRoot(node0x22837bf0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x22838860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22838af0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x22838b90 = dag->getStore(entry, dl, node0x22838860, node0x22838af0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x22838b90);
dag->setRoot(node0x22838b90);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x22839e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22839f60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2283a1f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2283a290 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x22839f60, node0x2283a1f0);
SDValue node0x2283a320 = dag->getStore(entry, dl, node0x22839e10, node0x2283a290, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2283a320);
dag->setRoot(node0x2283a320);
    }
    break;
  case Codasip::i_unimp__opc_unimp__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_wfi__opc_wfi__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::load_imm32__regs__regs__regs__:
    {
SDValue node0x2286acd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2286aa00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2286acd0, SDValue());
roots.reserve(1);
roots.push_back(node0x2286aa00);
dag->setRoot(node0x2286aa00);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__regs__simm12_simple__:
    {
SDValue node0x22740860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x22740b00 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x22740860);
roots.reserve(1);
roots.push_back(node0x22740b00);
dag->setRoot(node0x22740b00);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__regs__simm12_simple__:
    {
SDValue node0x2274b520 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x22749b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2274b520, SDValue());
SDValue node0x2274b9d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2274bc70 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x22749b30, node0x2274b9d0);
roots.reserve(2);
roots.push_back(node0x22749b30);
roots.push_back(node0x2274bc70);
dag->setRoot(node0x2274bc70);
    }
    break;
  
  default:
    roots.reserve(1);
    roots.push_back(entry);
    dag->setRoot(entry);
  }
  dag->RemoveDeadNodes();
  return dag;
}

// turn optimizations back on
#ifdef _WIN32
#pragma optimize("", on)
#endif
