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
 * \date    2025-04-12
 * \author  Codasip (c) C compiler backend generator
 * \version 9.4.2
 * \brief   Source for compiler backend
 * \project codasip_urisc_v.ia
 * \note          Codasip Studio version: 9.4.2
 *                Project: codasip_urisc_v.ia
 *                Date: 2025-04-12 20:11:59
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
SDValue node0x7c5c850 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x7c7fc20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7c5c660 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x7c7fc20);
SDValue node0x7c5bc00 = dag->getCopyToReg(node0x7c5c660, dl, dag->getRegister(Codasip::rf_gpr_1, MVT::i32), node0x7c5c850, SDValue());
roots.reserve(2);
roots.push_back(node0x7c5bc00);
roots.push_back(node0x7c5c660);
dag->setRoot(node0x7c5bc00);
    } else     {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jump_reg_alias__regs__:
    {
SDValue node0x79c9ac0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x79c9890 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x79c9ac0);
roots.reserve(1);
roots.push_back(node0x79c9890);
dag->setRoot(node0x79c9890);
    }
    break;
  case Codasip::i_jmp_rel_alias__rel_addr20__:
    {
SDValue node0x79c8260 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x79c84e0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x79c8260);
roots.reserve(1);
roots.push_back(node0x79c84e0);
dag->setRoot(node0x79c84e0);
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
SDValue node0x7bdee70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x79ae150 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x79ae370 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7bdee70, node0x79ae150);
SDValue node0x79ae100 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79ae370, SDValue());
roots.reserve(1);
roots.push_back(node0x79ae100);
dag->setRoot(node0x79ae100);
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
SDValue node0x7a52040 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7a51ff0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a52040, SDValue());
roots.reserve(1);
roots.push_back(node0x7a51ff0);
dag->setRoot(node0x7a51ff0);
    }
    break;
  case Codasip::i_mv_alias__regs__regs__:
    {
SDValue node0x7a530d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a52e80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a530d0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a52e80);
dag->setRoot(node0x7a52e80);
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
SDValue node0x7a70fa0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x7a70f50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a70fa0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a70f50);
dag->setRoot(node0x7a70f50);
    }
    break;
  case Codasip::i_seqz_alias__regs__regs__:
    {
SDValue node0x7a71f50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7a720d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a72180 = dag->getSetCC(dl, MVT::i32, node0x7a720d0, node0x7a71f50, ISD::SETEQ);
SDValue node0x7a71e80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a72180, SDValue());
roots.reserve(1);
roots.push_back(node0x7a71e80);
dag->setRoot(node0x7a71e80);
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
SDValue node0x7a7bb50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7a7bb00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a7bb50, SDValue());
roots.reserve(1);
roots.push_back(node0x7a7bb00);
dag->setRoot(node0x7a7bb00);
    }
    break;
  case Codasip::i_snez_alias__regs__regs__:
    {
SDValue node0x7a7ca60 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7a7cbe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a7cc90 = dag->getSetCC(dl, MVT::i32, node0x7a7cbe0, node0x7a7ca60, ISD::SETNE);
SDValue node0x7a7c990 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a7cc90, SDValue());
roots.reserve(1);
roots.push_back(node0x7a7c990);
dag->setRoot(node0x7a7c990);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__regs__simm12_simple__immspec_1_:
    {
SDValue node0x7af5360 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x7af3aa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7af5360, SDValue());
SDValue node0x7af56d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7af5810 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x7af3aa0, node0x7af56d0);
roots.reserve(2);
roots.push_back(node0x7af3aa0);
roots.push_back(node0x7af5810);
dag->setRoot(node0x7af5810);
    }
    break;
  case Codasip::i_call_rel_alias__rel_addr20__:
case Codasip::i_call_rel_alias__rel_addr20__ES:
case Codasip::i_call_rel_alias__rel_addr20__MC:
case Codasip::i_call_rel_alias__rel_addr20__BA:
    if (lowlevel) {
SDValue node0x7c5d590 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x7c5d7a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x7c5da20 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x7c5d7a0);
SDValue node0x7c5cce0 = dag->getCopyToReg(node0x7c5da20, dl, dag->getRegister(Codasip::rf_gpr_1, MVT::i32), node0x7c5d590, SDValue());
roots.reserve(2);
roots.push_back(node0x7c5cce0);
roots.push_back(node0x7c5da20);
dag->setRoot(node0x7c5cce0);
    } else     {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__:
    {
SDValue node0x79b1070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x79b0d70 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x79b1070);
roots.reserve(1);
roots.push_back(node0x79b0d70);
dag->setRoot(node0x79b0d70);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__regs__rel_addr20__:
    {
SDValue node0x79b1650 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x79b0620 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79b1650, SDValue());
SDValue node0x79b19c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x79b15f0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x79b0620, node0x79b19c0);
roots.reserve(2);
roots.push_back(node0x79b0620);
roots.push_back(node0x79b15f0);
dag->setRoot(node0x79b15f0);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__:
    {
SDValue node0x7b80520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x7b807d0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x7b80520);
roots.reserve(1);
roots.push_back(node0x7b807d0);
dag->setRoot(node0x7b807d0);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b81aa0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b81c20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b81cd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b81d70 = dag->getSetCC(dl, MVT::iAny, node0x7b81c20, node0x7b81aa0, ISD::SETEQ);
SDValue node0x7b81f90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b81d70, node0x7b81cd0);
roots.reserve(1);
roots.push_back(node0x7b81f90);
dag->setRoot(node0x7b81f90);
    } else     {
SDValue node0x7b81aa0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b81c20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b81cd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b81d70 = dag->getSetCC(dl, MVT::i32, node0x7b81c20, node0x7b81aa0, ISD::SETEQ);
SDValue node0x7b81f90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b81d70, node0x7b81cd0);
roots.reserve(1);
roots.push_back(node0x7b81f90);
dag->setRoot(node0x7b81f90);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b84440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b845c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b84670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b84710 = dag->getSetCC(dl, MVT::iAny, node0x7b845c0, node0x7b84440, ISD::SETEQ);
SDValue node0x7b84930 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b84710, node0x7b84670);
roots.reserve(1);
roots.push_back(node0x7b84930);
dag->setRoot(node0x7b84930);
    } else     {
SDValue node0x7b84440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b845c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b84670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b84710 = dag->getSetCC(dl, MVT::i32, node0x7b845c0, node0x7b84440, ISD::SETEQ);
SDValue node0x7b84930 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b84710, node0x7b84670);
roots.reserve(1);
roots.push_back(node0x7b84930);
dag->setRoot(node0x7b84930);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b860b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b86160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b86210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7b862b0 = dag->getSetCC(dl, MVT::iAny, node0x7b86160, node0x7b860b0, ISD::SETEQ);
SDValue node0x7b864d0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b862b0, node0x7b86210);
roots.reserve(1);
roots.push_back(node0x7b864d0);
dag->setRoot(node0x7b864d0);
    } else     {
SDValue node0x7b860b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b86160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b86210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7b862b0 = dag->getSetCC(dl, MVT::i32, node0x7b86160, node0x7b860b0, ISD::SETEQ);
SDValue node0x7b864d0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b862b0, node0x7b86210);
roots.reserve(1);
roots.push_back(node0x7b864d0);
dag->setRoot(node0x7b864d0);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__:
    {
SDValue node0x7b87430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x7b876e0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x7b87430);
roots.reserve(1);
roots.push_back(node0x7b876e0);
dag->setRoot(node0x7b876e0);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b88640 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x7b889a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b88a50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b88af0 = dag->getSetCC(dl, MVT::iAny, node0x7b889a0, node0x7b88640, ISD::SETLT);
SDValue node0x7b88d10 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b88af0, node0x7b88a50);
roots.reserve(1);
roots.push_back(node0x7b88d10);
dag->setRoot(node0x7b88d10);
    } else     {
SDValue node0x7b88640 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x7b889a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b88a50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b88af0 = dag->getSetCC(dl, MVT::i32, node0x7b889a0, node0x7b88640, ISD::SETLT);
SDValue node0x7b88d10 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b88af0, node0x7b88a50);
roots.reserve(1);
roots.push_back(node0x7b88d10);
dag->setRoot(node0x7b88d10);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b8b300 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x7b8b3e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b8b490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b8b530 = dag->getSetCC(dl, MVT::iAny, node0x7b8b3e0, node0x7b8b300, ISD::SETGT);
SDValue node0x7b8b750 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b8b530, node0x7b8b490);
roots.reserve(1);
roots.push_back(node0x7b8b750);
dag->setRoot(node0x7b8b750);
    } else     {
SDValue node0x7b8b300 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x7b8b3e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b8b490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b8b530 = dag->getSetCC(dl, MVT::i32, node0x7b8b3e0, node0x7b8b300, ISD::SETGT);
SDValue node0x7b8b750 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b8b530, node0x7b8b490);
roots.reserve(1);
roots.push_back(node0x7b8b750);
dag->setRoot(node0x7b8b750);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b8ced0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b8cf80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b8d030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7b8d0d0 = dag->getSetCC(dl, MVT::iAny, node0x7b8cf80, node0x7b8ced0, ISD::SETGE);
SDValue node0x7b8d2f0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b8d0d0, node0x7b8d030);
roots.reserve(1);
roots.push_back(node0x7b8d2f0);
dag->setRoot(node0x7b8d2f0);
    } else     {
SDValue node0x7b8ced0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b8cf80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b8d030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7b8d0d0 = dag->getSetCC(dl, MVT::i32, node0x7b8cf80, node0x7b8ced0, ISD::SETGE);
SDValue node0x7b8d2f0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b8d0d0, node0x7b8d030);
roots.reserve(1);
roots.push_back(node0x7b8d2f0);
dag->setRoot(node0x7b8d2f0);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__:
    {
SDValue node0x7b8e250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x7b8e500 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x7b8e250);
roots.reserve(1);
roots.push_back(node0x7b8e500);
dag->setRoot(node0x7b8e500);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b8f640 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b8f7c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b8f870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b8f910 = dag->getSetCC(dl, MVT::iAny, node0x7b8f7c0, node0x7b8f640, ISD::SETEQ);
SDValue node0x7b8fb30 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b8f910, node0x7b8f870);
roots.reserve(1);
roots.push_back(node0x7b8fb30);
dag->setRoot(node0x7b8fb30);
    } else     {
SDValue node0x7b8f640 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b8f7c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b8f870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b8f910 = dag->getSetCC(dl, MVT::i32, node0x7b8f7c0, node0x7b8f640, ISD::SETEQ);
SDValue node0x7b8fb30 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b8f910, node0x7b8f870);
roots.reserve(1);
roots.push_back(node0x7b8fb30);
dag->setRoot(node0x7b8fb30);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b93be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b93c90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b93d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7b93de0 = dag->getSetCC(dl, MVT::iAny, node0x7b93c90, node0x7b93be0, ISD::SETUGE);
SDValue node0x7b94000 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b93de0, node0x7b93d40);
roots.reserve(1);
roots.push_back(node0x7b94000);
dag->setRoot(node0x7b94000);
    } else     {
SDValue node0x7b93be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b93c90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b93d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7b93de0 = dag->getSetCC(dl, MVT::i32, node0x7b93c90, node0x7b93be0, ISD::SETUGE);
SDValue node0x7b94000 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b93de0, node0x7b93d40);
roots.reserve(1);
roots.push_back(node0x7b94000);
dag->setRoot(node0x7b94000);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b95c40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b95dc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b95e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b95f10 = dag->getSetCC(dl, MVT::iAny, node0x7b95dc0, node0x7b95c40, ISD::SETGT);
SDValue node0x7b96130 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b95f10, node0x7b95e70);
roots.reserve(1);
roots.push_back(node0x7b96130);
dag->setRoot(node0x7b96130);
    } else     {
SDValue node0x7b95c40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b95dc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b95e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b95f10 = dag->getSetCC(dl, MVT::i32, node0x7b95dc0, node0x7b95c40, ISD::SETGT);
SDValue node0x7b96130 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b95f10, node0x7b95e70);
roots.reserve(1);
roots.push_back(node0x7b96130);
dag->setRoot(node0x7b96130);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b98630 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b987b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b98860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b98900 = dag->getSetCC(dl, MVT::iAny, node0x7b987b0, node0x7b98630, ISD::SETLT);
SDValue node0x7b98b20 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b98900, node0x7b98860);
roots.reserve(1);
roots.push_back(node0x7b98b20);
dag->setRoot(node0x7b98b20);
    } else     {
SDValue node0x7b98630 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b987b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b98860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b98900 = dag->getSetCC(dl, MVT::i32, node0x7b987b0, node0x7b98630, ISD::SETLT);
SDValue node0x7b98b20 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b98900, node0x7b98860);
roots.reserve(1);
roots.push_back(node0x7b98b20);
dag->setRoot(node0x7b98b20);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b9a2a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b9a350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b9a400 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7b9a4a0 = dag->getSetCC(dl, MVT::iAny, node0x7b9a350, node0x7b9a2a0, ISD::SETLT);
SDValue node0x7b9a6c0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b9a4a0, node0x7b9a400);
roots.reserve(1);
roots.push_back(node0x7b9a6c0);
dag->setRoot(node0x7b9a6c0);
    } else     {
SDValue node0x7b9a2a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b9a350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b9a400 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7b9a4a0 = dag->getSetCC(dl, MVT::i32, node0x7b9a350, node0x7b9a2a0, ISD::SETLT);
SDValue node0x7b9a6c0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b9a4a0, node0x7b9a400);
roots.reserve(1);
roots.push_back(node0x7b9a6c0);
dag->setRoot(node0x7b9a6c0);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7b9c2b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b9c430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b9c4e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b9c580 = dag->getSetCC(dl, MVT::iAny, node0x7b9c430, node0x7b9c2b0, ISD::SETNE);
SDValue node0x7b9c7a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b9c580, node0x7b9c4e0);
roots.reserve(1);
roots.push_back(node0x7b9c7a0);
dag->setRoot(node0x7b9c7a0);
    } else     {
SDValue node0x7b9c2b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b9c430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7b9c4e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7b9c580 = dag->getSetCC(dl, MVT::i32, node0x7b9c430, node0x7b9c2b0, ISD::SETNE);
SDValue node0x7b9c7a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7b9c580, node0x7b9c4e0);
roots.reserve(1);
roots.push_back(node0x7b9c7a0);
dag->setRoot(node0x7b9c7a0);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7ba00a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ba0150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ba0200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ba02a0 = dag->getSetCC(dl, MVT::iAny, node0x7ba0150, node0x7ba00a0, ISD::SETULT);
SDValue node0x7ba04c0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ba02a0, node0x7ba0200);
roots.reserve(1);
roots.push_back(node0x7ba04c0);
dag->setRoot(node0x7ba04c0);
    } else     {
SDValue node0x7ba00a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ba0150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ba0200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ba02a0 = dag->getSetCC(dl, MVT::i32, node0x7ba0150, node0x7ba00a0, ISD::SETULT);
SDValue node0x7ba04c0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ba02a0, node0x7ba0200);
roots.reserve(1);
roots.push_back(node0x7ba04c0);
dag->setRoot(node0x7ba04c0);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7ba2150 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7ba22d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ba2380 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7ba2420 = dag->getSetCC(dl, MVT::iAny, node0x7ba22d0, node0x7ba2150, ISD::SETNE);
SDValue node0x7ba2640 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ba2420, node0x7ba2380);
roots.reserve(1);
roots.push_back(node0x7ba2640);
dag->setRoot(node0x7ba2640);
    } else     {
SDValue node0x7ba2150 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7ba22d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ba2380 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7ba2420 = dag->getSetCC(dl, MVT::i32, node0x7ba22d0, node0x7ba2150, ISD::SETNE);
SDValue node0x7ba2640 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ba2420, node0x7ba2380);
roots.reserve(1);
roots.push_back(node0x7ba2640);
dag->setRoot(node0x7ba2640);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x7ba4b40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7ba4cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ba4d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7ba4e10 = dag->getSetCC(dl, MVT::iAny, node0x7ba4cc0, node0x7ba4b40, ISD::SETNE);
SDValue node0x7ba5030 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ba4e10, node0x7ba4d70);
roots.reserve(1);
roots.push_back(node0x7ba5030);
dag->setRoot(node0x7ba5030);
    } else     {
SDValue node0x7ba4b40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7ba4cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ba4d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x7ba4e10 = dag->getSetCC(dl, MVT::i32, node0x7ba4cc0, node0x7ba4b40, ISD::SETNE);
SDValue node0x7ba5030 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ba4e10, node0x7ba4d70);
roots.reserve(1);
roots.push_back(node0x7ba5030);
dag->setRoot(node0x7ba5030);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x7ba67b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ba6860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ba6910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ba69b0 = dag->getSetCC(dl, MVT::iAny, node0x7ba6860, node0x7ba67b0, ISD::SETNE);
SDValue node0x7ba6bd0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ba69b0, node0x7ba6910);
roots.reserve(1);
roots.push_back(node0x7ba6bd0);
dag->setRoot(node0x7ba6bd0);
    } else     {
SDValue node0x7ba67b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ba6860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ba6910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ba69b0 = dag->getSetCC(dl, MVT::i32, node0x7ba6860, node0x7ba67b0, ISD::SETNE);
SDValue node0x7ba6bd0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ba69b0, node0x7ba6910);
roots.reserve(1);
roots.push_back(node0x7ba6bd0);
dag->setRoot(node0x7ba6bd0);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x7ae7e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ae8060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ae8110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae81c0 = dag->getSetCC(dl, MVT::iAny, node0x7ae8060, node0x7ae8110, ISD::SETLE);
SDValue node0x7ae8260 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ae81c0, node0x7ae7e00);
roots.reserve(1);
roots.push_back(node0x7ae8260);
dag->setRoot(node0x7ae8260);
    } else     {
SDValue node0x7ae7e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ae8060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ae8110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae81c0 = dag->getSetCC(dl, MVT::i32, node0x7ae8060, node0x7ae8110, ISD::SETLE);
SDValue node0x7ae8260 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ae81c0, node0x7ae7e00);
roots.reserve(1);
roots.push_back(node0x7ae8260);
dag->setRoot(node0x7ae8260);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x7ae8d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ae8fb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ae9060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae9110 = dag->getSetCC(dl, MVT::iAny, node0x7ae8fb0, node0x7ae9060, ISD::SETULE);
SDValue node0x7ae91e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ae9110, node0x7ae8d20);
roots.reserve(1);
roots.push_back(node0x7ae91e0);
dag->setRoot(node0x7ae91e0);
    } else     {
SDValue node0x7ae8d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ae8fb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ae9060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae9110 = dag->getSetCC(dl, MVT::i32, node0x7ae8fb0, node0x7ae9060, ISD::SETULE);
SDValue node0x7ae91e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ae9110, node0x7ae8d20);
roots.reserve(1);
roots.push_back(node0x7ae91e0);
dag->setRoot(node0x7ae91e0);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x7ae9bf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ae9e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ae9f30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae9fe0 = dag->getSetCC(dl, MVT::iAny, node0x7ae9e80, node0x7ae9f30, ISD::SETGT);
SDValue node0x7aea0b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ae9fe0, node0x7ae9bf0);
roots.reserve(1);
roots.push_back(node0x7aea0b0);
dag->setRoot(node0x7aea0b0);
    } else     {
SDValue node0x7ae9bf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7ae9e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ae9f30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae9fe0 = dag->getSetCC(dl, MVT::i32, node0x7ae9e80, node0x7ae9f30, ISD::SETGT);
SDValue node0x7aea0b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7ae9fe0, node0x7ae9bf0);
roots.reserve(1);
roots.push_back(node0x7aea0b0);
dag->setRoot(node0x7aea0b0);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x7aeaac0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7aead50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aeae00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aeaeb0 = dag->getSetCC(dl, MVT::iAny, node0x7aead50, node0x7aeae00, ISD::SETUGT);
SDValue node0x7aeaf80 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7aeaeb0, node0x7aeaac0);
roots.reserve(1);
roots.push_back(node0x7aeaf80);
dag->setRoot(node0x7aeaf80);
    } else     {
SDValue node0x7aeaac0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x7aead50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aeae00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aeaeb0 = dag->getSetCC(dl, MVT::i32, node0x7aead50, node0x7aeae00, ISD::SETUGT);
SDValue node0x7aeaf80 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x7aeaeb0, node0x7aeaac0);
roots.reserve(1);
roots.push_back(node0x7aeaf80);
dag->setRoot(node0x7aeaf80);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__:
    {
SDValue node0x79b39a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x79b36d0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x79b39a0);
roots.reserve(1);
roots.push_back(node0x79b36d0);
dag->setRoot(node0x79b36d0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_simple__:
    {
SDValue node0x79bdf60 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x79bd680 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79bdf60, SDValue());
SDValue node0x79be2d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x79bdf30 = dag->getNode(ISD::BR, dl, MVT::Other, node0x79bd680, node0x79be2d0);
roots.reserve(2);
roots.push_back(node0x79bd680);
roots.push_back(node0x79bdf30);
dag->setRoot(node0x79bdf30);
    }
    break;
  case Codasip::i_auipc__opc_auipc__regs__imm20_s12__:
    {
SDValue node0x7c3fe80 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x7679090 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x7c3f480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c3f520 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7c3fe80, node0x7c3f480);
SDValue node0x7685f70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7c3f520, node0x7679090);
SDValue node0x7c3fe30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7685f70, SDValue());
roots.reserve(1);
roots.push_back(node0x7c3fe30);
dag->setRoot(node0x7c3fe30);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_simple__:
    {
SDValue node0x7665190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7663f80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7665190, SDValue());
roots.reserve(1);
roots.push_back(node0x7663f80);
dag->setRoot(node0x7663f80);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__:
    {
SDValue node0x78a3450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78a02c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78a0360 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x78a3450, node0x78a02c0);
SDValue node0x789ede0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78a0360, SDValue());
roots.reserve(1);
roots.push_back(node0x789ede0);
dag->setRoot(node0x789ede0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_simple__:
    {
SDValue node0x7c5f190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c5f240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7c5f2e0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x7c5f190, node0x7c5f240);
SDValue node0x7bfdde0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c5f2e0, SDValue());
roots.reserve(1);
roots.push_back(node0x7bfdde0);
dag->setRoot(node0x7bfdde0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_simple__:
    {
SDValue node0x7c6a070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c68f00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c6a070, SDValue());
roots.reserve(1);
roots.push_back(node0x7c68f00);
dag->setRoot(node0x7c68f00);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_simple__:
    {
SDValue node0x7c6e210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c6e2c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7c6e360 = dag->getNode(ISD::OR, dl, MVT::i32, node0x7c6e210, node0x7c6e2c0);
SDValue node0x7c6cd60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c6e360, SDValue());
roots.reserve(1);
roots.push_back(node0x7c6cd60);
dag->setRoot(node0x7c6cd60);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__:
    {
SDValue node0x7c797c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7c798a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c79940 = dag->getSetCC(dl, MVT::i32, node0x7c798a0, node0x7c797c0, ISD::SETGT);
SDValue node0x7c784e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c79940, SDValue());
roots.reserve(1);
roots.push_back(node0x7c784e0);
dag->setRoot(node0x7c784e0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:
    {
SDValue node0x7c7dde0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c7de90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7c7df30 = dag->getSetCC(dl, MVT::i32, node0x7c7dde0, node0x7c7de90, ISD::SETLT);
SDValue node0x7c7c7d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c7df30, SDValue());
roots.reserve(1);
roots.push_back(node0x7c7c7d0);
dag->setRoot(node0x7c7c7d0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__:
    {
SDValue node0x78af030 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x78af110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78af1b0 = dag->getSetCC(dl, MVT::i32, node0x78af110, node0x78af030, ISD::SETNE);
SDValue node0x78add50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78af1b0, SDValue());
roots.reserve(1);
roots.push_back(node0x78add50);
dag->setRoot(node0x78add50);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:
    {
SDValue node0x78b3650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78b3700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78b37a0 = dag->getSetCC(dl, MVT::i32, node0x78b3650, node0x78b3700, ISD::SETULT);
SDValue node0x78b2040 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78b37a0, SDValue());
roots.reserve(1);
roots.push_back(node0x78b2040);
dag->setRoot(node0x78b2040);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_simple__:
    {
SDValue node0x78be960 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78bd750 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78be960, SDValue());
roots.reserve(1);
roots.push_back(node0x78bd750);
dag->setRoot(node0x78bd750);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:
    {
SDValue node0x78c2c40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78c2cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78c2d90 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x78c2c40, node0x78c2cf0);
SDValue node0x78c16f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78c2d90, SDValue());
roots.reserve(1);
roots.push_back(node0x78c16f0);
dag->setRoot(node0x78c16f0);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_slli__regs__regs__shift_imm__:
    {
SDValue node0x78c7b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78c7bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78c7c50 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x78c7b00, node0x78c7bb0);
SDValue node0x78c7650 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78c7c50, SDValue());
roots.reserve(1);
roots.push_back(node0x78c7650);
dag->setRoot(node0x78c7650);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_srai__regs__regs__shift_imm__:
    {
SDValue node0x78ccc20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78cccd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78ccd70 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x78ccc20, node0x78cccd0);
SDValue node0x78cc770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78ccd70, SDValue());
roots.reserve(1);
roots.push_back(node0x78cc770);
dag->setRoot(node0x78cc770);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_srli__regs__regs__shift_imm__:
    {
SDValue node0x78d1d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78d1df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78d1e90 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x78d1d40, node0x78d1df0);
SDValue node0x78d1890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78d1e90, SDValue());
roots.reserve(1);
roots.push_back(node0x78d1890);
dag->setRoot(node0x78d1890);
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
SDValue node0x78e77e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x78e5990 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78e77e0, SDValue());
roots.reserve(1);
roots.push_back(node0x78e5990);
dag->setRoot(node0x78e5990);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__reg0__regs__:
    {
SDValue node0x78e89d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78e79d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78e89d0, SDValue());
roots.reserve(1);
roots.push_back(node0x78e79d0);
dag->setRoot(node0x78e79d0);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__regs__reg0__:
    {
SDValue node0x78eaa30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78e8b60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78eaa30, SDValue());
roots.reserve(1);
roots.push_back(node0x78e8b60);
dag->setRoot(node0x78e8b60);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__regs__regs__:
    {
SDValue node0x78ebd60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78ebe10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78ebec0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x78ebd60, node0x78ebe10);
SDValue node0x78eba70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78ebec0, SDValue());
roots.reserve(1);
roots.push_back(node0x78eba70);
dag->setRoot(node0x78eba70);
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
SDValue node0x78f41d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x78f2380 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78f41d0, SDValue());
roots.reserve(1);
roots.push_back(node0x78f2380);
dag->setRoot(node0x78f2380);
    }
    break;
  case Codasip::i_comp_3reg__opc_and__regs__regs__regs__:
    {
SDValue node0x78f8460 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78f8510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78f85c0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x78f8460, node0x78f8510);
SDValue node0x78f72c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78f85c0, SDValue());
roots.reserve(1);
roots.push_back(node0x78f72c0);
dag->setRoot(node0x78f72c0);
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
SDValue node0x7900a50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x78fec00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7900a50, SDValue());
roots.reserve(1);
roots.push_back(node0x78fec00);
dag->setRoot(node0x78fec00);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__reg0__regs__:
    {
SDValue node0x7901ca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7900c40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7901ca0, SDValue());
roots.reserve(1);
roots.push_back(node0x7900c40);
dag->setRoot(node0x7900c40);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__regs__reg0__:
    {
SDValue node0x7903d60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7901e30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7903d60, SDValue());
roots.reserve(1);
roots.push_back(node0x7901e30);
dag->setRoot(node0x7901e30);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__regs__regs__:
    {
SDValue node0x79050a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7905150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7905200 = dag->getNode(ISD::OR, dl, MVT::i32, node0x79050a0, node0x7905150);
SDValue node0x7903ef0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7905200, SDValue());
roots.reserve(1);
roots.push_back(node0x7903ef0);
dag->setRoot(node0x7903ef0);
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
SDValue node0x790d570 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x790b720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x790d570, SDValue());
roots.reserve(1);
roots.push_back(node0x790b720);
dag->setRoot(node0x790b720);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__reg0__:
    {
SDValue node0x7910670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x790e750 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7910670, SDValue());
roots.reserve(1);
roots.push_back(node0x790e750);
dag->setRoot(node0x790e750);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__regs__:
    {
SDValue node0x79119f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7911aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7911be0 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x79119f0, node0x7911aa0);
SDValue node0x7910800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7911be0, SDValue());
roots.reserve(1);
roots.push_back(node0x7910800);
dag->setRoot(node0x7910800);
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
SDValue node0x7919f20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x79180d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7919f20, SDValue());
roots.reserve(1);
roots.push_back(node0x79180d0);
dag->setRoot(node0x79180d0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__reg0__regs__:
    {
SDValue node0x791af90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x791b110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x791b1c0 = dag->getSetCC(dl, MVT::i32, node0x791b110, node0x791af90, ISD::SETGT);
SDValue node0x791a110 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x791b1c0, SDValue());
roots.reserve(1);
roots.push_back(node0x791a110);
dag->setRoot(node0x791a110);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__reg0__:
    {
SDValue node0x791d170 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x791d390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x791d440 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x791d390, node0x791d170);
SDValue node0x791b4e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x791d440, SDValue());
roots.reserve(1);
roots.push_back(node0x791b4e0);
dag->setRoot(node0x791b4e0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__regs__:
    {
SDValue node0x791e730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x791e7e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x791e890 = dag->getSetCC(dl, MVT::i32, node0x791e730, node0x791e7e0, ISD::SETLT);
SDValue node0x791d650 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x791e890, SDValue());
roots.reserve(1);
roots.push_back(node0x791d650);
dag->setRoot(node0x791d650);
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
SDValue node0x7b487f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7924f70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b487f0, SDValue());
roots.reserve(1);
roots.push_back(node0x7924f70);
dag->setRoot(node0x7924f70);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__reg0__regs__:
    {
SDValue node0x7b49860 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b499e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b49a90 = dag->getSetCC(dl, MVT::i32, node0x7b499e0, node0x7b49860, ISD::SETNE);
SDValue node0x7b489e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b49a90, SDValue());
roots.reserve(1);
roots.push_back(node0x7b489e0);
dag->setRoot(node0x7b489e0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__:
    {
SDValue node0x7b4cd50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b4ce00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7b4ceb0 = dag->getSetCC(dl, MVT::i32, node0x7b4cd50, node0x7b4ce00, ISD::SETULT);
SDValue node0x7b4bbb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b4ceb0, SDValue());
roots.reserve(1);
roots.push_back(node0x7b4bbb0);
dag->setRoot(node0x7b4bbb0);
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
SDValue node0x7b55280 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b53430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b55280, SDValue());
roots.reserve(1);
roots.push_back(node0x7b53430);
dag->setRoot(node0x7b53430);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__reg0__:
    {
SDValue node0x7b58380 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b56460 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b58380, SDValue());
roots.reserve(1);
roots.push_back(node0x7b56460);
dag->setRoot(node0x7b56460);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__regs__:
    {
SDValue node0x7b59700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b597b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7b598f0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x7b59700, node0x7b597b0);
SDValue node0x7b58510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b598f0, SDValue());
roots.reserve(1);
roots.push_back(node0x7b58510);
dag->setRoot(node0x7b58510);
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
SDValue node0x7b61c30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b5fde0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b61c30, SDValue());
roots.reserve(1);
roots.push_back(node0x7b5fde0);
dag->setRoot(node0x7b5fde0);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__reg0__:
    {
SDValue node0x7b64d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b62e10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b64d30, SDValue());
roots.reserve(1);
roots.push_back(node0x7b62e10);
dag->setRoot(node0x7b62e10);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__regs__:
    {
SDValue node0x7b660b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b66160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7b662a0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x7b660b0, node0x7b66160);
SDValue node0x7b64ec0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b662a0, SDValue());
roots.reserve(1);
roots.push_back(node0x7b64ec0);
dag->setRoot(node0x7b64ec0);
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
SDValue node0x7b6e5e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b6c790 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b6e5e0, SDValue());
roots.reserve(1);
roots.push_back(node0x7b6c790);
dag->setRoot(node0x7b6c790);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__reg0__regs__:
    {
SDValue node0x7b6f5d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b6f7d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b6f880 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x7b6f5d0, node0x7b6f7d0);
SDValue node0x7b6e7d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b6f880, SDValue());
roots.reserve(1);
roots.push_back(node0x7b6e7d0);
dag->setRoot(node0x7b6e7d0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__regs__reg0__:
    {
SDValue node0x7b718f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b6fa90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b718f0, SDValue());
roots.reserve(1);
roots.push_back(node0x7b6fa90);
dag->setRoot(node0x7b6fa90);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__regs__regs__:
    {
SDValue node0x7b72bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b72c80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7b72d30 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x7b72bd0, node0x7b72c80);
SDValue node0x7b71a80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b72d30, SDValue());
roots.reserve(1);
roots.push_back(node0x7b71a80);
dag->setRoot(node0x7b71a80);
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
SDValue node0x7b7b040 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7b791f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b7b040, SDValue());
roots.reserve(1);
roots.push_back(node0x7b791f0);
dag->setRoot(node0x7b791f0);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__reg0__regs__:
    {
SDValue node0x7b7c230 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b7b230 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b7c230, SDValue());
roots.reserve(1);
roots.push_back(node0x7b7b230);
dag->setRoot(node0x7b7b230);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__regs__reg0__:
    {
SDValue node0x7b7e290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b7c3c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b7e290, SDValue());
roots.reserve(1);
roots.push_back(node0x7b7c3c0);
dag->setRoot(node0x7b7c3c0);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__regs__regs__:
    {
SDValue node0x7b7f570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b7f620 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7b7f6d0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x7b7f570, node0x7b7f620);
SDValue node0x7b7e420 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b7f6d0, SDValue());
roots.reserve(1);
roots.push_back(node0x7b7e420);
dag->setRoot(node0x7b7e420);
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
SDValue node0x79dc570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79d25f0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79dc570, mpi, MVT::i8, 1);
SDValue node0x79db8f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79d25f0, SDValue());
roots.reserve(1);
roots.push_back(node0x79db8f0);
dag->setRoot(node0x79db8f0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__:
    {
SDValue node0x79dd890 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79dd940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79dd9e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79dd890, node0x79dd940);
SDValue node0x79d1380 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79dd9e0, mpi, MVT::i8, 1);
SDValue node0x79db7b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79d1380, SDValue());
roots.reserve(1);
roots.push_back(node0x79db7b0);
dag->setRoot(node0x79db7b0);
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
SDValue node0x79ee0e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79e3db0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x79ee0e0, mpi, MVT::i8, 1);
SDValue node0x79ed460 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79e3db0, SDValue());
roots.reserve(1);
roots.push_back(node0x79ed460);
dag->setRoot(node0x79ed460);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__:
    {
SDValue node0x79ef400 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79ef4b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79ef550 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79ef400, node0x79ef4b0);
SDValue node0x79e2b40 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x79ef550, mpi, MVT::i8, 1);
SDValue node0x79ed320 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79e2b40, SDValue());
roots.reserve(1);
roots.push_back(node0x79ed320);
dag->setRoot(node0x79ed320);
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
SDValue node0x79ffc70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79f5940 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79ffc70, mpi, MVT::i16, 1);
SDValue node0x79feff0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79f5940, SDValue());
roots.reserve(1);
roots.push_back(node0x79feff0);
dag->setRoot(node0x79feff0);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__:
    {
SDValue node0x7a00f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a01040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a010e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a00f90, node0x7a01040);
SDValue node0x79f46d0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x7a010e0, mpi, MVT::i16, 1);
SDValue node0x79feeb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79f46d0, SDValue());
roots.reserve(1);
roots.push_back(node0x79feeb0);
dag->setRoot(node0x79feeb0);
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
SDValue node0x7a117e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a074b0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x7a117e0, mpi, MVT::i16, 1);
SDValue node0x7a10b60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a074b0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a10b60);
dag->setRoot(node0x7a10b60);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__:
    {
SDValue node0x7a12b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a12bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a12c50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a12b00, node0x7a12bb0);
SDValue node0x7a06240 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x7a12c50, mpi, MVT::i16, 1);
SDValue node0x7a10a20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a06240, SDValue());
roots.reserve(1);
roots.push_back(node0x7a10a20);
dag->setRoot(node0x7a10a20);
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
SDValue node0x7a23040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a230e0 = dag->getLoad(MVT::i32, dl, entry, node0x7a23040, mpi, 1);
SDValue node0x7a22410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a230e0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a22410);
dag->setRoot(node0x7a22410);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__:
    {
SDValue node0x7a2e910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a2e9c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a2ea60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a2e910, node0x7a2e9c0);
SDValue node0x7a2eaf0 = dag->getLoad(MVT::i32, dl, entry, node0x7a2ea60, mpi, 1);
SDValue node0x7a22320 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a2eaf0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a22320);
dag->setRoot(node0x7a22320);
    }
    break;
  case Codasip::i_lui__opc_lui__regs__imm20_s12__:
    {
SDValue node0x7a4a1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a49d80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a4a1b0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a49d80);
dag->setRoot(node0x7a49d80);
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
SDValue node0x7a55c10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7a55bc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a55c10, SDValue());
roots.reserve(1);
roots.push_back(node0x7a55bc0);
dag->setRoot(node0x7a55bc0);
    }
    break;
  case Codasip::i_neg_alias__regs__regs__:
    {
SDValue node0x7a56aa0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7a56ca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a56d50 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x7a56aa0, node0x7a56ca0);
SDValue node0x7a56a50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a56d50, SDValue());
roots.reserve(1);
roots.push_back(node0x7a56a50);
dag->setRoot(node0x7a56a50);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__:
    {
SDValue node0x7a81d00 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x7a81fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a82040 = dag->getStore(entry, dl, node0x7a81d00, node0x7a81fa0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7a82040);
dag->setRoot(node0x7a82040);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__:
    {
SDValue node0x7a82cd0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x7a83010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a830c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a83160 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a83010, node0x7a830c0);
SDValue node0x7a831f0 = dag->getStore(entry, dl, node0x7a82cd0, node0x7a83160, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7a831f0);
dag->setRoot(node0x7a831f0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__reg0__:
    {
SDValue node0x7a8e000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a8e0b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b19c50 = dag->getTruncStore(entry, dl, node0x7a8e000, node0x7a8e0b0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x7b19c50);
dag->setRoot(node0x7b19c50);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__regs__:
    {
SDValue node0x7a8f380 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a8f430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a8f4e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a8f630 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a8f430, node0x7a8f4e0);
SDValue node0x7a8e200 = dag->getTruncStore(entry, dl, node0x7a8f380, node0x7a8f630, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x7a8e200);
dag->setRoot(node0x7a8e200);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__:
    {
SDValue node0x7a94ae0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x7a94d80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a94e20 = dag->getStore(entry, dl, node0x7a94ae0, node0x7a94d80, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7a94e20);
dag->setRoot(node0x7a94e20);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__:
    {
SDValue node0x7a95ca0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x7a95fe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a96090 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a96130 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a95fe0, node0x7a96090);
SDValue node0x7a961c0 = dag->getStore(entry, dl, node0x7a95ca0, node0x7a96130, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7a961c0);
dag->setRoot(node0x7a961c0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__reg0__:
    {
SDValue node0x7aa0fd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aa1080 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b1a1b0 = dag->getTruncStore(entry, dl, node0x7aa0fd0, node0x7aa1080, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x7b1a1b0);
dag->setRoot(node0x7b1a1b0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__regs__:
    {
SDValue node0x7aa2350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aa2400 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aa24b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7aa2600 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7aa2400, node0x7aa24b0);
SDValue node0x7aa11d0 = dag->getTruncStore(entry, dl, node0x7aa2350, node0x7aa2600, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x7aa11d0);
dag->setRoot(node0x7aa11d0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__reg0__:
    {
SDValue node0x7aa7830 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7aa7a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aa7ad0 = dag->getStore(entry, dl, node0x7aa7830, node0x7aa7a30, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7aa7ad0);
dag->setRoot(node0x7aa7ad0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__regs__:
    {
SDValue node0x7aa8950 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7aa8bf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aa8ca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aa8d40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7aa8bf0, node0x7aa8ca0);
SDValue node0x7aa8dd0 = dag->getStore(entry, dl, node0x7aa8950, node0x7aa8d40, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7aa8dd0);
dag->setRoot(node0x7aa8dd0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__reg0__:
    {
SDValue node0x7ab38d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ab3980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ab3a20 = dag->getStore(entry, dl, node0x7ab38d0, node0x7ab3980, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7ab3a20);
dag->setRoot(node0x7ab3a20);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__:
    {
SDValue node0x7ab4bf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ab4ca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ab4d50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7ab4df0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7ab4ca0, node0x7ab4d50);
SDValue node0x7ab4e80 = dag->getStore(entry, dl, node0x7ab4bf0, node0x7ab4df0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7ab4e80);
dag->setRoot(node0x7ab4e80);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:
    {
SDValue node0x7ae5040 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7ae4e20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7ae5040, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae4e20);
dag->setRoot(node0x7ae4e20);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:
    {
SDValue node0x7ae4ba0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x7ae4300 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7ae4ba0, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae4300);
dag->setRoot(node0x7ae4300);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:
    {
SDValue node0x7ae5f40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7ae55d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7ae5f40, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae55d0);
dag->setRoot(node0x7ae55d0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:
    {
SDValue node0x7ae57a0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x7ae4ed0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7ae57a0, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae4ed0);
dag->setRoot(node0x7ae4ed0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x79c1990 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x7a10810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79c04e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7aa1120 = dag->getNode(ISD::AND, dl, MVT::i32, node0x79c04e0, node0x79c1990);
SDValue node0x7a8f580 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x7a10810, node0x7aa1120);
SDValue node0x7b184c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a8f580, SDValue());
roots.reserve(1);
roots.push_back(node0x7b184c0);
dag->setRoot(node0x7b184c0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__regs__swappedCmpClone0__:
    {
SDValue node0x7ae4350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae4480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7ae67e0 = dag->getSetCC(dl, MVT::i32, node0x7ae4350, node0x7ae4480, ISD::SETGT);
SDValue node0x7ae6470 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7ae67e0, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae6470);
dag->setRoot(node0x7ae6470);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__swappedCmpClone0__:
    {
SDValue node0x7ae7060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae71b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7ae7260 = dag->getSetCC(dl, MVT::i32, node0x7ae7060, node0x7ae71b0, ISD::SETUGT);
SDValue node0x7ae5d70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7ae7260, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae5d70);
dag->setRoot(node0x7ae5d70);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x79117d0 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x79b67d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79b57a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7911b50 = dag->getNode(ISD::AND, dl, MVT::i32, node0x79b57a0, node0x79117d0);
SDValue node0x7a8e150 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x79b67d0, node0x7911b50);
SDValue node0x7b40f10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a8e150, SDValue());
roots.reserve(1);
roots.push_back(node0x7b40f10);
dag->setRoot(node0x7b40f10);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x7b594e0 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x7655fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a19020 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7b59860 = dag->getNode(ISD::AND, dl, MVT::i32, node0x7a19020, node0x7b594e0);
SDValue node0x7a7cd30 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x7655fa0, node0x7b59860);
SDValue node0x7b418f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a7cd30, SDValue());
roots.reserve(1);
roots.push_back(node0x7b418f0);
dag->setRoot(node0x7b418f0);
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
SDValue node0x79c7e90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79dc610 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x79c7e90, mpi, MVT::i8, 1);
SDValue node0x7bfa290 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79dc610, SDValue());
roots.reserve(1);
roots.push_back(node0x7bfa290);
dag->setRoot(node0x7bfa290);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x79dda70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79dd550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79ddb40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79dda70, node0x79dd550);
SDValue node0x7b00360 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x79ddb40, mpi, MVT::i8, 1);
SDValue node0x7945750 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b00360, SDValue());
roots.reserve(1);
roots.push_back(node0x7945750);
dag->setRoot(node0x7945750);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7af67e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aef540 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x7af67e0, mpi, MVT::i8, 1);
SDValue node0x7af24e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7aef540, SDValue());
roots.reserve(1);
roots.push_back(node0x7af24e0);
dag->setRoot(node0x7af24e0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x7af6890 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aeea80 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x7af6890, mpi, MVT::i8, 1);
SDValue node0x7ae6e10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7aeea80, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae6e10);
dag->setRoot(node0x7ae6e10);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x79e28a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79ee180 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x79e28a0, mpi, MVT::i8, 1);
SDValue node0x7929ff0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79ee180, SDValue());
roots.reserve(1);
roots.push_back(node0x7929ff0);
dag->setRoot(node0x7929ff0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x79ef5e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79ef0c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79ef6b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79ef5e0, node0x79ef0c0);
SDValue node0x7b152c0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x79ef6b0, mpi, MVT::i8, 1);
SDValue node0x7b61e20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b152c0, SDValue());
roots.reserve(1);
roots.push_back(node0x7b61e20);
dag->setRoot(node0x7b61e20);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7af7150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aedf50 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x7af7150, mpi, MVT::i8, 1);
SDValue node0x7af2fe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7aedf50, SDValue());
roots.reserve(1);
roots.push_back(node0x7af2fe0);
dag->setRoot(node0x7af2fe0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x7af7200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aed4d0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x7af7200, mpi, MVT::i8, 1);
SDValue node0x7ae7840 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7aed4d0, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae7840);
dag->setRoot(node0x7ae7840);
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
SDValue node0x79f4430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79ffd10 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x79f4430, mpi, MVT::i16, 1);
SDValue node0x7b15e00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79ffd10, SDValue());
roots.reserve(1);
roots.push_back(node0x7b15e00);
dag->setRoot(node0x7b15e00);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x7a01170 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a00c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a01240 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a01170, node0x7a00c50);
SDValue node0x7b16910 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x7a01240, mpi, MVT::i16, 1);
SDValue node0x7b169a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b16910, SDValue());
roots.reserve(1);
roots.push_back(node0x7b169a0);
dag->setRoot(node0x7b169a0);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7af8420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7af7bb0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x7af8420, mpi, MVT::i16, 1);
SDValue node0x7af6d90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7af7bb0, SDValue());
roots.reserve(1);
roots.push_back(node0x7af6d90);
dag->setRoot(node0x7af6d90);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x7af84d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aed420 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x7af84d0, mpi, MVT::i16, 1);
SDValue node0x7b41cc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7aed420, SDValue());
roots.reserve(1);
roots.push_back(node0x7b41cc0);
dag->setRoot(node0x7b41cc0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x7a05fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a11880 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x7a05fa0, mpi, MVT::i16, 1);
SDValue node0x7b175b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a11880, SDValue());
roots.reserve(1);
roots.push_back(node0x7b175b0);
dag->setRoot(node0x7b175b0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x7a12ce0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a127c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a12db0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a12ce0, node0x7a127c0);
SDValue node0x7b180c0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x7a12db0, mpi, MVT::i16, 1);
SDValue node0x7b18150 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7b180c0, SDValue());
roots.reserve(1);
roots.push_back(node0x7b18150);
dag->setRoot(node0x7b18150);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7af8d90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aec830 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x7af8d90, mpi, MVT::i16, 1);
SDValue node0x7af5140 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7aec830, SDValue());
roots.reserve(1);
roots.push_back(node0x7af5140);
dag->setRoot(node0x7af5140);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x7af8e40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a17db0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x7af8e40, mpi, MVT::i16, 1);
SDValue node0x7af0500 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a17db0, SDValue());
roots.reserve(1);
roots.push_back(node0x7af0500);
dag->setRoot(node0x7af0500);
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
SDValue node0x7afa060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7afa110 = dag->getLoad(MVT::i32, dl, entry, node0x7afa060, mpi, 1);
SDValue node0x7af89d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7afa110, SDValue());
roots.reserve(1);
roots.push_back(node0x7af89d0);
dag->setRoot(node0x7af89d0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7afa770 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x7afa990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7afa710 = dag->getStore(entry, dl, node0x7afa770, node0x7afa990, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7afa710);
dag->setRoot(node0x7afa710);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7afb180 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7afb230 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7af0700 = dag->getTruncStore(entry, dl, node0x7afb180, node0x7afb230, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x7af0700);
dag->setRoot(node0x7af0700);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7afb8d0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x7afbaf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7afb870 = dag->getStore(entry, dl, node0x7afb8d0, node0x7afbaf0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7afb870);
dag->setRoot(node0x7afb870);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7afc350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7afc400 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7af31a0 = dag->getTruncStore(entry, dl, node0x7afc350, node0x7afc400, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x7af31a0);
dag->setRoot(node0x7af31a0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7afcaa0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7afcc20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7afca40 = dag->getStore(entry, dl, node0x7afcaa0, node0x7afcc20, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7afca40);
dag->setRoot(node0x7afca40);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x7afd480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7afd530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7afd2c0 = dag->getStore(entry, dl, node0x7afd480, node0x7afd530, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7afd2c0);
dag->setRoot(node0x7afd2c0);
    }
    break;
  case Codasip::i_jal__opc_jal__reg0__rel_addr20__:
    {
SDValue node0x79aeeb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x79af0a0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x79aeeb0);
roots.reserve(1);
roots.push_back(node0x79af0a0);
dag->setRoot(node0x79af0a0);
    }
    break;
  case Codasip::i_jal__opc_jal__regs__rel_addr20__:
    {
SDValue node0x79afe60 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x79ae4e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79afe60, SDValue());
SDValue node0x79b0270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x79b0460 = dag->getNode(ISD::BR, dl, MVT::Other, node0x79ae4e0, node0x79b0270);
roots.reserve(2);
roots.push_back(node0x79ae4e0);
roots.push_back(node0x79b0460);
dag->setRoot(node0x79b0460);
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
SDValue node0x7be10d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7be1030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7be10d0, SDValue());
roots.reserve(1);
roots.push_back(node0x7be1030);
dag->setRoot(node0x7be1030);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__reg0__reg0__:
    {
SDValue node0x7beec80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7beebe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7beec80, SDValue());
roots.reserve(1);
roots.push_back(node0x7beebe0);
dag->setRoot(node0x7beebe0);
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
SDValue node0x79334d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7933430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79334d0, SDValue());
roots.reserve(1);
roots.push_back(node0x7933430);
dag->setRoot(node0x7933430);
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
SDValue node0x7941080 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7940fe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7941080, SDValue());
roots.reserve(1);
roots.push_back(node0x7940fe0);
dag->setRoot(node0x7940fe0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_e__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_e__regs__reg0__reg0__:
    {
SDValue node0x794ec30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x794eb90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x794ec30, SDValue());
roots.reserve(1);
roots.push_back(node0x794eb90);
dag->setRoot(node0x794eb90);
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
SDValue node0x7a6ba80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a6ab20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a6ba80, SDValue());
roots.reserve(1);
roots.push_back(node0x7a6ab20);
dag->setRoot(node0x7a6ab20);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_simple__:
    {
SDValue node0x7a6e040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a6e0f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a6e190 = dag->getNode(ISD::OR, dl, MVT::i32, node0x7a6e040, node0x7a6e0f0);
SDValue node0x7a6ce00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a6e190, SDValue());
roots.reserve(1);
roots.push_back(node0x7a6ce00);
dag->setRoot(node0x7a6ce00);
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
SDValue node0x7ae3910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae3620 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7ae3910, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae3620);
dag->setRoot(node0x7ae3620);
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
SDValue node0x76aaa90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x76aab10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76ab610 = dag->getTruncStore(entry, dl, node0x76aaa90, node0x76aab10, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x76ab610);
dag->setRoot(node0x76ab610);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__i32_TRUNC_CLONE_:
    {
SDValue node0x76aa990 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x76aa870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76aaa10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76a6f90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76aa870, node0x76aaa10);
SDValue node0x76abf90 = dag->getTruncStore(entry, dl, node0x76aa990, node0x76a6f90, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x76abf90);
dag->setRoot(node0x76abf90);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_:
    {
SDValue node0x76aab90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x76ac5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76ac8a0 = dag->getTruncStore(entry, dl, node0x76aab90, node0x76ac5b0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x76ac8a0);
dag->setRoot(node0x76ac8a0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__i32_TRUNC_CLONE_:
    {
SDValue node0x76acec0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x76a6b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76acf40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76a5cb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76a6b90, node0x76acf40);
SDValue node0x76ad320 = dag->getTruncStore(entry, dl, node0x76acec0, node0x76a5cb0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x76ad320);
dag->setRoot(node0x76ad320);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_:
    {
SDValue node0x76ad6b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x76aa7e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76ad8a0 = dag->getTruncStore(entry, dl, node0x76ad6b0, node0x76aa7e0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x76ad8a0);
dag->setRoot(node0x76ad8a0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_:
    {
SDValue node0x76adc90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x76aa900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76ade70 = dag->getTruncStore(entry, dl, node0x76adc90, node0x76aa900, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x76ade70);
dag->setRoot(node0x76ade70);
    }
    break;
  case Codasip::i_jump_reg_alias__regs___RET_EMUL_:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__0_REG_EMUL_:
    {
SDValue node0x76b1910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76b1810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76aef60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b4af0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76b1810, node0x76aef60);
SDValue node0x76aded0 = dag->getStore(entry, dl, node0x76b1910, node0x76b4af0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x76aded0);
dag->setRoot(node0x76aded0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__1_BIGIMM_EMUL_:
    {
SDValue node0x76af1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76ae860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76b42b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b4060 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76ae860, node0x76b42b0);
SDValue node0x76b3c60 = dag->getStore(entry, dl, node0x76af1c0, node0x76b4060, mpi, 1);
roots.reserve(1);
roots.push_back(node0x76b3c60);
dag->setRoot(node0x76b3c60);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__2_REG_EMUL_:
    {
SDValue node0x76b08c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76afa20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b5120 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76b08c0, node0x76afa20);
SDValue node0x76afab0 = dag->getLoad(MVT::i32, dl, entry, node0x76b5120, mpi, 1);
SDValue node0x76b2720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x76afab0, SDValue());
roots.reserve(1);
roots.push_back(node0x76b2720);
dag->setRoot(node0x76b2720);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__3_BIGIMM_EMUL_:
    {
SDValue node0x76b2110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76afe70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b3960 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76b2110, node0x76afe70);
SDValue node0x76b4d20 = dag->getLoad(MVT::i32, dl, entry, node0x76b3960, mpi, 1);
SDValue node0x76afef0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x76b4d20, SDValue());
roots.reserve(1);
roots.push_back(node0x76afef0);
dag->setRoot(node0x76afef0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__4_BIGIMM_EMUL_:
    {
SDValue node0x76b4140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x76b5780 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76b6c00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b3ff0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76b5780, node0x76b6c00);
SDValue node0x76b27f0 = dag->getStore(entry, dl, node0x76b4140, node0x76b3ff0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x76b27f0);
dag->setRoot(node0x76b27f0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__5_BIGIMM_EMUL_:
    {
SDValue node0x76b4870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76b7950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b5020 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76b4870, node0x76b7950);
SDValue node0x76b7220 = dag->getLoad(MVT::i32, dl, entry, node0x76b5020, mpi, 1);
SDValue node0x76b79d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x76b7220, SDValue());
roots.reserve(1);
roots.push_back(node0x76b79d0);
dag->setRoot(node0x76b79d0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__6_BIGIMM_EMUL_:
    {
SDValue node0x76b2b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76b8470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b3f80 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76b2b80, node0x76b8470);
SDValue node0x76b84f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x76b3f80, SDValue());
roots.reserve(1);
roots.push_back(node0x76b84f0);
dag->setRoot(node0x76b84f0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__7_BIGIMM_EMUL_:
    {
SDValue node0x76b5810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76b9030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b37f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76b5810, node0x76b9030);
SDValue node0x76b90b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x76b37f0, SDValue());
roots.reserve(1);
roots.push_back(node0x76b90b0);
dag->setRoot(node0x76b90b0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__8_BIGIMM_EMUL_:
    {
SDValue node0x76b8a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76b9be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x76b28c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x76b8a60, node0x76b9be0);
SDValue node0x76b9c60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x76b28c0, SDValue());
roots.reserve(1);
roots.push_back(node0x76b9c60);
dag->setRoot(node0x76b9c60);
    }
    break;
  case Codasip::c_addi_lo__opc_addi__regs__regs__:
    {
SDValue node0x768aeb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c59b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7655870 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x768aeb0, node0x7c59b20);
SDValue node0x7655820 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7655870, SDValue());
roots.reserve(1);
roots.push_back(node0x7655820);
dag->setRoot(node0x7655820);
    }
    break;
  case Codasip::c_lui_hi__opc_lui__regs__:
    {
SDValue node0x7655f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7655a80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7655f20, SDValue());
roots.reserve(1);
roots.push_back(node0x7655a80);
dag->setRoot(node0x7655a80);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_lo__:
    {
SDValue node0x7663890 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7663570 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7663890, SDValue());
roots.reserve(1);
roots.push_back(node0x7663570);
dag->setRoot(node0x7663570);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x7664510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x76639c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7664510, SDValue());
roots.reserve(1);
roots.push_back(node0x76639c0);
dag->setRoot(node0x76639c0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_lo__:
    {
SDValue node0x765dca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x789e570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x789e610 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x765dca0, node0x789e570);
SDValue node0x789e190 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x789e610, SDValue());
roots.reserve(1);
roots.push_back(node0x789e190);
dag->setRoot(node0x789e190);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x7927520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x789f490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x789f530 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7927520, node0x789f490);
SDValue node0x789e820 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x789f530, SDValue());
roots.reserve(1);
roots.push_back(node0x789e820);
dag->setRoot(node0x789e820);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_lo__:
    {
SDValue node0x7871120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7bfd570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7bfd610 = dag->getNode(ISD::AND, dl, MVT::i32, node0x7871120, node0x7bfd570);
SDValue node0x7bfd190 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7bfd610, SDValue());
roots.reserve(1);
roots.push_back(node0x7bfd190);
dag->setRoot(node0x7bfd190);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x7c593f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x768de20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7bfe310 = dag->getNode(ISD::AND, dl, MVT::i32, node0x7c593f0, node0x768de20);
SDValue node0x7bfd820 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7bfe310, SDValue());
roots.reserve(1);
roots.push_back(node0x7bfd820);
dag->setRoot(node0x7bfd820);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_lo__:
    {
SDValue node0x7c68810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c684f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c68810, SDValue());
roots.reserve(1);
roots.push_back(node0x7c684f0);
dag->setRoot(node0x7c684f0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x7c69490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c68940 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c69490, SDValue());
roots.reserve(1);
roots.push_back(node0x7c68940);
dag->setRoot(node0x7c68940);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_lo__:
    {
SDValue node0x7c6c1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c6c4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7c6c590 = dag->getNode(ISD::OR, dl, MVT::i32, node0x7c6c1c0, node0x7c6c4f0);
SDValue node0x7c6c080 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c6c590, SDValue());
roots.reserve(1);
roots.push_back(node0x7c6c080);
dag->setRoot(node0x7c6c080);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x7c6d170 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c6d4a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7c6d540 = dag->getNode(ISD::OR, dl, MVT::i32, node0x7c6d170, node0x7c6d4a0);
SDValue node0x7c6c7a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c6d540, SDValue());
roots.reserve(1);
roots.push_back(node0x7c6c7a0);
dag->setRoot(node0x7c6c7a0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_lo__:
    {
SDValue node0x7c77ad0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7c77bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c77c50 = dag->getSetCC(dl, MVT::i32, node0x7c77bb0, node0x7c77ad0, ISD::SETGT);
SDValue node0x7c77890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c77c50, SDValue());
roots.reserve(1);
roots.push_back(node0x7c77890);
dag->setRoot(node0x7c77890);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x7c789c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7c78aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c78b40 = dag->getSetCC(dl, MVT::i32, node0x7c78aa0, node0x7c789c0, ISD::SETGT);
SDValue node0x7c77f20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c78b40, SDValue());
roots.reserve(1);
roots.push_back(node0x7c77f20);
dag->setRoot(node0x7c77f20);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_lo__:
    {
SDValue node0x7c7bb20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c7be50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7c7bef0 = dag->getSetCC(dl, MVT::i32, node0x7c7bb20, node0x7c7be50, ISD::SETLT);
SDValue node0x7c7b9e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c7bef0, SDValue());
roots.reserve(1);
roots.push_back(node0x7c7b9e0);
dag->setRoot(node0x7c7b9e0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x7c7cbe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7c7cf10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7c7cfb0 = dag->getSetCC(dl, MVT::i32, node0x7c7cbe0, node0x7c7cf10, ISD::SETLT);
SDValue node0x7c7c210 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7c7cfb0, SDValue());
roots.reserve(1);
roots.push_back(node0x7c7c210);
dag->setRoot(node0x7c7c210);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_lo__:
    {
SDValue node0x78ad340 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x78ad420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78ad4c0 = dag->getSetCC(dl, MVT::i32, node0x78ad420, node0x78ad340, ISD::SETNE);
SDValue node0x78ad100 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78ad4c0, SDValue());
roots.reserve(1);
roots.push_back(node0x78ad100);
dag->setRoot(node0x78ad100);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x78ae230 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x78ae310 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78ae3b0 = dag->getSetCC(dl, MVT::i32, node0x78ae310, node0x78ae230, ISD::SETNE);
SDValue node0x78ad790 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78ae3b0, SDValue());
roots.reserve(1);
roots.push_back(node0x78ad790);
dag->setRoot(node0x78ad790);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_lo__:
    {
SDValue node0x78b1390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78b16c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78b1760 = dag->getSetCC(dl, MVT::i32, node0x78b1390, node0x78b16c0, ISD::SETULT);
SDValue node0x78b1250 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78b1760, SDValue());
roots.reserve(1);
roots.push_back(node0x78b1250);
dag->setRoot(node0x78b1250);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x78b2450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78b2780 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78b2820 = dag->getSetCC(dl, MVT::i32, node0x78b2450, node0x78b2780, ISD::SETULT);
SDValue node0x78b1a80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78b2820, SDValue());
roots.reserve(1);
roots.push_back(node0x78b1a80);
dag->setRoot(node0x78b1a80);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_lo__:
    {
SDValue node0x78bd060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78bcd40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78bd060, SDValue());
roots.reserve(1);
roots.push_back(node0x78bcd40);
dag->setRoot(node0x78bcd40);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x78bdce0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78bd190 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78bdce0, SDValue());
roots.reserve(1);
roots.push_back(node0x78bd190);
dag->setRoot(node0x78bd190);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_lo__:
    {
SDValue node0x78c0b50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78c0e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78c0f20 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x78c0b50, node0x78c0e80);
SDValue node0x78c0a10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78c0f20, SDValue());
roots.reserve(1);
roots.push_back(node0x78c0a10);
dag->setRoot(node0x78c0a10);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x78c1b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x78c1e30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x78c1ed0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x78c1b00, node0x78c1e30);
SDValue node0x78c1130 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x78c1ed0, SDValue());
roots.reserve(1);
roots.push_back(node0x78c1130);
dag->setRoot(node0x78c1130);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_lo__:
    {
SDValue node0x79b2380 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x79b2080 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x79b2380);
roots.reserve(1);
roots.push_back(node0x79b2080);
dag->setRoot(node0x79b2080);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_pcrel_lo__:
    {
SDValue node0x79b2e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x79b2b30 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x79b2e00);
roots.reserve(1);
roots.push_back(node0x79b2b30);
dag->setRoot(node0x79b2b30);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_lo__:
    {
SDValue node0x79bc510 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x79bac60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79bc510, SDValue());
SDValue node0x79bc880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x79bc4e0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x79bac60, node0x79bc880);
roots.reserve(2);
roots.push_back(node0x79bac60);
roots.push_back(node0x79bc4e0);
dag->setRoot(node0x79bc4e0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x79bd220 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x79bca60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79bd220, SDValue());
SDValue node0x79bd590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x79bd1f0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x79bca60, node0x79bd590);
roots.reserve(2);
roots.push_back(node0x79bca60);
roots.push_back(node0x79bd1f0);
dag->setRoot(node0x79bd1f0);
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
SDValue node0x79d76b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79c17a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79d76b0, mpi, MVT::i8, 1);
SDValue node0x79d6aa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79c17a0, SDValue());
roots.reserve(1);
roots.push_back(node0x79d6aa0);
dag->setRoot(node0x79d6aa0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_lo__regs__:
    {
SDValue node0x79d8a90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79d8dc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79d8e60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79d8a90, node0x79d8dc0);
SDValue node0x79d7750 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79d8e60, mpi, MVT::i8, 1);
SDValue node0x79d7a00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79d7750, SDValue());
roots.reserve(1);
roots.push_back(node0x79d7a00);
dag->setRoot(node0x79d7a00);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x79d9e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79d8ef0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79d9e70, mpi, MVT::i8, 1);
SDValue node0x79d9290 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79d8ef0, SDValue());
roots.reserve(1);
roots.push_back(node0x79d9290);
dag->setRoot(node0x79d9290);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x79db140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79db470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79db510 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79db140, node0x79db470);
SDValue node0x79d9f10 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79db510, mpi, MVT::i8, 1);
SDValue node0x79d90b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79d9f10, SDValue());
roots.reserve(1);
roots.push_back(node0x79d90b0);
dag->setRoot(node0x79d90b0);
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
SDValue node0x79e9150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79db5a0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x79e9150, mpi, MVT::i8, 1);
SDValue node0x79e86c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79db5a0, SDValue());
roots.reserve(1);
roots.push_back(node0x79e86c0);
dag->setRoot(node0x79e86c0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_lo__regs__:
    {
SDValue node0x79ea600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79ea930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79ea9d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79ea600, node0x79ea930);
SDValue node0x79e91f0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x79ea9d0, mpi, MVT::i8, 1);
SDValue node0x79e94a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79e91f0, SDValue());
roots.reserve(1);
roots.push_back(node0x79e94a0);
dag->setRoot(node0x79e94a0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x79eba30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79eaa60 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x79eba30, mpi, MVT::i8, 1);
SDValue node0x79eadb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79eaa60, SDValue());
roots.reserve(1);
roots.push_back(node0x79eadb0);
dag->setRoot(node0x79eadb0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x79eccb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79ecfe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79ed080 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79eccb0, node0x79ecfe0);
SDValue node0x79ebad0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x79ed080, mpi, MVT::i8, 1);
SDValue node0x79eac70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79ebad0, SDValue());
roots.reserve(1);
roots.push_back(node0x79eac70);
dag->setRoot(node0x79eac70);
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
SDValue node0x79face0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79ed110 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79face0, mpi, MVT::i16, 1);
SDValue node0x79fa0d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79ed110, SDValue());
roots.reserve(1);
roots.push_back(node0x79fa0d0);
dag->setRoot(node0x79fa0d0);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_lo__regs__:
    {
SDValue node0x79fc190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79fc4c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79fc560 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79fc190, node0x79fc4c0);
SDValue node0x79fad80 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79fc560, mpi, MVT::i16, 1);
SDValue node0x79fb030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79fad80, SDValue());
roots.reserve(1);
roots.push_back(node0x79fb030);
dag->setRoot(node0x79fb030);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x79fd570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79fc5f0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79fd570, mpi, MVT::i16, 1);
SDValue node0x79fc990 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79fc5f0, SDValue());
roots.reserve(1);
roots.push_back(node0x79fc990);
dag->setRoot(node0x79fc990);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x79fe840 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79feb70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x79fec10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x79fe840, node0x79feb70);
SDValue node0x79fd610 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x79fec10, mpi, MVT::i16, 1);
SDValue node0x79fc7b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79fd610, SDValue());
roots.reserve(1);
roots.push_back(node0x79fc7b0);
dag->setRoot(node0x79fc7b0);
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
SDValue node0x7a0c850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79feca0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x7a0c850, mpi, MVT::i16, 1);
SDValue node0x7a0bdc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79feca0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a0bdc0);
dag->setRoot(node0x7a0bdc0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_lo__regs__:
    {
SDValue node0x7a0dd00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a0e030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a0e0d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a0dd00, node0x7a0e030);
SDValue node0x7a0c8f0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x7a0e0d0, mpi, MVT::i16, 1);
SDValue node0x7a0cba0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a0c8f0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a0cba0);
dag->setRoot(node0x7a0cba0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x7a0f130 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a0e160 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x7a0f130, mpi, MVT::i16, 1);
SDValue node0x7a0e4b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a0e160, SDValue());
roots.reserve(1);
roots.push_back(node0x7a0e4b0);
dag->setRoot(node0x7a0e4b0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x7a103b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a106e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a10780 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a103b0, node0x7a106e0);
SDValue node0x7a0f1d0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x7a10780, mpi, MVT::i16, 1);
SDValue node0x7a0e370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a0f1d0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a0e370);
dag->setRoot(node0x7a0e370);
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
SDValue node0x7a1e3c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a1e460 = dag->getLoad(MVT::i32, dl, entry, node0x7a1e3c0, mpi, 1);
SDValue node0x7a1d7b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a1e460, SDValue());
roots.reserve(1);
roots.push_back(node0x7a1d7b0);
dag->setRoot(node0x7a1d7b0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_lo__regs__:
    {
SDValue node0x7a1f7c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a1faf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a1fb90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a1f7c0, node0x7a1faf0);
SDValue node0x7a1fc20 = dag->getLoad(MVT::i32, dl, entry, node0x7a1fb90, mpi, 1);
SDValue node0x7a1e610 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a1fc20, SDValue());
roots.reserve(1);
roots.push_back(node0x7a1e610);
dag->setRoot(node0x7a1e610);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x7a20aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a20b40 = dag->getLoad(MVT::i32, dl, entry, node0x7a20aa0, mpi, 1);
SDValue node0x7a1fec0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a20b40, SDValue());
roots.reserve(1);
roots.push_back(node0x7a1fec0);
dag->setRoot(node0x7a1fec0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x7a21d10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a22040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a220e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a21d10, node0x7a22040);
SDValue node0x7a22170 = dag->getLoad(MVT::i32, dl, entry, node0x7a220e0, mpi, 1);
SDValue node0x7a1fdd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a22170, SDValue());
roots.reserve(1);
roots.push_back(node0x7a1fdd0);
dag->setRoot(node0x7a1fdd0);
    }
    break;
  case Codasip::i_lui_hi__opc_lui__regs__imm20_hi__:
    {
SDValue node0x7a4ba00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a4ba80 = dag->getConstant(2048LL, dl, MVT::i32);
SDValue node0x7a4bb40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a4ba00, node0x7a4ba80);
SDValue node0x7a4bbb0 = dag->getConstant(-4096LL, dl, MVT::i32);
SDValue node0x7a4bc70 = dag->getNode(ISD::AND, dl, MVT::i32, node0x7a4bb40, node0x7a4bbb0);
SDValue node0x7a4b710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a4bc70, SDValue());
roots.reserve(1);
roots.push_back(node0x7a4b710);
dag->setRoot(node0x7a4b710);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_lo__:
    {
SDValue node0x7a6a3e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a67520 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a6a3e0, SDValue());
roots.reserve(1);
roots.push_back(node0x7a67520);
dag->setRoot(node0x7a67520);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x7a6af80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a6a510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a6af80, SDValue());
roots.reserve(1);
roots.push_back(node0x7a6a510);
dag->setRoot(node0x7a6a510);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_lo__:
    {
SDValue node0x7a6c2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a6c5e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a6c680 = dag->getNode(ISD::OR, dl, MVT::i32, node0x7a6c2b0, node0x7a6c5e0);
SDValue node0x7a6b620 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a6c680, SDValue());
roots.reserve(1);
roots.push_back(node0x7a6b620);
dag->setRoot(node0x7a6b620);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x7a6d0b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a6d3e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a6d480 = dag->getNode(ISD::OR, dl, MVT::i32, node0x7a6d0b0, node0x7a6d3e0);
SDValue node0x7a6c7f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7a6d480, SDValue());
roots.reserve(1);
roots.push_back(node0x7a6c7f0);
dag->setRoot(node0x7a6c7f0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x7a7d6f0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x7a7d990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7c0ec40 = dag->getStore(entry, dl, node0x7a7d6f0, node0x7a7d990, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7c0ec40);
dag->setRoot(node0x7c0ec40);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_lo__regs__:
    {
SDValue node0x7a7e810 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x7a7e970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a7ec00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a7eca0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a7e970, node0x7a7ec00);
SDValue node0x7c114c0 = dag->getStore(entry, dl, node0x7a7e810, node0x7a7eca0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7c114c0);
dag->setRoot(node0x7c114c0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x7a7f850 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x7a7faf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x789c130 = dag->getStore(entry, dl, node0x7a7f850, node0x7a7faf0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x789c130);
dag->setRoot(node0x789c130);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x7a80ce0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x7a80e40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a810d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a81170 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a80e40, node0x7a810d0);
SDValue node0x7679130 = dag->getStore(entry, dl, node0x7a80ce0, node0x7a81170, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7679130);
dag->setRoot(node0x7679130);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_lo__reg0__:
    {
SDValue node0x7a88ca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a88fe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b3a8e0 = dag->getTruncStore(entry, dl, node0x7a88ca0, node0x7a88fe0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x7b3a8e0);
dag->setRoot(node0x7b3a8e0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_lo__regs__:
    {
SDValue node0x7a8a330 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a8a530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a8a7c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a8a860 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a8a530, node0x7a8a7c0);
SDValue node0x7b3aac0 = dag->getTruncStore(entry, dl, node0x7a8a330, node0x7a8a860, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x7b3aac0);
dag->setRoot(node0x7b3aac0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x7a8b5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a8b8f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b3acc0 = dag->getTruncStore(entry, dl, node0x7a8b5b0, node0x7a8b8f0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x7b3acc0);
dag->setRoot(node0x7b3acc0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x7a8cbc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a8cdc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a8d050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a8d0f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a8cdc0, node0x7a8d050);
SDValue node0x7b3aea0 = dag->getTruncStore(entry, dl, node0x7a8cbc0, node0x7a8d0f0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x7b3aea0);
dag->setRoot(node0x7b3aea0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x7a901d0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x7a90470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a90510 = dag->getStore(entry, dl, node0x7a901d0, node0x7a90470, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7a90510);
dag->setRoot(node0x7a90510);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_lo__regs__:
    {
SDValue node0x7a914d0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x7a91630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a918c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a91960 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a91630, node0x7a918c0);
SDValue node0x7a919f0 = dag->getStore(entry, dl, node0x7a914d0, node0x7a91960, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7a919f0);
dag->setRoot(node0x7a919f0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x7a92570 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x7a92810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a928b0 = dag->getStore(entry, dl, node0x7a92570, node0x7a92810, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7a928b0);
dag->setRoot(node0x7a928b0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x7a93a60 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x7a93bc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a93e50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a93ef0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a93bc0, node0x7a93e50);
SDValue node0x7a93f80 = dag->getStore(entry, dl, node0x7a93a60, node0x7a93ef0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7a93f80);
dag->setRoot(node0x7a93f80);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_lo__reg0__:
    {
SDValue node0x7a9bc70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a9bfb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b3bb80 = dag->getTruncStore(entry, dl, node0x7a9bc70, node0x7a9bfb0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x7b3bb80);
dag->setRoot(node0x7b3bb80);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_lo__regs__:
    {
SDValue node0x7a9d300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a9d500 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7a9d790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7a9d830 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a9d500, node0x7a9d790);
SDValue node0x7b3bd60 = dag->getTruncStore(entry, dl, node0x7a9d300, node0x7a9d830, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x7b3bd60);
dag->setRoot(node0x7b3bd60);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x7a9e580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a9e8c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7b3bf60 = dag->getTruncStore(entry, dl, node0x7a9e580, node0x7a9e8c0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x7b3bf60);
dag->setRoot(node0x7b3bf60);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x7a9fb90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7a9fd90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aa0020 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7aa00c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7a9fd90, node0x7aa0020);
SDValue node0x7b3c140 = dag->getTruncStore(entry, dl, node0x7a9fb90, node0x7aa00c0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x7b3c140);
dag->setRoot(node0x7b3c140);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x7aa31a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7aa33a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aa3440 = dag->getStore(entry, dl, node0x7aa31a0, node0x7aa33a0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7aa3440);
dag->setRoot(node0x7aa3440);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_lo__regs__:
    {
SDValue node0x7aa4400 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7aa4560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aa4750 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aa47f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7aa4560, node0x7aa4750);
SDValue node0x7aa4880 = dag->getStore(entry, dl, node0x7aa4400, node0x7aa47f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7aa4880);
dag->setRoot(node0x7aa4880);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x7aa5400 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7aa5600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aa56a0 = dag->getStore(entry, dl, node0x7aa5400, node0x7aa5600, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7aa56a0);
dag->setRoot(node0x7aa56a0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x7aa6850 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x7aa69b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aa6ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aa6c40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7aa69b0, node0x7aa6ba0);
SDValue node0x7aa6cd0 = dag->getStore(entry, dl, node0x7aa6850, node0x7aa6c40, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7aa6cd0);
dag->setRoot(node0x7aa6cd0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_lo__reg0__:
    {
SDValue node0x7aae880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aaeb10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7aac340 = dag->getStore(entry, dl, node0x7aae880, node0x7aaeb10, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7aac340);
dag->setRoot(node0x7aac340);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_lo__regs__:
    {
SDValue node0x7aafe60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7aaffb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ab0240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7ab02e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7aaffb0, node0x7ab0240);
SDValue node0x7ab0370 = dag->getStore(entry, dl, node0x7aafe60, node0x7ab02e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7ab0370);
dag->setRoot(node0x7ab0370);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x7ab0fe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ab1270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ab1310 = dag->getStore(entry, dl, node0x7ab0fe0, node0x7ab1270, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7ab1310);
dag->setRoot(node0x7ab1310);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x7ab2590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x7ab26e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ab2970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x7ab2a10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x7ab26e0, node0x7ab2970);
SDValue node0x7ab2aa0 = dag->getStore(entry, dl, node0x7ab2590, node0x7ab2a10, mpi, 1);
roots.reserve(1);
roots.push_back(node0x7ab2aa0);
dag->setRoot(node0x7ab2aa0);
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
SDValue node0x7ae3450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x7ae3180 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x7ae3450, SDValue());
roots.reserve(1);
roots.push_back(node0x7ae3180);
dag->setRoot(node0x7ae3180);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__regs__simm12_simple__:
    {
SDValue node0x79b78f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x79b7b90 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x79b78f0);
roots.reserve(1);
roots.push_back(node0x79b7b90);
dag->setRoot(node0x79b7b90);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__regs__simm12_simple__:
    {
SDValue node0x79c25b0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x79c0bc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x79c25b0, SDValue());
SDValue node0x79c2a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x79c2d00 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x79c0bc0, node0x79c2a60);
roots.reserve(2);
roots.push_back(node0x79c0bc0);
roots.push_back(node0x79c2d00);
dag->setRoot(node0x79c2d00);
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
