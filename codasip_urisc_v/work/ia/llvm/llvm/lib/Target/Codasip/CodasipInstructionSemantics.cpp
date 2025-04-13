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
 *                Date: 2025-04-13 21:43:20
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
SDValue node0x2673be50 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x265af580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2673bc60 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x265af580);
SDValue node0x265b43c0 = dag->getCopyToReg(node0x2673bc60, dl, dag->getRegister(Codasip::rf_gpr_1, MVT::i32), node0x2673be50, SDValue());
roots.reserve(2);
roots.push_back(node0x265b43c0);
roots.push_back(node0x2673bc60);
dag->setRoot(node0x265b43c0);
    } else     {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jump_reg_alias__regs__:
    {
SDValue node0x265a5080 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x265a4e50 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x265a5080);
roots.reserve(1);
roots.push_back(node0x265a4e50);
dag->setRoot(node0x265a4e50);
    }
    break;
  case Codasip::i_jmp_rel_alias__rel_addr20__:
    {
SDValue node0x265a3820 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x265a3aa0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x265a3820);
roots.reserve(1);
roots.push_back(node0x265a3aa0);
dag->setRoot(node0x265a3aa0);
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
SDValue node0x2652f8f0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x26589710 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x26589930 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2652f8f0, node0x26589710);
SDValue node0x265896c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26589930, SDValue());
roots.reserve(1);
roots.push_back(node0x265896c0);
dag->setRoot(node0x265896c0);
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
SDValue node0x2662baf0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2662baa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2662baf0, SDValue());
roots.reserve(1);
roots.push_back(node0x2662baa0);
dag->setRoot(node0x2662baa0);
    }
    break;
  case Codasip::i_mv_alias__regs__regs__:
    {
SDValue node0x2662cb80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2662c930 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2662cb80, SDValue());
roots.reserve(1);
roots.push_back(node0x2662c930);
dag->setRoot(node0x2662c930);
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
SDValue node0x2664a890 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x2664a840 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2664a890, SDValue());
roots.reserve(1);
roots.push_back(node0x2664a840);
dag->setRoot(node0x2664a840);
    }
    break;
  case Codasip::i_seqz_alias__regs__regs__:
    {
SDValue node0x2664b840 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2664b9c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2664ba70 = dag->getSetCC(dl, MVT::i32, node0x2664b9c0, node0x2664b840, ISD::SETEQ);
SDValue node0x2664b770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2664ba70, SDValue());
roots.reserve(1);
roots.push_back(node0x2664b770);
dag->setRoot(node0x2664b770);
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
SDValue node0x26655440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x266553f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26655440, SDValue());
roots.reserve(1);
roots.push_back(node0x266553f0);
dag->setRoot(node0x266553f0);
    }
    break;
  case Codasip::i_snez_alias__regs__regs__:
    {
SDValue node0x26656350 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x266564d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26656580 = dag->getSetCC(dl, MVT::i32, node0x266564d0, node0x26656350, ISD::SETNE);
SDValue node0x26656280 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26656580, SDValue());
roots.reserve(1);
roots.push_back(node0x26656280);
dag->setRoot(node0x26656280);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__regs__simm12_simple__immspec_1_:
    {
SDValue node0x266cec50 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x266cd390 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266cec50, SDValue());
SDValue node0x266cefc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266cf100 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x266cd390, node0x266cefc0);
roots.reserve(2);
roots.push_back(node0x266cd390);
roots.push_back(node0x266cf100);
dag->setRoot(node0x266cf100);
    }
    break;
  case Codasip::i_call_rel_alias__rel_addr20__:
case Codasip::i_call_rel_alias__rel_addr20__ES:
case Codasip::i_call_rel_alias__rel_addr20__MC:
case Codasip::i_call_rel_alias__rel_addr20__BA:
    if (lowlevel) {
SDValue node0x2673cb90 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x2673cda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2673d020 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2673cda0);
SDValue node0x2673c2e0 = dag->getCopyToReg(node0x2673d020, dl, dag->getRegister(Codasip::rf_gpr_1, MVT::i32), node0x2673cb90, SDValue());
roots.reserve(2);
roots.push_back(node0x2673c2e0);
roots.push_back(node0x2673d020);
dag->setRoot(node0x2673c2e0);
    } else     {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__:
    {
SDValue node0x2658c630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2658c330 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2658c630);
roots.reserve(1);
roots.push_back(node0x2658c330);
dag->setRoot(node0x2658c330);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__regs__rel_addr20__:
    {
SDValue node0x2658cc10 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x2658bbe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2658cc10, SDValue());
SDValue node0x2658cf80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2658cbb0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x2658bbe0, node0x2658cf80);
roots.reserve(2);
roots.push_back(node0x2658bbe0);
roots.push_back(node0x2658cbb0);
dag->setRoot(node0x2658cbb0);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__:
    {
SDValue node0x26476a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x26476d10 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x26476a60);
roots.reserve(1);
roots.push_back(node0x26476d10);
dag->setRoot(node0x26476d10);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x26477fe0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26478160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26478210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x264782b0 = dag->getSetCC(dl, MVT::iAny, node0x26478160, node0x26477fe0, ISD::SETEQ);
SDValue node0x264784d0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x264782b0, node0x26478210);
roots.reserve(1);
roots.push_back(node0x264784d0);
dag->setRoot(node0x264784d0);
    } else     {
SDValue node0x26477fe0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26478160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26478210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x264782b0 = dag->getSetCC(dl, MVT::i32, node0x26478160, node0x26477fe0, ISD::SETEQ);
SDValue node0x264784d0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x264782b0, node0x26478210);
roots.reserve(1);
roots.push_back(node0x264784d0);
dag->setRoot(node0x264784d0);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x2647a980 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2647ab00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2647abb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2647ac50 = dag->getSetCC(dl, MVT::iAny, node0x2647ab00, node0x2647a980, ISD::SETEQ);
SDValue node0x2647ae70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2647ac50, node0x2647abb0);
roots.reserve(1);
roots.push_back(node0x2647ae70);
dag->setRoot(node0x2647ae70);
    } else     {
SDValue node0x2647a980 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2647ab00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2647abb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2647ac50 = dag->getSetCC(dl, MVT::i32, node0x2647ab00, node0x2647a980, ISD::SETEQ);
SDValue node0x2647ae70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2647ac50, node0x2647abb0);
roots.reserve(1);
roots.push_back(node0x2647ae70);
dag->setRoot(node0x2647ae70);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2647c5f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2647c6a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2647c750 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2647c7f0 = dag->getSetCC(dl, MVT::iAny, node0x2647c6a0, node0x2647c5f0, ISD::SETEQ);
SDValue node0x2647ca10 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2647c7f0, node0x2647c750);
roots.reserve(1);
roots.push_back(node0x2647ca10);
dag->setRoot(node0x2647ca10);
    } else     {
SDValue node0x2647c5f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2647c6a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2647c750 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2647c7f0 = dag->getSetCC(dl, MVT::i32, node0x2647c6a0, node0x2647c5f0, ISD::SETEQ);
SDValue node0x2647ca10 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2647c7f0, node0x2647c750);
roots.reserve(1);
roots.push_back(node0x2647ca10);
dag->setRoot(node0x2647ca10);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__:
    {
SDValue node0x2647d970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2647dc20 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2647d970);
roots.reserve(1);
roots.push_back(node0x2647dc20);
dag->setRoot(node0x2647dc20);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2647eb80 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x2647eee0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2647ef90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2647f030 = dag->getSetCC(dl, MVT::iAny, node0x2647eee0, node0x2647eb80, ISD::SETLT);
SDValue node0x2647f250 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2647f030, node0x2647ef90);
roots.reserve(1);
roots.push_back(node0x2647f250);
dag->setRoot(node0x2647f250);
    } else     {
SDValue node0x2647eb80 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x2647eee0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2647ef90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2647f030 = dag->getSetCC(dl, MVT::i32, node0x2647eee0, node0x2647eb80, ISD::SETLT);
SDValue node0x2647f250 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2647f030, node0x2647ef90);
roots.reserve(1);
roots.push_back(node0x2647f250);
dag->setRoot(node0x2647f250);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x26481840 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x26481920 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x264819d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26481a70 = dag->getSetCC(dl, MVT::iAny, node0x26481920, node0x26481840, ISD::SETGT);
SDValue node0x26481c90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26481a70, node0x264819d0);
roots.reserve(1);
roots.push_back(node0x26481c90);
dag->setRoot(node0x26481c90);
    } else     {
SDValue node0x26481840 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x26481920 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x264819d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26481a70 = dag->getSetCC(dl, MVT::i32, node0x26481920, node0x26481840, ISD::SETGT);
SDValue node0x26481c90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26481a70, node0x264819d0);
roots.reserve(1);
roots.push_back(node0x26481c90);
dag->setRoot(node0x26481c90);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x26483410 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264834c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26483570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x26483610 = dag->getSetCC(dl, MVT::iAny, node0x264834c0, node0x26483410, ISD::SETGE);
SDValue node0x26483830 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26483610, node0x26483570);
roots.reserve(1);
roots.push_back(node0x26483830);
dag->setRoot(node0x26483830);
    } else     {
SDValue node0x26483410 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264834c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26483570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x26483610 = dag->getSetCC(dl, MVT::i32, node0x264834c0, node0x26483410, ISD::SETGE);
SDValue node0x26483830 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26483610, node0x26483570);
roots.reserve(1);
roots.push_back(node0x26483830);
dag->setRoot(node0x26483830);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__:
    {
SDValue node0x26484790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x26484a40 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x26484790);
roots.reserve(1);
roots.push_back(node0x26484a40);
dag->setRoot(node0x26484a40);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x26485b80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26485d00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26485db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26485e50 = dag->getSetCC(dl, MVT::iAny, node0x26485d00, node0x26485b80, ISD::SETEQ);
SDValue node0x26486070 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26485e50, node0x26485db0);
roots.reserve(1);
roots.push_back(node0x26486070);
dag->setRoot(node0x26486070);
    } else     {
SDValue node0x26485b80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26485d00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26485db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26485e50 = dag->getSetCC(dl, MVT::i32, node0x26485d00, node0x26485b80, ISD::SETEQ);
SDValue node0x26486070 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26485e50, node0x26485db0);
roots.reserve(1);
roots.push_back(node0x26486070);
dag->setRoot(node0x26486070);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2648a120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2648a1d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2648a280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2648a320 = dag->getSetCC(dl, MVT::iAny, node0x2648a1d0, node0x2648a120, ISD::SETUGE);
SDValue node0x2648a540 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2648a320, node0x2648a280);
roots.reserve(1);
roots.push_back(node0x2648a540);
dag->setRoot(node0x2648a540);
    } else     {
SDValue node0x2648a120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2648a1d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2648a280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2648a320 = dag->getSetCC(dl, MVT::i32, node0x2648a1d0, node0x2648a120, ISD::SETUGE);
SDValue node0x2648a540 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2648a320, node0x2648a280);
roots.reserve(1);
roots.push_back(node0x2648a540);
dag->setRoot(node0x2648a540);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2648c180 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2648c300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2648c3b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2648c450 = dag->getSetCC(dl, MVT::iAny, node0x2648c300, node0x2648c180, ISD::SETGT);
SDValue node0x2648c670 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2648c450, node0x2648c3b0);
roots.reserve(1);
roots.push_back(node0x2648c670);
dag->setRoot(node0x2648c670);
    } else     {
SDValue node0x2648c180 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2648c300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2648c3b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2648c450 = dag->getSetCC(dl, MVT::i32, node0x2648c300, node0x2648c180, ISD::SETGT);
SDValue node0x2648c670 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2648c450, node0x2648c3b0);
roots.reserve(1);
roots.push_back(node0x2648c670);
dag->setRoot(node0x2648c670);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x2648eb70 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2648ecf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2648eda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2648ee40 = dag->getSetCC(dl, MVT::iAny, node0x2648ecf0, node0x2648eb70, ISD::SETLT);
SDValue node0x2648f060 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2648ee40, node0x2648eda0);
roots.reserve(1);
roots.push_back(node0x2648f060);
dag->setRoot(node0x2648f060);
    } else     {
SDValue node0x2648eb70 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2648ecf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2648eda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2648ee40 = dag->getSetCC(dl, MVT::i32, node0x2648ecf0, node0x2648eb70, ISD::SETLT);
SDValue node0x2648f060 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2648ee40, node0x2648eda0);
roots.reserve(1);
roots.push_back(node0x2648f060);
dag->setRoot(node0x2648f060);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x264907e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26490890 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26490940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x264909e0 = dag->getSetCC(dl, MVT::iAny, node0x26490890, node0x264907e0, ISD::SETLT);
SDValue node0x26490c00 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x264909e0, node0x26490940);
roots.reserve(1);
roots.push_back(node0x26490c00);
dag->setRoot(node0x26490c00);
    } else     {
SDValue node0x264907e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26490890 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26490940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x264909e0 = dag->getSetCC(dl, MVT::i32, node0x26490890, node0x264907e0, ISD::SETLT);
SDValue node0x26490c00 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x264909e0, node0x26490940);
roots.reserve(1);
roots.push_back(node0x26490c00);
dag->setRoot(node0x26490c00);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x264927f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26492970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26492a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26492ac0 = dag->getSetCC(dl, MVT::iAny, node0x26492970, node0x264927f0, ISD::SETNE);
SDValue node0x26492ce0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26492ac0, node0x26492a20);
roots.reserve(1);
roots.push_back(node0x26492ce0);
dag->setRoot(node0x26492ce0);
    } else     {
SDValue node0x264927f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26492970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26492a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26492ac0 = dag->getSetCC(dl, MVT::i32, node0x26492970, node0x264927f0, ISD::SETNE);
SDValue node0x26492ce0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26492ac0, node0x26492a20);
roots.reserve(1);
roots.push_back(node0x26492ce0);
dag->setRoot(node0x26492ce0);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x264965e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26496690 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26496740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x264967e0 = dag->getSetCC(dl, MVT::iAny, node0x26496690, node0x264965e0, ISD::SETULT);
SDValue node0x26496a00 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x264967e0, node0x26496740);
roots.reserve(1);
roots.push_back(node0x26496a00);
dag->setRoot(node0x26496a00);
    } else     {
SDValue node0x264965e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26496690 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26496740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x264967e0 = dag->getSetCC(dl, MVT::i32, node0x26496690, node0x264965e0, ISD::SETULT);
SDValue node0x26496a00 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x264967e0, node0x26496740);
roots.reserve(1);
roots.push_back(node0x26496a00);
dag->setRoot(node0x26496a00);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x26498690 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26498810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x264988c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26498960 = dag->getSetCC(dl, MVT::iAny, node0x26498810, node0x26498690, ISD::SETNE);
SDValue node0x26498b80 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26498960, node0x264988c0);
roots.reserve(1);
roots.push_back(node0x26498b80);
dag->setRoot(node0x26498b80);
    } else     {
SDValue node0x26498690 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26498810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x264988c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26498960 = dag->getSetCC(dl, MVT::i32, node0x26498810, node0x26498690, ISD::SETNE);
SDValue node0x26498b80 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x26498960, node0x264988c0);
roots.reserve(1);
roots.push_back(node0x26498b80);
dag->setRoot(node0x26498b80);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x2649b080 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2649b200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2649b2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2649b350 = dag->getSetCC(dl, MVT::iAny, node0x2649b200, node0x2649b080, ISD::SETNE);
SDValue node0x2649b570 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2649b350, node0x2649b2b0);
roots.reserve(1);
roots.push_back(node0x2649b570);
dag->setRoot(node0x2649b570);
    } else     {
SDValue node0x2649b080 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2649b200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2649b2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2649b350 = dag->getSetCC(dl, MVT::i32, node0x2649b200, node0x2649b080, ISD::SETNE);
SDValue node0x2649b570 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2649b350, node0x2649b2b0);
roots.reserve(1);
roots.push_back(node0x2649b570);
dag->setRoot(node0x2649b570);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x2649ccf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2649cda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2649ce50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2649cef0 = dag->getSetCC(dl, MVT::iAny, node0x2649cda0, node0x2649ccf0, ISD::SETNE);
SDValue node0x2649d110 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2649cef0, node0x2649ce50);
roots.reserve(1);
roots.push_back(node0x2649d110);
dag->setRoot(node0x2649d110);
    } else     {
SDValue node0x2649ccf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2649cda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2649ce50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x2649cef0 = dag->getSetCC(dl, MVT::i32, node0x2649cda0, node0x2649ccf0, ISD::SETNE);
SDValue node0x2649d110 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x2649cef0, node0x2649ce50);
roots.reserve(1);
roots.push_back(node0x2649d110);
dag->setRoot(node0x2649d110);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x266c16f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x266c1950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266c1a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c1ab0 = dag->getSetCC(dl, MVT::iAny, node0x266c1950, node0x266c1a00, ISD::SETLE);
SDValue node0x266c1b50 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x266c1ab0, node0x266c16f0);
roots.reserve(1);
roots.push_back(node0x266c1b50);
dag->setRoot(node0x266c1b50);
    } else     {
SDValue node0x266c16f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x266c1950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266c1a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c1ab0 = dag->getSetCC(dl, MVT::i32, node0x266c1950, node0x266c1a00, ISD::SETLE);
SDValue node0x266c1b50 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x266c1ab0, node0x266c16f0);
roots.reserve(1);
roots.push_back(node0x266c1b50);
dag->setRoot(node0x266c1b50);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x266c2610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x266c28a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266c2950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c2a00 = dag->getSetCC(dl, MVT::iAny, node0x266c28a0, node0x266c2950, ISD::SETULE);
SDValue node0x266c2ad0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x266c2a00, node0x266c2610);
roots.reserve(1);
roots.push_back(node0x266c2ad0);
dag->setRoot(node0x266c2ad0);
    } else     {
SDValue node0x266c2610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x266c28a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266c2950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c2a00 = dag->getSetCC(dl, MVT::i32, node0x266c28a0, node0x266c2950, ISD::SETULE);
SDValue node0x266c2ad0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x266c2a00, node0x266c2610);
roots.reserve(1);
roots.push_back(node0x266c2ad0);
dag->setRoot(node0x266c2ad0);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x266c34e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x266c3770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266c3820 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c38d0 = dag->getSetCC(dl, MVT::iAny, node0x266c3770, node0x266c3820, ISD::SETGT);
SDValue node0x266c39a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x266c38d0, node0x266c34e0);
roots.reserve(1);
roots.push_back(node0x266c39a0);
dag->setRoot(node0x266c39a0);
    } else     {
SDValue node0x266c34e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x266c3770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266c3820 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c38d0 = dag->getSetCC(dl, MVT::i32, node0x266c3770, node0x266c3820, ISD::SETGT);
SDValue node0x266c39a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x266c38d0, node0x266c34e0);
roots.reserve(1);
roots.push_back(node0x266c39a0);
dag->setRoot(node0x266c39a0);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x266c43b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x266c4640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266c46f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c47a0 = dag->getSetCC(dl, MVT::iAny, node0x266c4640, node0x266c46f0, ISD::SETUGT);
SDValue node0x266c4870 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x266c47a0, node0x266c43b0);
roots.reserve(1);
roots.push_back(node0x266c4870);
dag->setRoot(node0x266c4870);
    } else     {
SDValue node0x266c43b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x266c4640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266c46f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c47a0 = dag->getSetCC(dl, MVT::i32, node0x266c4640, node0x266c46f0, ISD::SETUGT);
SDValue node0x266c4870 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x266c47a0, node0x266c43b0);
roots.reserve(1);
roots.push_back(node0x266c4870);
dag->setRoot(node0x266c4870);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__:
    {
SDValue node0x2658ef60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2658ec90 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2658ef60);
roots.reserve(1);
roots.push_back(node0x2658ec90);
dag->setRoot(node0x2658ec90);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_simple__:
    {
SDValue node0x26599520 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x26598c40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26599520, SDValue());
SDValue node0x26599890 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x265994f0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x26598c40, node0x26599890);
roots.reserve(2);
roots.push_back(node0x26598c40);
roots.push_back(node0x265994f0);
dag->setRoot(node0x265994f0);
    }
    break;
  case Codasip::i_auipc__opc_auipc__regs__imm20_s12__:
    {
SDValue node0x2621ede0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x2621f0d0 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x2621f2f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2621f390 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2621ede0, node0x2621f2f0);
SDValue node0x2621f420 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2621f390, node0x2621f0d0);
SDValue node0x2621ed90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2621f420, SDValue());
roots.reserve(1);
roots.push_back(node0x2621ed90);
dag->setRoot(node0x2621ed90);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_simple__:
    {
SDValue node0x265b5140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x261fb900 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265b5140, SDValue());
roots.reserve(1);
roots.push_back(node0x261fb900);
dag->setRoot(node0x261fb900);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__:
    {
SDValue node0x24064620 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x261fdca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x261fdd40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x24064620, node0x261fdca0);
SDValue node0x265b7e40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x261fdd40, SDValue());
roots.reserve(1);
roots.push_back(node0x265b7e40);
dag->setRoot(node0x265b7e40);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_simple__:
    {
SDValue node0x266f6600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266f66b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x266f6750 = dag->getNode(ISD::AND, dl, MVT::i32, node0x266f6600, node0x266f66b0);
SDValue node0x266f5140 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266f6750, SDValue());
roots.reserve(1);
roots.push_back(node0x266f5140);
dag->setRoot(node0x266f5140);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_simple__:
    {
SDValue node0x267014e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26700370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x267014e0, SDValue());
roots.reserve(1);
roots.push_back(node0x26700370);
dag->setRoot(node0x26700370);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_simple__:
    {
SDValue node0x26705680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26705730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x267057d0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x26705680, node0x26705730);
SDValue node0x267041d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x267057d0, SDValue());
roots.reserve(1);
roots.push_back(node0x267041d0);
dag->setRoot(node0x267041d0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__:
    {
SDValue node0x2402fa10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2402faf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2402fb90 = dag->getSetCC(dl, MVT::i32, node0x2402faf0, node0x2402fa10, ISD::SETGT);
SDValue node0x2402e730 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2402fb90, SDValue());
roots.reserve(1);
roots.push_back(node0x2402e730);
dag->setRoot(node0x2402e730);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:
    {
SDValue node0x24034030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x240340e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24034180 = dag->getSetCC(dl, MVT::i32, node0x24034030, node0x240340e0, ISD::SETLT);
SDValue node0x24032a20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24034180, SDValue());
roots.reserve(1);
roots.push_back(node0x24032a20);
dag->setRoot(node0x24032a20);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__:
    {
SDValue node0x2403f650 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2403f730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2403f7d0 = dag->getSetCC(dl, MVT::i32, node0x2403f730, node0x2403f650, ISD::SETNE);
SDValue node0x2403e370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2403f7d0, SDValue());
roots.reserve(1);
roots.push_back(node0x2403e370);
dag->setRoot(node0x2403e370);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:
    {
SDValue node0x24043c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24043d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24043dc0 = dag->getSetCC(dl, MVT::i32, node0x24043c70, node0x24043d20, ISD::SETULT);
SDValue node0x24042660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24043dc0, SDValue());
roots.reserve(1);
roots.push_back(node0x24042660);
dag->setRoot(node0x24042660);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_simple__:
    {
SDValue node0x2404ef80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2404dd70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2404ef80, SDValue());
roots.reserve(1);
roots.push_back(node0x2404dd70);
dag->setRoot(node0x2404dd70);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:
    {
SDValue node0x24053260 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24053310 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x240533b0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x24053260, node0x24053310);
SDValue node0x24051d10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x240533b0, SDValue());
roots.reserve(1);
roots.push_back(node0x24051d10);
dag->setRoot(node0x24051d10);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_slli__regs__regs__shift_imm__:
    {
SDValue node0x24058120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x240581d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24058270 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x24058120, node0x240581d0);
SDValue node0x24057c70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24058270, SDValue());
roots.reserve(1);
roots.push_back(node0x24057c70);
dag->setRoot(node0x24057c70);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_srai__regs__regs__shift_imm__:
    {
SDValue node0x2405d240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2405d2f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2405d390 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x2405d240, node0x2405d2f0);
SDValue node0x2405cd90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2405d390, SDValue());
roots.reserve(1);
roots.push_back(node0x2405cd90);
dag->setRoot(node0x2405cd90);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_srli__regs__regs__shift_imm__:
    {
SDValue node0x24062360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24062410 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x240624b0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x24062360, node0x24062410);
SDValue node0x24061eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x240624b0, SDValue());
roots.reserve(1);
roots.push_back(node0x24061eb0);
dag->setRoot(node0x24061eb0);
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
SDValue node0x23fceb10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x23fcccc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fceb10, SDValue());
roots.reserve(1);
roots.push_back(node0x23fcccc0);
dag->setRoot(node0x23fcccc0);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__reg0__regs__:
    {
SDValue node0x23fcfd00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23fced00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fcfd00, SDValue());
roots.reserve(1);
roots.push_back(node0x23fced00);
dag->setRoot(node0x23fced00);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__regs__reg0__:
    {
SDValue node0x23fd1d60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23fcfe90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fd1d60, SDValue());
roots.reserve(1);
roots.push_back(node0x23fcfe90);
dag->setRoot(node0x23fcfe90);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__regs__regs__:
    {
SDValue node0x23fd3090 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23fd3140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x23fd31f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x23fd3090, node0x23fd3140);
SDValue node0x23fd2da0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fd31f0, SDValue());
roots.reserve(1);
roots.push_back(node0x23fd2da0);
dag->setRoot(node0x23fd2da0);
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
SDValue node0x23fdb500 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x23fd96b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fdb500, SDValue());
roots.reserve(1);
roots.push_back(node0x23fd96b0);
dag->setRoot(node0x23fd96b0);
    }
    break;
  case Codasip::i_comp_3reg__opc_and__regs__regs__regs__:
    {
SDValue node0x23fdf790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23fdf840 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x23fdf8f0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x23fdf790, node0x23fdf840);
SDValue node0x23fde5f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fdf8f0, SDValue());
roots.reserve(1);
roots.push_back(node0x23fde5f0);
dag->setRoot(node0x23fde5f0);
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
SDValue node0x23fe7d80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x23fe5f30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fe7d80, SDValue());
roots.reserve(1);
roots.push_back(node0x23fe5f30);
dag->setRoot(node0x23fe5f30);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__reg0__regs__:
    {
SDValue node0x23fe8fd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23fe7f70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fe8fd0, SDValue());
roots.reserve(1);
roots.push_back(node0x23fe7f70);
dag->setRoot(node0x23fe7f70);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__regs__reg0__:
    {
SDValue node0x23feb090 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23fe9160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23feb090, SDValue());
roots.reserve(1);
roots.push_back(node0x23fe9160);
dag->setRoot(node0x23fe9160);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__regs__regs__:
    {
SDValue node0x23fec3d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23fec480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x23fec530 = dag->getNode(ISD::OR, dl, MVT::i32, node0x23fec3d0, node0x23fec480);
SDValue node0x23feb220 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23fec530, SDValue());
roots.reserve(1);
roots.push_back(node0x23feb220);
dag->setRoot(node0x23feb220);
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
SDValue node0x23ff48a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x23ff2a50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23ff48a0, SDValue());
roots.reserve(1);
roots.push_back(node0x23ff2a50);
dag->setRoot(node0x23ff2a50);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__reg0__:
    {
SDValue node0x23ff79a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23ff5a80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23ff79a0, SDValue());
roots.reserve(1);
roots.push_back(node0x23ff5a80);
dag->setRoot(node0x23ff5a80);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__regs__:
    {
SDValue node0x23ff8d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x23ff8dd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x23ff8f10 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x23ff8d20, node0x23ff8dd0);
SDValue node0x23ff7b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x23ff8f10, SDValue());
roots.reserve(1);
roots.push_back(node0x23ff7b30);
dag->setRoot(node0x23ff7b30);
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
SDValue node0x24001250 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x23fff400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24001250, SDValue());
roots.reserve(1);
roots.push_back(node0x23fff400);
dag->setRoot(node0x23fff400);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__reg0__regs__:
    {
SDValue node0x240022c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x24002440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x240024f0 = dag->getSetCC(dl, MVT::i32, node0x24002440, node0x240022c0, ISD::SETGT);
SDValue node0x24001440 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x240024f0, SDValue());
roots.reserve(1);
roots.push_back(node0x24001440);
dag->setRoot(node0x24001440);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__reg0__:
    {
SDValue node0x240044a0 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x240046c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24004770 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x240046c0, node0x240044a0);
SDValue node0x24002810 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24004770, SDValue());
roots.reserve(1);
roots.push_back(node0x24002810);
dag->setRoot(node0x24002810);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__regs__:
    {
SDValue node0x24005a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24005b10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24005bc0 = dag->getSetCC(dl, MVT::i32, node0x24005a60, node0x24005b10, ISD::SETLT);
SDValue node0x24004980 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24005bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x24004980);
dag->setRoot(node0x24004980);
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
SDValue node0x2643eda0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2643d0b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2643eda0, SDValue());
roots.reserve(1);
roots.push_back(node0x2643d0b0);
dag->setRoot(node0x2643d0b0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__reg0__regs__:
    {
SDValue node0x2643fe10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2643ff90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26440040 = dag->getSetCC(dl, MVT::i32, node0x2643ff90, node0x2643fe10, ISD::SETNE);
SDValue node0x2643ef90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26440040, SDValue());
roots.reserve(1);
roots.push_back(node0x2643ef90);
dag->setRoot(node0x2643ef90);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__:
    {
SDValue node0x26443290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26443340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264433f0 = dag->getSetCC(dl, MVT::i32, node0x26443290, node0x26443340, ISD::SETULT);
SDValue node0x264420f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264433f0, SDValue());
roots.reserve(1);
roots.push_back(node0x264420f0);
dag->setRoot(node0x264420f0);
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
SDValue node0x2644b7c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26449970 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2644b7c0, SDValue());
roots.reserve(1);
roots.push_back(node0x26449970);
dag->setRoot(node0x26449970);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__reg0__:
    {
SDValue node0x2644e8c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2644c9a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2644e8c0, SDValue());
roots.reserve(1);
roots.push_back(node0x2644c9a0);
dag->setRoot(node0x2644c9a0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__regs__:
    {
SDValue node0x2644fc40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2644fcf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2644fe30 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x2644fc40, node0x2644fcf0);
SDValue node0x2644ea50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2644fe30, SDValue());
roots.reserve(1);
roots.push_back(node0x2644ea50);
dag->setRoot(node0x2644ea50);
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
SDValue node0x26458170 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26456320 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26458170, SDValue());
roots.reserve(1);
roots.push_back(node0x26456320);
dag->setRoot(node0x26456320);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__reg0__:
    {
SDValue node0x2645b270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26459350 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2645b270, SDValue());
roots.reserve(1);
roots.push_back(node0x26459350);
dag->setRoot(node0x26459350);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__regs__:
    {
SDValue node0x2645c5f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2645c6a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2645c7e0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x2645c5f0, node0x2645c6a0);
SDValue node0x2645b400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2645c7e0, SDValue());
roots.reserve(1);
roots.push_back(node0x2645b400);
dag->setRoot(node0x2645b400);
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
SDValue node0x26464b20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26462cd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26464b20, SDValue());
roots.reserve(1);
roots.push_back(node0x26462cd0);
dag->setRoot(node0x26462cd0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__reg0__regs__:
    {
SDValue node0x26465b10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26465d10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26465dc0 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x26465b10, node0x26465d10);
SDValue node0x26464d10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26465dc0, SDValue());
roots.reserve(1);
roots.push_back(node0x26464d10);
dag->setRoot(node0x26464d10);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__regs__reg0__:
    {
SDValue node0x26467e30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26465fd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26467e30, SDValue());
roots.reserve(1);
roots.push_back(node0x26465fd0);
dag->setRoot(node0x26465fd0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__regs__regs__:
    {
SDValue node0x26469110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264691c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26469270 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x26469110, node0x264691c0);
SDValue node0x26467fc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26469270, SDValue());
roots.reserve(1);
roots.push_back(node0x26467fc0);
dag->setRoot(node0x26467fc0);
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
SDValue node0x26471580 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2646f730 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26471580, SDValue());
roots.reserve(1);
roots.push_back(node0x2646f730);
dag->setRoot(node0x2646f730);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__reg0__regs__:
    {
SDValue node0x26472770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26471770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26472770, SDValue());
roots.reserve(1);
roots.push_back(node0x26471770);
dag->setRoot(node0x26471770);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__regs__reg0__:
    {
SDValue node0x264747d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26472900 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264747d0, SDValue());
roots.reserve(1);
roots.push_back(node0x26472900);
dag->setRoot(node0x26472900);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__regs__regs__:
    {
SDValue node0x26475ab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26475b60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26475c10 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x26475ab0, node0x26475b60);
SDValue node0x26474960 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26475c10, SDValue());
roots.reserve(1);
roots.push_back(node0x26474960);
dag->setRoot(node0x26474960);
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
SDValue node0x265c0650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265adb90 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265c0650, mpi, MVT::i8, 1);
SDValue node0x265bf9d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265adb90, SDValue());
roots.reserve(1);
roots.push_back(node0x265bf9d0);
dag->setRoot(node0x265bf9d0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__:
    {
SDValue node0x265c1970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265c1a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265c1ac0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265c1970, node0x265c1a20);
SDValue node0x265ac920 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265c1ac0, mpi, MVT::i8, 1);
SDValue node0x265bf890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265ac920, SDValue());
roots.reserve(1);
roots.push_back(node0x265bf890);
dag->setRoot(node0x265bf890);
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
SDValue node0x265d21c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265c7e90 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265d21c0, mpi, MVT::i8, 1);
SDValue node0x265d1540 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265c7e90, SDValue());
roots.reserve(1);
roots.push_back(node0x265d1540);
dag->setRoot(node0x265d1540);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__:
    {
SDValue node0x265d34e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265d3590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265d3630 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265d34e0, node0x265d3590);
SDValue node0x265c6c20 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265d3630, mpi, MVT::i8, 1);
SDValue node0x265d1400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265c6c20, SDValue());
roots.reserve(1);
roots.push_back(node0x265d1400);
dag->setRoot(node0x265d1400);
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
SDValue node0x265e3d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265d9a00 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265e3d30, mpi, MVT::i16, 1);
SDValue node0x265e30b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265d9a00, SDValue());
roots.reserve(1);
roots.push_back(node0x265e30b0);
dag->setRoot(node0x265e30b0);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__:
    {
SDValue node0x265e5050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265e5100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265e51a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265e5050, node0x265e5100);
SDValue node0x265d8790 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265e51a0, mpi, MVT::i16, 1);
SDValue node0x265e2f70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265d8790, SDValue());
roots.reserve(1);
roots.push_back(node0x265e2f70);
dag->setRoot(node0x265e2f70);
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
SDValue node0x265f58a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265eb570 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265f58a0, mpi, MVT::i16, 1);
SDValue node0x265f4c20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265eb570, SDValue());
roots.reserve(1);
roots.push_back(node0x265f4c20);
dag->setRoot(node0x265f4c20);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__:
    {
SDValue node0x265f6bc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265f6c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265f6d10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265f6bc0, node0x265f6c70);
SDValue node0x265ea300 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265f6d10, mpi, MVT::i16, 1);
SDValue node0x265f4ae0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265ea300, SDValue());
roots.reserve(1);
roots.push_back(node0x265f4ae0);
dag->setRoot(node0x265f4ae0);
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
SDValue node0x26607100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266071a0 = dag->getLoad(MVT::i32, dl, entry, node0x26607100, mpi, 1);
SDValue node0x266064d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266071a0, SDValue());
roots.reserve(1);
roots.push_back(node0x266064d0);
dag->setRoot(node0x266064d0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__:
    {
SDValue node0x266083c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26608470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26608510 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x266083c0, node0x26608470);
SDValue node0x266085a0 = dag->getLoad(MVT::i32, dl, entry, node0x26608510, mpi, 1);
SDValue node0x266063e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266085a0, SDValue());
roots.reserve(1);
roots.push_back(node0x266063e0);
dag->setRoot(node0x266063e0);
    }
    break;
  case Codasip::i_lui__opc_lui__regs__imm20_s12__:
    {
SDValue node0x26623c60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26623830 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26623c60, SDValue());
roots.reserve(1);
roots.push_back(node0x26623830);
dag->setRoot(node0x26623830);
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
SDValue node0x2662f6c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2662f670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2662f6c0, SDValue());
roots.reserve(1);
roots.push_back(node0x2662f670);
dag->setRoot(node0x2662f670);
    }
    break;
  case Codasip::i_neg_alias__regs__regs__:
    {
SDValue node0x26630550 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26630750 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26630800 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x26630550, node0x26630750);
SDValue node0x26630500 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26630800, SDValue());
roots.reserve(1);
roots.push_back(node0x26630500);
dag->setRoot(node0x26630500);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__:
    {
SDValue node0x2665b710 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x2665b9b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2665ba50 = dag->getStore(entry, dl, node0x2665b710, node0x2665b9b0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2665ba50);
dag->setRoot(node0x2665ba50);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__:
    {
SDValue node0x2665c6e0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x2665ca20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2665cad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2665cb70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2665ca20, node0x2665cad0);
SDValue node0x2665cc00 = dag->getStore(entry, dl, node0x2665c6e0, node0x2665cb70, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2665cc00);
dag->setRoot(node0x2665cc00);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__reg0__:
    {
SDValue node0x26667a10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26667ac0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2624dab0 = dag->getTruncStore(entry, dl, node0x26667a10, node0x26667ac0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x2624dab0);
dag->setRoot(node0x2624dab0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__regs__:
    {
SDValue node0x26668d90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26668e40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26668ef0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26669040 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26668e40, node0x26668ef0);
SDValue node0x26667c10 = dag->getTruncStore(entry, dl, node0x26668d90, node0x26669040, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x26667c10);
dag->setRoot(node0x26667c10);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__:
    {
SDValue node0x2666e4f0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2666e790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2666e830 = dag->getStore(entry, dl, node0x2666e4f0, node0x2666e790, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2666e830);
dag->setRoot(node0x2666e830);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__:
    {
SDValue node0x2666f6b0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2666f9f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2666faa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2666fb40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2666f9f0, node0x2666faa0);
SDValue node0x2666fbd0 = dag->getStore(entry, dl, node0x2666f6b0, node0x2666fb40, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2666fbd0);
dag->setRoot(node0x2666fbd0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__reg0__:
    {
SDValue node0x2667a9e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2667aa90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2624e010 = dag->getTruncStore(entry, dl, node0x2667a9e0, node0x2667aa90, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x2624e010);
dag->setRoot(node0x2624e010);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__regs__:
    {
SDValue node0x2667bd60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2667be10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2667bec0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2667c010 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2667be10, node0x2667bec0);
SDValue node0x2667abe0 = dag->getTruncStore(entry, dl, node0x2667bd60, node0x2667c010, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x2667abe0);
dag->setRoot(node0x2667abe0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__reg0__:
    {
SDValue node0x26681240 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26681440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266814e0 = dag->getStore(entry, dl, node0x26681240, node0x26681440, mpi, 1);
roots.reserve(1);
roots.push_back(node0x266814e0);
dag->setRoot(node0x266814e0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__regs__:
    {
SDValue node0x26682360 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x26682600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266826b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26682750 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26682600, node0x266826b0);
SDValue node0x266827e0 = dag->getStore(entry, dl, node0x26682360, node0x26682750, mpi, 1);
roots.reserve(1);
roots.push_back(node0x266827e0);
dag->setRoot(node0x266827e0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__reg0__:
    {
SDValue node0x2668d2e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2668d390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2668d430 = dag->getStore(entry, dl, node0x2668d2e0, node0x2668d390, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2668d430);
dag->setRoot(node0x2668d430);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__:
    {
SDValue node0x2668e600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2668e6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2668e760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2668e800 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2668e6b0, node0x2668e760);
SDValue node0x2668e890 = dag->getStore(entry, dl, node0x2668e600, node0x2668e800, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2668e890);
dag->setRoot(node0x2668e890);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:
    {
SDValue node0x266be930 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x266be710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266be930, SDValue());
roots.reserve(1);
roots.push_back(node0x266be710);
dag->setRoot(node0x266be710);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:
    {
SDValue node0x266be470 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x265af530 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266be470, SDValue());
roots.reserve(1);
roots.push_back(node0x265af530);
dag->setRoot(node0x265af530);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:
    {
SDValue node0x266bf830 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x266beec0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266bf830, SDValue());
roots.reserve(1);
roots.push_back(node0x266beec0);
dag->setRoot(node0x266beec0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:
    {
SDValue node0x266bf090 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x266be7c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266bf090, SDValue());
roots.reserve(1);
roots.push_back(node0x266be7c0);
dag->setRoot(node0x266be7c0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x2659cf50 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x265f48d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2659cd60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2667ab30 = dag->getNode(ISD::AND, dl, MVT::i32, node0x2659cd60, node0x2659cf50);
SDValue node0x26668f90 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x265f48d0, node0x2667ab30);
SDValue node0x2624c320 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26668f90, SDValue());
roots.reserve(1);
roots.push_back(node0x2624c320);
dag->setRoot(node0x2624c320);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__regs__swappedCmpClone0__:
    {
SDValue node0x266bd450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266bdd10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x266c00d0 = dag->getSetCC(dl, MVT::i32, node0x266bd450, node0x266bdd10, ISD::SETGT);
SDValue node0x266bfd60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266c00d0, SDValue());
roots.reserve(1);
roots.push_back(node0x266bfd60);
dag->setRoot(node0x266bfd60);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__swappedCmpClone0__:
    {
SDValue node0x266c0950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c0aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x266c0b50 = dag->getSetCC(dl, MVT::i32, node0x266c0950, node0x266c0aa0, ISD::SETUGT);
SDValue node0x266bf660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266c0b50, SDValue());
roots.reserve(1);
roots.push_back(node0x266bf660);
dag->setRoot(node0x266bf660);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x23ff8b00 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x2659baa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26591d90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x23ff8e80 = dag->getNode(ISD::AND, dl, MVT::i32, node0x26591d90, node0x23ff8b00);
SDValue node0x26667b60 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x2659baa0, node0x23ff8e80);
SDValue node0x26276390 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26667b60, SDValue());
roots.reserve(1);
roots.push_back(node0x26276390);
dag->setRoot(node0x26276390);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x2644fa20 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x26590d60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265fd0e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2644fda0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x265fd0e0, node0x2644fa20);
SDValue node0x26656620 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x26590d60, node0x2644fda0);
SDValue node0x26276d70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26656620, SDValue());
roots.reserve(1);
roots.push_back(node0x26276d70);
dag->setRoot(node0x26276d70);
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
SDValue node0x265a3450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265c06f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x265a3450, mpi, MVT::i8, 1);
SDValue node0x26246df0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265c06f0, SDValue());
roots.reserve(1);
roots.push_back(node0x26246df0);
dag->setRoot(node0x26246df0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x265c1b50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265c1630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265c1c20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265c1b50, node0x265c1630);
SDValue node0x26245820 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x265c1c20, mpi, MVT::i8, 1);
SDValue node0x26247900 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26245820, SDValue());
roots.reserve(1);
roots.push_back(node0x26247900);
dag->setRoot(node0x26247900);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d00d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c8e30 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x266d00d0, mpi, MVT::i8, 1);
SDValue node0x266cbdd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266c8e30, SDValue());
roots.reserve(1);
roots.push_back(node0x266cbdd0);
dag->setRoot(node0x266cbdd0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x266d0180 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c8370 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x266d0180, mpi, MVT::i8, 1);
SDValue node0x266c0700 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266c8370, SDValue());
roots.reserve(1);
roots.push_back(node0x266c0700);
dag->setRoot(node0x266c0700);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x265c6980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265d2260 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x265c6980, mpi, MVT::i8, 1);
SDValue node0x26248510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265d2260, SDValue());
roots.reserve(1);
roots.push_back(node0x26248510);
dag->setRoot(node0x26248510);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x265d36c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265d31a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265d3790 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265d36c0, node0x265d31a0);
SDValue node0x262458b0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x265d3790, mpi, MVT::i8, 1);
SDValue node0x26249020 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x262458b0, SDValue());
roots.reserve(1);
roots.push_back(node0x26249020);
dag->setRoot(node0x26249020);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d0a40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c7840 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x266d0a40, mpi, MVT::i8, 1);
SDValue node0x266cc8d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266c7840, SDValue());
roots.reserve(1);
roots.push_back(node0x266cc8d0);
dag->setRoot(node0x266cc8d0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x266d0af0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c6dc0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x266d0af0, mpi, MVT::i8, 1);
SDValue node0x266c1130 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266c6dc0, SDValue());
roots.reserve(1);
roots.push_back(node0x266c1130);
dag->setRoot(node0x266c1130);
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
SDValue node0x265d84f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265e3dd0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x265d84f0, mpi, MVT::i16, 1);
SDValue node0x26249c60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265e3dd0, SDValue());
roots.reserve(1);
roots.push_back(node0x26249c60);
dag->setRoot(node0x26249c60);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x265e5230 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265e4d10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265e5300 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265e5230, node0x265e4d10);
SDValue node0x2624a770 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x265e5300, mpi, MVT::i16, 1);
SDValue node0x2624a800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2624a770, SDValue());
roots.reserve(1);
roots.push_back(node0x2624a800);
dag->setRoot(node0x2624a800);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d1d10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266d14a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x266d1d10, mpi, MVT::i16, 1);
SDValue node0x266d0680 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266d14a0, SDValue());
roots.reserve(1);
roots.push_back(node0x266d0680);
dag->setRoot(node0x266d0680);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x266d1dc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c6d10 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x266d1dc0, mpi, MVT::i16, 1);
SDValue node0x26277140 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266c6d10, SDValue());
roots.reserve(1);
roots.push_back(node0x26277140);
dag->setRoot(node0x26277140);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x265ea060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265f5940 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x265ea060, mpi, MVT::i16, 1);
SDValue node0x2624b410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265f5940, SDValue());
roots.reserve(1);
roots.push_back(node0x2624b410);
dag->setRoot(node0x2624b410);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x265f6da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265f6880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265f6e70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265f6da0, node0x265f6880);
SDValue node0x2624bf20 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x265f6e70, mpi, MVT::i16, 1);
SDValue node0x2624bfb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2624bf20, SDValue());
roots.reserve(1);
roots.push_back(node0x2624bfb0);
dag->setRoot(node0x2624bfb0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d2680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c6120 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x266d2680, mpi, MVT::i16, 1);
SDValue node0x266cea30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266c6120, SDValue());
roots.reserve(1);
roots.push_back(node0x266cea30);
dag->setRoot(node0x266cea30);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x266d2730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265fbe70 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x266d2730, mpi, MVT::i16, 1);
SDValue node0x266c9df0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265fbe70, SDValue());
roots.reserve(1);
roots.push_back(node0x266c9df0);
dag->setRoot(node0x266c9df0);
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
SDValue node0x266d3950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266d3a00 = dag->getLoad(MVT::i32, dl, entry, node0x266d3950, mpi, 1);
SDValue node0x266d22c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266d3a00, SDValue());
roots.reserve(1);
roots.push_back(node0x266d22c0);
dag->setRoot(node0x266d22c0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d4060 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x266d4280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266d4000 = dag->getStore(entry, dl, node0x266d4060, node0x266d4280, mpi, 1);
roots.reserve(1);
roots.push_back(node0x266d4000);
dag->setRoot(node0x266d4000);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d4a70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266d4b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266c9ff0 = dag->getTruncStore(entry, dl, node0x266d4a70, node0x266d4b20, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x266c9ff0);
dag->setRoot(node0x266c9ff0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d51c0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x266d53e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266d5160 = dag->getStore(entry, dl, node0x266d51c0, node0x266d53e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x266d5160);
dag->setRoot(node0x266d5160);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d5c40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266d5cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266cca90 = dag->getTruncStore(entry, dl, node0x266d5c40, node0x266d5cf0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x266cca90);
dag->setRoot(node0x266cca90);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d6390 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x266d6510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266d6330 = dag->getStore(entry, dl, node0x266d6390, node0x266d6510, mpi, 1);
roots.reserve(1);
roots.push_back(node0x266d6330);
dag->setRoot(node0x266d6330);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x266d6d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266d6e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266d6bb0 = dag->getStore(entry, dl, node0x266d6d70, node0x266d6e20, mpi, 1);
roots.reserve(1);
roots.push_back(node0x266d6bb0);
dag->setRoot(node0x266d6bb0);
    }
    break;
  case Codasip::i_jal__opc_jal__reg0__rel_addr20__:
    {
SDValue node0x2658a470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2658a660 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2658a470);
roots.reserve(1);
roots.push_back(node0x2658a660);
dag->setRoot(node0x2658a660);
    }
    break;
  case Codasip::i_jal__opc_jal__regs__rel_addr20__:
    {
SDValue node0x2658b420 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x26589aa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2658b420, SDValue());
SDValue node0x2658b830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x2658ba20 = dag->getNode(ISD::BR, dl, MVT::Other, node0x26589aa0, node0x2658b830);
roots.reserve(2);
roots.push_back(node0x26589aa0);
roots.push_back(node0x2658ba20);
dag->setRoot(node0x2658ba20);
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
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__reg0__reg0__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__reg0__regs__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__reg0__regs__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__reg0__reg0__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__reg0__regs__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__reg0__regs__regs__:
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
SDValue node0x2650cf30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2650ce90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2650cf30, SDValue());
roots.reserve(1);
roots.push_back(node0x2650ce90);
dag->setRoot(node0x2650ce90);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__regs__:
    {
SDValue node0x2650e300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2650e060 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2650e300, SDValue());
roots.reserve(1);
roots.push_back(node0x2650e060);
dag->setRoot(node0x2650e060);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__:
    {
SDValue node0x265105a0 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x265107c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2650acd0 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x265107c0, node0x265105a0);
SDValue node0x26510480 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2650acd0, SDValue());
roots.reserve(1);
roots.push_back(node0x26510480);
dag->setRoot(node0x26510480);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__:
    {
SDValue node0x26511b50 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x26511d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26511e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26511ed0 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x26511e20, node0x26511b50);
SDValue node0x26511f60 = dag->getNode(ISD::OR, dl, MVT::i32, node0x26511d70, node0x26511ed0);
SDValue node0x26511990 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26511f60, SDValue());
roots.reserve(1);
roots.push_back(node0x26511990);
dag->setRoot(node0x26511990);
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
SDValue node0x2651b3a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2651b300 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2651b3a0, SDValue());
roots.reserve(1);
roots.push_back(node0x2651b300);
dag->setRoot(node0x2651b300);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__:
    {
SDValue node0x2651c5f0 = dag->getConstant(65535LL, dl, MVT::i32);
SDValue node0x2651c690 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x2651c8b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26519140 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x2651c8b0, node0x2651c690);
SDValue node0x2651c980 = dag->getNode(ISD::AND, dl, MVT::i32, node0x2651c8b0, node0x2651c5f0);
SDValue node0x2651ca40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2651c980, node0x26519140);
SDValue node0x2651c4d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2651ca40, SDValue());
roots.reserve(1);
roots.push_back(node0x2651c4d0);
dag->setRoot(node0x2651c4d0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__reg0__:
    {
SDValue node0x2651ed20 = dag->getConstant(65535LL, dl, MVT::i32);
SDValue node0x2651edc0 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x2651efe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2651f090 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x2651efe0, node0x2651edc0);
SDValue node0x2651f120 = dag->getNode(ISD::AND, dl, MVT::i32, node0x2651efe0, node0x2651ed20);
SDValue node0x2651f1e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2651f120, node0x2651f090);
SDValue node0x2651ec00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2651f1e0, SDValue());
roots.reserve(1);
roots.push_back(node0x2651ec00);
dag->setRoot(node0x2651ec00);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:
    {
SDValue node0x26520510 = dag->getConstant(65535LL, dl, MVT::i32);
SDValue node0x265205b0 = dag->getConstant(16LL, dl, MVT::i32);
SDValue node0x26520870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26520920 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265209d0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x26520870, node0x265205b0);
SDValue node0x26520a60 = dag->getNode(ISD::AND, dl, MVT::i32, node0x26520870, node0x26520510);
SDValue node0x26520b20 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x26520920, node0x265205b0);
SDValue node0x26520be0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x26520920, node0x26520510);
SDValue node0x26520ca0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26520a60, node0x265209d0);
SDValue node0x26520d60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26520ca0, node0x26520be0);
SDValue node0x26520e20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26520d60, node0x26520b20);
SDValue node0x2651fba0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26520e20, SDValue());
roots.reserve(1);
roots.push_back(node0x2651fba0);
dag->setRoot(node0x2651fba0);
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
SDValue node0x26645370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26644410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26645370, SDValue());
roots.reserve(1);
roots.push_back(node0x26644410);
dag->setRoot(node0x26644410);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_simple__:
    {
SDValue node0x26647930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266479e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26647a80 = dag->getNode(ISD::OR, dl, MVT::i32, node0x26647930, node0x266479e0);
SDValue node0x266466f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26647a80, SDValue());
roots.reserve(1);
roots.push_back(node0x266466f0);
dag->setRoot(node0x266466f0);
    }
    break;
  case Codasip::i_xret__opc_mret__:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__reg0__reg0__AEXT_CLONE_:
    {
SDValue node0x2621f210 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2621f170 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x2621f030 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x2621ef90 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x2621eef0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264d1140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264d1070 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2621f210, mpi, MVT::i8, 1);
SDValue node0x264d0fa0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2621f210, mpi, MVT::i8, 1);
SDValue node0x2402fc30 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d0fa0, node0x264d1070);
SDValue node0x264d0ed0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2621f170, mpi, MVT::i8, 1);
SDValue node0x2673ce40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2402fc30, node0x2621eef0);
SDValue node0x264d0e00 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2621f170, mpi, MVT::i8, 1);
SDValue node0x2673ced0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2673ce40);
SDValue node0x2673cf60 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d0e00, node0x264d0ed0);
SDValue node0x264d0b20 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2621f030, mpi, MVT::i8, 1);
SDValue node0x2673c080 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264d1140, node0x2673ced0);
SDValue node0x265b4080 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2673cf60, node0x2621eef0);
SDValue node0x264cf850 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2621f030, mpi, MVT::i8, 1);
SDValue node0x266d9870 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x265b4080);
SDValue node0x264dc0d0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264cf850, node0x264d0b20);
SDValue node0x264d12e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2621ef90, mpi, MVT::i8, 1);
SDValue node0x264d87b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2673c080, node0x266d9870);
SDValue node0x264db0a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264dc0d0, node0x2621eef0);
SDValue node0x264d3c80 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2621ef90, mpi, MVT::i8, 1);
SDValue node0x264db2b0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264db0a0);
SDValue node0x264db4f0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d3c80, node0x264d12e0);
SDValue node0x264db7e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264d87b0, node0x264db2b0);
SDValue node0x264dbae0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264db4f0, node0x2621eef0);
SDValue node0x264dbdd0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264dbae0);
SDValue node0x264d57d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264db7e0, node0x264dbdd0);
SDValue node0x26225aa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264d57d0, SDValue());
roots.reserve(1);
roots.push_back(node0x26225aa0);
dag->setRoot(node0x26225aa0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__reg0__regs__AEXT_CLONE_:
    {
SDValue node0x264de420 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264de100 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x266dab20 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264dad10 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264d3360 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264de5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264d5bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264d5b00 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264de420, mpi, MVT::i8, 1);
SDValue node0x264de730 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264d5bd0, node0x264dad10);
SDValue node0x264d36e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264d5bd0, node0x266dab20);
SDValue node0x264d5370 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264d5bd0, node0x264de100);
SDValue node0x264d5a30 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d5bd0, mpi, MVT::i8, 1);
SDValue node0x264d5400 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d5a30, node0x264d5b00);
SDValue node0x264d5960 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264de100, mpi, MVT::i8, 1);
SDValue node0x264d54c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264d5400, node0x264d3360);
SDValue node0x264d5890 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d5370, mpi, MVT::i8, 1);
SDValue node0x264d5650 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264d54c0);
SDValue node0x264d5710 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d5890, node0x264d5960);
SDValue node0x264d5580 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x266dab20, mpi, MVT::i8, 1);
SDValue node0x264dfb20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264de5b0, node0x264d5650);
SDValue node0x264d3590 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264d5710, node0x264d3360);
SDValue node0x264d5d70 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d36e0, mpi, MVT::i8, 1);
SDValue node0x264deac0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264d3590);
SDValue node0x264ded00 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d5d70, node0x264d5580);
SDValue node0x264dbb90 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264dad10, mpi, MVT::i8, 1);
SDValue node0x264def40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264dfb20, node0x264deac0);
SDValue node0x264df230 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264ded00, node0x264d3360);
SDValue node0x264db890 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264de730, mpi, MVT::i8, 1);
SDValue node0x264df530 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264df230);
SDValue node0x264df820 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264db890, node0x264dbb90);
SDValue node0x264d0d40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264def40, node0x264df530);
SDValue node0x2649b3f0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264df820, node0x264d3360);
SDValue node0x2649ae30 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2649b3f0);
SDValue node0x2649d050 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264d0d40, node0x2649ae30);
SDValue node0x2622fe10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2649d050, SDValue());
roots.reserve(1);
roots.push_back(node0x2622fe10);
dag->setRoot(node0x2622fe10);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__regs__reg0__AEXT_CLONE_:
    {
SDValue node0x264e2340 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264e1fa0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264d4ed0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264d4f50 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264d4ff0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264e2910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264e2790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264e2c20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e2910, node0x264d4f50);
SDValue node0x264e29e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e2910, node0x264d4ed0);
SDValue node0x264e2860 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e2910, node0x264e1fa0);
SDValue node0x264df2e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e2910, mpi, MVT::i8, 1);
SDValue node0x264deff0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e2340, mpi, MVT::i8, 1);
SDValue node0x2649cf90 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264deff0, node0x264df2e0);
SDValue node0x264dedb0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e2860, mpi, MVT::i8, 1);
SDValue node0x2649c880 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2649cf90, node0x264d4ff0);
SDValue node0x264deb70 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e1fa0, mpi, MVT::i8, 1);
SDValue node0x264d0bf0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2649c880);
SDValue node0x264d0c80 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264deb70, node0x264dedb0);
SDValue node0x264de9f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e29e0, mpi, MVT::i8, 1);
SDValue node0x264e3a40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e2790, node0x264d0bf0);
SDValue node0x26498a00 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264d0c80, node0x264d4ff0);
SDValue node0x264e2a90 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d4ed0, mpi, MVT::i8, 1);
SDValue node0x26498440 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x26498a00);
SDValue node0x2649b4b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264e2a90, node0x264de9f0);
SDValue node0x264e37f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e2c20, mpi, MVT::i8, 1);
SDValue node0x264e2e60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e3a40, node0x26498440);
SDValue node0x264e3150 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2649b4b0, node0x264d4ff0);
SDValue node0x264e3500 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d4f50, mpi, MVT::i8, 1);
SDValue node0x264e3450 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264e3150);
SDValue node0x264e3740 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264e3500, node0x264e37f0);
SDValue node0x26498ac0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e2e60, node0x264e3450);
SDValue node0x26490370 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e3740, node0x264d4ff0);
SDValue node0x26492c20 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x26490370);
SDValue node0x26492b60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26498ac0, node0x26492c20);
SDValue node0x26231b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26492b60, SDValue());
roots.reserve(1);
roots.push_back(node0x26231b30);
dag->setRoot(node0x26231b30);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__regs__regs__AEXT_CLONE_:
    {
SDValue node0x264e5850 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264e5530 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264e54b0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264d5130 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264e6d00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x264e6a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264e6710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264e6420 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6d00, node0x264e54b0);
SDValue node0x264e61e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6d00, node0x264e5530);
SDValue node0x264e6060 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6d00, node0x264e5850);
SDValue node0x264925a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6710, node0x264e54b0);
SDValue node0x26496940 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6710, node0x264e5530);
SDValue node0x26496880 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6710, node0x264e5850);
SDValue node0x264e64d0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e6d00, mpi, MVT::i8, 1);
SDValue node0x264e6290 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e6710, mpi, MVT::i8, 1);
SDValue node0x26496170 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264e6290, node0x264e64d0);
SDValue node0x264e6110 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e6060, mpi, MVT::i8, 1);
SDValue node0x264e7240 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26496170, node0x264d5130);
SDValue node0x264e5d50 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26496880, mpi, MVT::i8, 1);
SDValue node0x2648e920 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264e7240);
SDValue node0x26490b40 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264e5d50, node0x264e6110);
SDValue node0x264e6ff0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e61e0, mpi, MVT::i8, 1);
SDValue node0x26490a80 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6a00, node0x2648e920);
SDValue node0x264e6660 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26490b40, node0x264d5130);
SDValue node0x26233c50 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26496940, mpi, MVT::i8, 1);
SDValue node0x264e6950 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264e6660);
SDValue node0x264e6c50 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26233c50, node0x264e6ff0);
SDValue node0x26233d10 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264e6420, mpi, MVT::i8, 1);
SDValue node0x264e6f40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26490a80, node0x264e6950);
SDValue node0x2648eee0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e6c50, node0x264d5130);
SDValue node0x26233e00 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264925a0, mpi, MVT::i8, 1);
SDValue node0x2648a480 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2648eee0);
SDValue node0x2648a3c0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26233e00, node0x26233d10);
SDValue node0x26489cb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6f40, node0x2648a480);
SDValue node0x2648c5b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2648a3c0, node0x264d5130);
SDValue node0x2648c4f0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2648c5b0);
SDValue node0x2648bf30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26489cb0, node0x2648c4f0);
SDValue node0x26233f50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2648bf30, SDValue());
roots.reserve(1);
roots.push_back(node0x26233f50);
dag->setRoot(node0x26233f50);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__reg0__reg0__AEXT_CLONE_:
    {
SDValue node0x264cf100 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264cf1a0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264d07d0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264d0850 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264d08f0 = dag->getConstant(15LL, dl, MVT::i16);
SDValue node0x264d0990 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264f46f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264f4270 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264cf100, mpi, MVT::i8, 1);
SDValue node0x264ebf10 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f4270, node0x264d08f0);
SDValue node0x264f3eb0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264cf100, mpi, MVT::i8, 1);
SDValue node0x264ebe50 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f4270, node0x264ebf10);
SDValue node0x264ebdc0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f3eb0, node0x264d08f0);
SDValue node0x264f3af0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264cf1a0, mpi, MVT::i8, 1);
SDValue node0x264e9cf0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264ebe50, node0x264ebf10);
SDValue node0x264e9c30 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f3eb0, node0x264ebdc0);
SDValue node0x264e9ba0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f3af0, node0x264d08f0);
SDValue node0x264f37f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264cf1a0, mpi, MVT::i8, 1);
SDValue node0x2648efa0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264e9c30, node0x264ebdc0);
SDValue node0x264f4ff0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f3af0, node0x264e9ba0);
SDValue node0x264f0d40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f37f0, node0x264d08f0);
SDValue node0x264f35e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d07d0, mpi, MVT::i8, 1);
SDValue node0x264f3740 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x2648efa0, node0x264e9cf0);
SDValue node0x264f3a40 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f4ff0, node0x264e9ba0);
SDValue node0x264f3e00 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f37f0, node0x264f0d40);
SDValue node0x264f41c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f35e0, node0x264d08f0);
SDValue node0x264f34d0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d07d0, mpi, MVT::i8, 1);
SDValue node0x264f4640 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264f3740, node0x264d0990);
SDValue node0x264f4ac0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f3e00, node0x264f0d40);
SDValue node0x264edc90 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f35e0, node0x264f41c0);
SDValue node0x26488870 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f34d0, node0x264d08f0);
SDValue node0x264f4b70 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d0850, mpi, MVT::i8, 1);
SDValue node0x26488930 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264f4640);
SDValue node0x264ed830 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264f4ac0, node0x264f3a40);
SDValue node0x264ed8c0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264edc90, node0x264f41c0);
SDValue node0x264ed980 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f34d0, node0x26488870);
SDValue node0x264edb10 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f4b70, node0x264d08f0);
SDValue node0x262357a0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264d0850, mpi, MVT::i8, 1);
SDValue node0x264edbd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f46f0, node0x26488930);
SDValue node0x264887e0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264ed830, node0x264d0990);
SDValue node0x264846c0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264ed980, node0x26488870);
SDValue node0x264848c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f4b70, node0x264edb10);
SDValue node0x26484830 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x262357a0, node0x264d08f0);
SDValue node0x26485fb0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264887e0);
SDValue node0x26485ef0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264846c0, node0x264ed8c0);
SDValue node0x26485930 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264848c0, node0x264edb10);
SDValue node0x26488670 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x262357a0, node0x26484830);
SDValue node0x26484980 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264edbd0, node0x26485fb0);
SDValue node0x2647eb10 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x26485ef0, node0x264d0990);
SDValue node0x26481bd0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26488670, node0x26484830);
SDValue node0x26481b10 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2647eb10);
SDValue node0x264814b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26481bd0, node0x26485930);
SDValue node0x26483770 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26484980, node0x26481b10);
SDValue node0x264836b0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264814b0, node0x264d0990);
SDValue node0x26482fa0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x264836b0);
SDValue node0x2647f0d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26483770, node0x26482fa0);
SDValue node0x26235b00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2647f0d0, SDValue());
roots.reserve(1);
roots.push_back(node0x26235b00);
dag->setRoot(node0x26235b00);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__reg0__regs__AEXT_CLONE_:
    {
SDValue node0x264f84a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264f80e0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264f3340 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264ebb90 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264ebc30 = dag->getConstant(15LL, dl, MVT::i16);
SDValue node0x264ed390 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264f9bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264f9730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264f9370 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264f84a0, mpi, MVT::i8, 1);
SDValue node0x264f87b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f9730, node0x264ebb90);
SDValue node0x2647c180 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f9730, node0x264f3340);
SDValue node0x2647db60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f9730, node0x264f80e0);
SDValue node0x2647d8a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f9370, node0x264ebc30);
SDValue node0x264f8fb0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264f9730, mpi, MVT::i8, 1);
SDValue node0x2647daa0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f9370, node0x2647d8a0);
SDValue node0x2647da10 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f8fb0, node0x264ebc30);
SDValue node0x264f8cb0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264f80e0, mpi, MVT::i8, 1);
SDValue node0x2647f190 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x2647daa0, node0x2647d8a0);
SDValue node0x264fa4b0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f8fb0, node0x2647da10);
SDValue node0x2647c950 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f8cb0, node0x264ebc30);
SDValue node0x264f8a70 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2647db60, mpi, MVT::i8, 1);
SDValue node0x264f8c00 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fa4b0, node0x2647da10);
SDValue node0x264f8f00 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f8cb0, node0x2647c950);
SDValue node0x264f92c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f8a70, node0x264ebc30);
SDValue node0x264f8630 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264f3340, mpi, MVT::i8, 1);
SDValue node0x264f9680 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264f8c00, node0x2647f190);
SDValue node0x264f9b00 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f8f00, node0x2647c950);
SDValue node0x264f9f80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f8a70, node0x264f92c0);
SDValue node0x2647a730 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264f8630, node0x264ebc30);
SDValue node0x264fa030 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x2647c180, mpi, MVT::i8, 1);
SDValue node0x26476b90 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264f9680, node0x264ed390);
SDValue node0x26476b00 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f9f80, node0x264f92c0);
SDValue node0x26478410 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264f8630, node0x2647a730);
SDValue node0x26478350 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264fa030, node0x264ebc30);
SDValue node0x26238e50 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264ebb90, mpi, MVT::i8, 1);
SDValue node0x26477d90 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x26476b90);
SDValue node0x2647adb0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26476b00, node0x264f9b00);
SDValue node0x2647acf0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26478410, node0x2647a730);
SDValue node0x26476990 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264fa030, node0x26478350);
SDValue node0x2403f870 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26238e50, node0x264ebc30);
SDValue node0x26238fa0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264f87b0, mpi, MVT::i8, 1);
SDValue node0x24043e60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f9bb0, node0x26477d90);
SDValue node0x24002590 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x2647adb0, node0x264ed390);
SDValue node0x24005c60 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26476990, node0x26478350);
SDValue node0x24009400 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26238e50, node0x2403f870);
SDValue node0x26443490 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26238fa0, node0x264ebc30);
SDValue node0x26476c50 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x24002590);
SDValue node0x24034220 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x24005c60, node0x2647acf0);
SDValue node0x26239150 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x24009400, node0x2403f870);
SDValue node0x262391f0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26238fa0, node0x26443490);
SDValue node0x26239290 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x24043e60, node0x26476c50);
SDValue node0x26239330 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x24034220, node0x264ed390);
SDValue node0x262393d0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x262391f0, node0x26443490);
SDValue node0x26239470 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x26239330);
SDValue node0x262394e0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x262393d0, node0x26239150);
SDValue node0x26239580 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26239290, node0x26239470);
SDValue node0x26239620 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x262394e0, node0x264ed390);
SDValue node0x262396c0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x26239620);
SDValue node0x26239730 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26239580, node0x262396c0);
SDValue node0x262397d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26239730, SDValue());
roots.reserve(1);
roots.push_back(node0x262397d0);
dag->setRoot(node0x262397d0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__regs__reg0__AEXT_CLONE_:
    {
SDValue node0x264fd660 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264fd220 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264ed4b0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264ed550 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264ed5f0 = dag->getConstant(15LL, dl, MVT::i16);
SDValue node0x264ebaf0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264fed70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264fe8f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264ff140 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fed70, node0x264ed550);
SDValue node0x264fecc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fed70, node0x264ed4b0);
SDValue node0x264fe840 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fed70, node0x264fd220);
SDValue node0x264fe530 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264fed70, mpi, MVT::i8, 1);
SDValue node0x264fe480 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264fe530, node0x264ed5f0);
SDValue node0x264fe170 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264fd660, mpi, MVT::i8, 1);
SDValue node0x264fe0c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264fe530, node0x264fe480);
SDValue node0x264fddc0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264fe170, node0x264ed5f0);
SDValue node0x264fde70 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264fe840, mpi, MVT::i8, 1);
SDValue node0x264fdb80 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fe0c0, node0x264fe480);
SDValue node0x264ff670 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264fe170, node0x264fddc0);
SDValue node0x2623cac0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264fde70, node0x264ed5f0);
SDValue node0x264fdc30 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264fd220, mpi, MVT::i8, 1);
SDValue node0x2623cb60 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264ff670, node0x264fddc0);
SDValue node0x2623cc00 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264fde70, node0x2623cac0);
SDValue node0x2623cca0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264fdc30, node0x264ed5f0);
SDValue node0x264fdab0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264fecc0, mpi, MVT::i8, 1);
SDValue node0x2623cd40 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x2623cb60, node0x264fdb80);
SDValue node0x2623cde0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x2623cc00, node0x2623cac0);
SDValue node0x2623ce80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264fdc30, node0x2623cca0);
SDValue node0x2623cf20 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264fdab0, node0x264ed5f0);
SDValue node0x264ff1f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264ed4b0, mpi, MVT::i8, 1);
SDValue node0x2623cfc0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x2623cd40, node0x264ebaf0);
SDValue node0x2623d060 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x2623ce80, node0x2623cca0);
SDValue node0x2623d100 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264fdab0, node0x2623cf20);
SDValue node0x2623d1a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264ff1f0, node0x264ed5f0);
SDValue node0x2623d240 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264ff140, mpi, MVT::i8, 1);
SDValue node0x2623d2d0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2623cfc0);
SDValue node0x2623d340 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x2623d060, node0x2623cde0);
SDValue node0x2623d3e0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x2623d100, node0x2623cf20);
SDValue node0x2623d480 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264ff1f0, node0x2623d1a0);
SDValue node0x2623d520 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623d240, node0x264ed5f0);
SDValue node0x2623d5c0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x264ed550, mpi, MVT::i8, 1);
SDValue node0x2623d650 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fe8f0, node0x2623d2d0);
SDValue node0x2623d6f0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x2623d340, node0x264ebaf0);
SDValue node0x2623d790 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x2623d480, node0x2623d1a0);
SDValue node0x2623d830 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623d240, node0x2623d520);
SDValue node0x2623d8d0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623d5c0, node0x264ed5f0);
SDValue node0x2623d970 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2623d6f0);
SDValue node0x2623d9e0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x2623d790, node0x2623d3e0);
SDValue node0x2623da80 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x2623d830, node0x2623d520);
SDValue node0x2623db20 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623d5c0, node0x2623d8d0);
SDValue node0x2623dbc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2623d650, node0x2623d970);
SDValue node0x2623dc60 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x2623d9e0, node0x264ebaf0);
SDValue node0x2623dd00 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x2623db20, node0x2623d8d0);
SDValue node0x2623dda0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2623dc60);
SDValue node0x2623de10 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x2623dd00, node0x2623da80);
SDValue node0x2623deb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2623dbc0, node0x2623dda0);
SDValue node0x2623df50 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x2623de10, node0x264ebaf0);
SDValue node0x2623dff0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x2623df50);
SDValue node0x2623e060 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2623deb0, node0x2623dff0);
SDValue node0x2623e100 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2623e060, SDValue());
roots.reserve(1);
roots.push_back(node0x2623e100);
dag->setRoot(node0x2623e100);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__regs__regs__AEXT_CLONE_:
    {
SDValue node0x265019d0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264e8580 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264e9780 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264e9800 = dag->getConstant(15LL, dl, MVT::i16);
SDValue node0x264e98a0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x26503810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x26503390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26502fd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26503be0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26503810, node0x264e9780);
SDValue node0x26503760 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26503810, node0x264e8580);
SDValue node0x265032e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26503810, node0x265019d0);
SDValue node0x26502f20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26502fd0, node0x264e9780);
SDValue node0x26502b60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26502fd0, node0x264e8580);
SDValue node0x26502860 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26502fd0, node0x265019d0);
SDValue node0x26502c10 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26503810, mpi, MVT::i8, 1);
SDValue node0x26502620 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26502c10, node0x264e9800);
SDValue node0x26502910 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26502fd0, mpi, MVT::i8, 1);
SDValue node0x26504110 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26502c10, node0x26502620);
SDValue node0x26241540 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26502910, node0x264e9800);
SDValue node0x265026d0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x265032e0, mpi, MVT::i8, 1);
SDValue node0x262415e0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26504110, node0x26502620);
SDValue node0x26241680 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26502910, node0x26241540);
SDValue node0x26241720 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x265026d0, node0x264e9800);
SDValue node0x26502310 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26502860, mpi, MVT::i8, 1);
SDValue node0x262417c0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26241680, node0x26241540);
SDValue node0x26241860 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x265026d0, node0x26241720);
SDValue node0x26241900 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26502310, node0x264e9800);
SDValue node0x26503c90 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26503760, mpi, MVT::i8, 1);
SDValue node0x262419a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x262417c0, node0x262415e0);
SDValue node0x26241a40 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26241860, node0x26241720);
SDValue node0x26241ae0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26502310, node0x26241900);
SDValue node0x26241b80 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26503c90, node0x264e9800);
SDValue node0x26241c20 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26502b60, mpi, MVT::i8, 1);
SDValue node0x26241cb0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x262419a0, node0x264e98a0);
SDValue node0x26241d50 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26241ae0, node0x26241900);
SDValue node0x26241df0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26503c90, node0x26241b80);
SDValue node0x26241e90 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26241c20, node0x264e9800);
SDValue node0x26241f30 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26503be0, mpi, MVT::i8, 1);
SDValue node0x26241fc0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x26241cb0);
SDValue node0x26242030 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26241d50, node0x26241a40);
SDValue node0x262420d0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26241df0, node0x26241b80);
SDValue node0x26242170 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26241c20, node0x26241e90);
SDValue node0x26242210 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26241f30, node0x264e9800);
SDValue node0x262422b0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i16, entry, node0x26502f20, mpi, MVT::i8, 1);
SDValue node0x26242340 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26503390, node0x26241fc0);
SDValue node0x262423e0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x26242030, node0x264e98a0);
SDValue node0x26242480 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26242170, node0x26241e90);
SDValue node0x26242520 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26241f30, node0x26242210);
SDValue node0x262425c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x262422b0, node0x264e9800);
SDValue node0x26242660 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x262423e0);
SDValue node0x262426d0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26242480, node0x262420d0);
SDValue node0x26242770 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26242520, node0x26242210);
SDValue node0x26242810 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x262422b0, node0x262425c0);
SDValue node0x262428b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26242340, node0x26242660);
SDValue node0x26242950 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x262426d0, node0x264e98a0);
SDValue node0x262429f0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26242810, node0x262425c0);
SDValue node0x26242a90 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x26242950);
SDValue node0x26242b00 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x262429f0, node0x26242770);
SDValue node0x26242ba0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262428b0, node0x26242a90);
SDValue node0x26242c40 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x26242b00, node0x264e98a0);
SDValue node0x26242ce0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x26242c40);
SDValue node0x26242d50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26242ba0, node0x26242ce0);
SDValue node0x26242df0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26242d50, SDValue());
roots.reserve(1);
roots.push_back(node0x26242df0);
dag->setRoot(node0x26242df0);
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
SDValue node0x266bd200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266bd030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266bd200, SDValue());
roots.reserve(1);
roots.push_back(node0x266bd030);
dag->setRoot(node0x266bd030);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__reg0__reg0__:
    {
SDValue node0x264daa10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264daa90 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264dab30 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264dabd0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264dac70 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264dadf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264cf6b0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264daa10, mpi, MVT::i8, 1);
SDValue node0x264cf5e0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264daa10, mpi, MVT::i8, 1);
SDValue node0x264db220 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264cf5e0, node0x264cf6b0);
SDValue node0x264cf510 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264daa90, mpi, MVT::i8, 1);
SDValue node0x264db430 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264db220, node0x264dac70);
SDValue node0x264cf440 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264daa90, mpi, MVT::i8, 1);
SDValue node0x264db670 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264db430);
SDValue node0x264db720 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264cf440, node0x264cf510);
SDValue node0x264cf370 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264dab30, mpi, MVT::i8, 1);
SDValue node0x264db960 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264dadf0, node0x264db670);
SDValue node0x264dba20 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264db720, node0x264dac70);
SDValue node0x264cf2a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264dab30, mpi, MVT::i8, 1);
SDValue node0x264dbc60 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264dba20);
SDValue node0x264dbd10 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264cf2a0, node0x264cf370);
SDValue node0x266d9c50 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264dabd0, mpi, MVT::i8, 1);
SDValue node0x264dbf50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264db960, node0x264dbc60);
SDValue node0x264dc010 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264dbd10, node0x264dac70);
SDValue node0x264cf780 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264dabd0, mpi, MVT::i8, 1);
SDValue node0x264dc180 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264dc010);
SDValue node0x264dc230 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264cf780, node0x266d9c50);
SDValue node0x264dc2f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264dbf50, node0x264dc180);
SDValue node0x264dc3b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264dc230, node0x264dac70);
SDValue node0x264dc470 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264dc3b0);
SDValue node0x264dc520 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264dc2f0, node0x264dc470);
SDValue node0x264da970 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264dc520, SDValue());
roots.reserve(1);
roots.push_back(node0x264da970);
dag->setRoot(node0x264da970);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__reg0__regs__:
    {
SDValue node0x264de080 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264de1a0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264de240 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264de2e0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264de380 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264de500 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264de680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264d3bb0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264de080, mpi, MVT::i8, 1);
SDValue node0x264de7e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264de680, node0x264de2e0);
SDValue node0x264de870 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264de680, node0x264de240);
SDValue node0x264de930 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264de680, node0x264de1a0);
SDValue node0x264d3ae0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264de680, mpi, MVT::i8, 1);
SDValue node0x264dec40 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d3ae0, node0x264d3bb0);
SDValue node0x264d3a10 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264de1a0, mpi, MVT::i8, 1);
SDValue node0x264dee80 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264dec40, node0x264de380);
SDValue node0x264d3940 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264de930, mpi, MVT::i8, 1);
SDValue node0x264df0c0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264dee80);
SDValue node0x264df170 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d3940, node0x264d3a10);
SDValue node0x264d3870 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264de240, mpi, MVT::i8, 1);
SDValue node0x264df3b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264de500, node0x264df0c0);
SDValue node0x264df470 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264df170, node0x264de380);
SDValue node0x264d37a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264de870, mpi, MVT::i8, 1);
SDValue node0x264df6b0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264df470);
SDValue node0x264df760 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d37a0, node0x264d3870);
SDValue node0x264d3d50 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264de2e0, mpi, MVT::i8, 1);
SDValue node0x264df9a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264df3b0, node0x264df6b0);
SDValue node0x264dfa60 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264df760, node0x264de380);
SDValue node0x264d5ca0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264de7e0, mpi, MVT::i8, 1);
SDValue node0x264dfbd0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264dfa60);
SDValue node0x264dfc80 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264d5ca0, node0x264d3d50);
SDValue node0x264dfd40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264df9a0, node0x264dfbd0);
SDValue node0x264dfe00 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264dfc80, node0x264de380);
SDValue node0x264dfec0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264dfe00);
SDValue node0x264dff70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264dfd40, node0x264dfec0);
SDValue node0x264dd0c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264dff70, SDValue());
roots.reserve(1);
roots.push_back(node0x264dd0c0);
dag->setRoot(node0x264dd0c0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__regs__reg0__:
    {
SDValue node0x264e2020 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264e20c0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264e2160 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264e2200 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264e22a0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264e2420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264e24d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264e2580 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e2420, node0x264e2200);
SDValue node0x264e2610 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e2420, node0x264e2160);
SDValue node0x264e26d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e2420, node0x264e20c0);
SDValue node0x264db5a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e2420, mpi, MVT::i8, 1);
SDValue node0x264db360 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e2020, mpi, MVT::i8, 1);
SDValue node0x264e2b60 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264db360, node0x264db5a0);
SDValue node0x264db150 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e26d0, mpi, MVT::i8, 1);
SDValue node0x264e2da0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e2b60, node0x264e22a0);
SDValue node0x264dafd0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e20c0, mpi, MVT::i8, 1);
SDValue node0x264e2fe0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264e2da0);
SDValue node0x264e3090 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264dafd0, node0x264db150);
SDValue node0x264daea0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e2610, mpi, MVT::i8, 1);
SDValue node0x264e32d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e24d0, node0x264e2fe0);
SDValue node0x264e3390 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e3090, node0x264e22a0);
SDValue node0x264dbe80 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e2160, mpi, MVT::i8, 1);
SDValue node0x264e35d0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264e3390);
SDValue node0x264e3680 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264dbe80, node0x264daea0);
SDValue node0x264df8d0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e2580, mpi, MVT::i8, 1);
SDValue node0x264e38c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e32d0, node0x264e35d0);
SDValue node0x264e3980 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e3680, node0x264e22a0);
SDValue node0x264df5e0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e2200, mpi, MVT::i8, 1);
SDValue node0x264e3af0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264e3980);
SDValue node0x264e3ba0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264df5e0, node0x264df8d0);
SDValue node0x264e3c60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e38c0, node0x264e3af0);
SDValue node0x264e3d20 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e3ba0, node0x264e22a0);
SDValue node0x264e3de0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264e3d20);
SDValue node0x264e3e90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e3c60, node0x264e3de0);
SDValue node0x264dc940 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264e3e90, SDValue());
roots.reserve(1);
roots.push_back(node0x264dc940);
dag->setRoot(node0x264dc940);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__regs__regs__:
    {
SDValue node0x264e55d0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264e5670 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264e5710 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264e57b0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264e5930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x264e59e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264e5a90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264e5b40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e5930, node0x264e5710);
SDValue node0x264e5bd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e5930, node0x264e5670);
SDValue node0x264e5c90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e5930, node0x264e55d0);
SDValue node0x264e5e20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e5a90, node0x264e5710);
SDValue node0x264e5ee0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e5a90, node0x264e5670);
SDValue node0x264e5fa0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e5a90, node0x264e55d0);
SDValue node0x264e3200 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e5930, mpi, MVT::i8, 1);
SDValue node0x264e2f10 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e5a90, mpi, MVT::i8, 1);
SDValue node0x264e6360 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264e2f10, node0x264e3200);
SDValue node0x264e2cd0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e5c90, mpi, MVT::i8, 1);
SDValue node0x264e65a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e6360, node0x264e57b0);
SDValue node0x262332e0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e5fa0, mpi, MVT::i8, 1);
SDValue node0x264e67e0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264e65a0);
SDValue node0x264e6890 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x262332e0, node0x264e2cd0);
SDValue node0x26233370 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e5bd0, mpi, MVT::i8, 1);
SDValue node0x264e6ad0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e59e0, node0x264e67e0);
SDValue node0x264e6b90 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e6890, node0x264e57b0);
SDValue node0x26233400 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e5ee0, mpi, MVT::i8, 1);
SDValue node0x264e6dd0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264e6b90);
SDValue node0x264e6e80 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26233400, node0x26233370);
SDValue node0x26233490 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e5b40, mpi, MVT::i8, 1);
SDValue node0x264e70c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e6ad0, node0x264e6dd0);
SDValue node0x264e7180 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e6e80, node0x264e57b0);
SDValue node0x26233520 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264e5e20, mpi, MVT::i8, 1);
SDValue node0x264e72f0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264e7180);
SDValue node0x264e73a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26233520, node0x26233490);
SDValue node0x264e7460 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e70c0, node0x264e72f0);
SDValue node0x264e7520 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e73a0, node0x264e57b0);
SDValue node0x264e75e0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x264e7520);
SDValue node0x264e7690 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264e7460, node0x264e75e0);
SDValue node0x264e0a70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264e7690, SDValue());
roots.reserve(1);
roots.push_back(node0x264e0a70);
dag->setRoot(node0x264e0a70);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__reg0__reg0__:
    {
SDValue node0x264f2fa0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264f3020 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264f30c0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264f3160 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264f3200 = dag->getConstant(15LL, dl, MVT::i16);
SDValue node0x264f32a0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264f3420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264e8b40 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f2fa0, mpi, MVT::i8, 1);
SDValue node0x264f36b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e8b40, node0x264f3200);
SDValue node0x264e8a70 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f2fa0, mpi, MVT::i8, 1);
SDValue node0x264f38c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264e8b40, node0x264f36b0);
SDValue node0x264f3980 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e8a70, node0x264f3200);
SDValue node0x264e89a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f3020, mpi, MVT::i8, 1);
SDValue node0x264f3bc0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f38c0, node0x264f36b0);
SDValue node0x264f3c80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264e8a70, node0x264f3980);
SDValue node0x264f3d40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e89a0, node0x264f3200);
SDValue node0x264e88d0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f3020, mpi, MVT::i8, 1);
SDValue node0x264f3f80 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f3c80, node0x264f3980);
SDValue node0x264f4040 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264e89a0, node0x264f3d40);
SDValue node0x264f4100 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e88d0, node0x264f3200);
SDValue node0x264e8800 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f30c0, mpi, MVT::i8, 1);
SDValue node0x264f4340 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264f3f80, node0x264f3bc0);
SDValue node0x264f4400 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f4040, node0x264f3d40);
SDValue node0x264f44c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264e88d0, node0x264f4100);
SDValue node0x264f4580 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e8800, node0x264f3200);
SDValue node0x264e8730 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f30c0, mpi, MVT::i8, 1);
SDValue node0x264f47c0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264f4340, node0x264f32a0);
SDValue node0x264f4880 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f44c0, node0x264f4100);
SDValue node0x264f4940 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264e8800, node0x264f4580);
SDValue node0x264f4a00 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e8730, node0x264f3200);
SDValue node0x264e8660 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f3160, mpi, MVT::i8, 1);
SDValue node0x264f4c40 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264f47c0);
SDValue node0x264f4cf0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264f4880, node0x264f4400);
SDValue node0x264f4db0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f4940, node0x264f4580);
SDValue node0x264f4e70 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264e8730, node0x264f4a00);
SDValue node0x264f4f30 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x264e8660, node0x264f3200);
SDValue node0x26234e00 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f3160, mpi, MVT::i8, 1);
SDValue node0x264f50a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f3420, node0x264f4c40);
SDValue node0x264f5160 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264f4cf0, node0x264f32a0);
SDValue node0x264f5220 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f4e70, node0x264f4a00);
SDValue node0x264f52e0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x264e8660, node0x264f4f30);
SDValue node0x264f53a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26234e00, node0x264f3200);
SDValue node0x264f5460 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264f5160);
SDValue node0x264f5510 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264f5220, node0x264f4db0);
SDValue node0x264f55d0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f52e0, node0x264f4f30);
SDValue node0x264f5690 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26234e00, node0x264f53a0);
SDValue node0x264f5750 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f50a0, node0x264f5460);
SDValue node0x264f5810 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264f5510, node0x264f32a0);
SDValue node0x264f58d0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f5690, node0x264f53a0);
SDValue node0x264f5990 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264f5810);
SDValue node0x264f5a40 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264f58d0, node0x264f55d0);
SDValue node0x264f5b00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f5750, node0x264f5990);
SDValue node0x264f5bc0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264f5a40, node0x264f32a0);
SDValue node0x264f5c80 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264f5bc0);
SDValue node0x264f5d30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f5b00, node0x264f5c80);
SDValue node0x264f2f00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264f5d30, SDValue());
roots.reserve(1);
roots.push_back(node0x264f2f00);
dag->setRoot(node0x264f2f00);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__reg0__regs__:
    {
SDValue node0x264f8060 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264f8180 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264f8220 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264f82c0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264f8360 = dag->getConstant(15LL, dl, MVT::i16);
SDValue node0x264f8400 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264f8580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264f8700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262380d0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f8060, mpi, MVT::i8, 1);
SDValue node0x264f8860 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f8700, node0x264f82c0);
SDValue node0x264f88f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f8700, node0x264f8220);
SDValue node0x264f89b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f8700, node0x264f8180);
SDValue node0x264f8b40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x262380d0, node0x264f8360);
SDValue node0x26238160 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f8700, mpi, MVT::i8, 1);
SDValue node0x264f8d80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x262380d0, node0x264f8b40);
SDValue node0x264f8e40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26238160, node0x264f8360);
SDValue node0x262381f0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f8180, mpi, MVT::i8, 1);
SDValue node0x264f9080 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f8d80, node0x264f8b40);
SDValue node0x264f9140 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26238160, node0x264f8e40);
SDValue node0x264f9200 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x262381f0, node0x264f8360);
SDValue node0x26238280 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f89b0, mpi, MVT::i8, 1);
SDValue node0x264f9440 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f9140, node0x264f8e40);
SDValue node0x264f9500 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x262381f0, node0x264f9200);
SDValue node0x264f95c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26238280, node0x264f8360);
SDValue node0x26238310 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f8220, mpi, MVT::i8, 1);
SDValue node0x264f9800 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264f9440, node0x264f9080);
SDValue node0x264f98c0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f9500, node0x264f9200);
SDValue node0x264f9980 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26238280, node0x264f95c0);
SDValue node0x264f9a40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26238310, node0x264f8360);
SDValue node0x262383a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f88f0, mpi, MVT::i8, 1);
SDValue node0x264f9c80 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264f9800, node0x264f8400);
SDValue node0x264f9d40 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f9980, node0x264f95c0);
SDValue node0x264f9e00 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26238310, node0x264f9a40);
SDValue node0x264f9ec0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x262383a0, node0x264f8360);
SDValue node0x26238430 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f82c0, mpi, MVT::i8, 1);
SDValue node0x264fa100 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264f9c80);
SDValue node0x264fa1b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264f9d40, node0x264f98c0);
SDValue node0x264fa270 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264f9e00, node0x264f9a40);
SDValue node0x264fa330 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x262383a0, node0x264f9ec0);
SDValue node0x264fa3f0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26238430, node0x264f8360);
SDValue node0x262384c0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264f8860, mpi, MVT::i8, 1);
SDValue node0x264fa560 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264f8580, node0x264fa100);
SDValue node0x264fa620 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264fa1b0, node0x264f8400);
SDValue node0x264fa6e0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fa330, node0x264f9ec0);
SDValue node0x264fa7a0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26238430, node0x264fa3f0);
SDValue node0x264fa860 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x262384c0, node0x264f8360);
SDValue node0x264fa920 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264fa620);
SDValue node0x264fa9d0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264fa6e0, node0x264fa270);
SDValue node0x264faa90 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fa7a0, node0x264fa3f0);
SDValue node0x264fab50 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x262384c0, node0x264fa860);
SDValue node0x264fac10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fa560, node0x264fa920);
SDValue node0x264facd0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264fa9d0, node0x264f8400);
SDValue node0x264fad90 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fab50, node0x264fa860);
SDValue node0x264fae50 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264facd0);
SDValue node0x264faf00 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264fad90, node0x264faa90);
SDValue node0x264fafc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fac10, node0x264fae50);
SDValue node0x264fb080 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264faf00, node0x264f8400);
SDValue node0x264fb140 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264fb080);
SDValue node0x264fb1f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fafc0, node0x264fb140);
SDValue node0x264f70a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x264fb1f0, SDValue());
roots.reserve(1);
roots.push_back(node0x264f70a0);
dag->setRoot(node0x264f70a0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__regs__reg0__:
    {
SDValue node0x264fd2a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x264fd340 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x264fd3e0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x264fd480 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x264fd520 = dag->getConstant(15LL, dl, MVT::i16);
SDValue node0x264fd5c0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x264fd740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x264fd7f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x264fd8a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fd740, node0x264fd480);
SDValue node0x264fd930 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fd740, node0x264fd3e0);
SDValue node0x264fd9f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fd740, node0x264fd340);
SDValue node0x2623bf80 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264fd740, mpi, MVT::i8, 1);
SDValue node0x264fdd00 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623bf80, node0x264fd520);
SDValue node0x2623c010 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264fd2a0, mpi, MVT::i8, 1);
SDValue node0x264fdf40 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623bf80, node0x264fdd00);
SDValue node0x264fe000 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623c010, node0x264fd520);
SDValue node0x2623c0a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264fd9f0, mpi, MVT::i8, 1);
SDValue node0x264fe240 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fdf40, node0x264fdd00);
SDValue node0x264fe300 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623c010, node0x264fe000);
SDValue node0x264fe3c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623c0a0, node0x264fd520);
SDValue node0x2623c130 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264fd340, mpi, MVT::i8, 1);
SDValue node0x264fe600 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fe300, node0x264fe000);
SDValue node0x264fe6c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623c0a0, node0x264fe3c0);
SDValue node0x264fe780 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623c130, node0x264fd520);
SDValue node0x2623c1c0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264fd930, mpi, MVT::i8, 1);
SDValue node0x264fe9c0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264fe600, node0x264fe240);
SDValue node0x264fea80 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fe6c0, node0x264fe3c0);
SDValue node0x264feb40 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623c130, node0x264fe780);
SDValue node0x264fec00 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623c1c0, node0x264fd520);
SDValue node0x2623c250 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264fd3e0, mpi, MVT::i8, 1);
SDValue node0x264fee40 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264fe9c0, node0x264fd5c0);
SDValue node0x264fef00 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264feb40, node0x264fe780);
SDValue node0x264fefc0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623c1c0, node0x264fec00);
SDValue node0x264ff080 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623c250, node0x264fd520);
SDValue node0x2623c2e0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264fd8a0, mpi, MVT::i8, 1);
SDValue node0x264ff2c0 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264fee40);
SDValue node0x264ff370 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264fef00, node0x264fea80);
SDValue node0x264ff430 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264fefc0, node0x264fec00);
SDValue node0x264ff4f0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623c250, node0x264ff080);
SDValue node0x264ff5b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623c2e0, node0x264fd520);
SDValue node0x2623c370 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x264fd480, mpi, MVT::i8, 1);
SDValue node0x264ff720 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264fd7f0, node0x264ff2c0);
SDValue node0x264ff7e0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264ff370, node0x264fd5c0);
SDValue node0x264ff8a0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264ff4f0, node0x264ff080);
SDValue node0x264ff960 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623c2e0, node0x264ff5b0);
SDValue node0x264ffa20 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x2623c370, node0x264fd520);
SDValue node0x264ffae0 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264ff7e0);
SDValue node0x264ffb90 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264ff8a0, node0x264ff430);
SDValue node0x264ffc50 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264ff960, node0x264ff5b0);
SDValue node0x264ffd10 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x2623c370, node0x264ffa20);
SDValue node0x264ffdd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264ff720, node0x264ffae0);
SDValue node0x264ffe90 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x264ffb90, node0x264fd5c0);
SDValue node0x264fff50 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x264ffd10, node0x264ffa20);
SDValue node0x26500010 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x264ffe90);
SDValue node0x265000c0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x264fff50, node0x264ffc50);
SDValue node0x26500180 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x264ffdd0, node0x26500010);
SDValue node0x26500240 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x265000c0, node0x264fd5c0);
SDValue node0x26500300 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x26500240);
SDValue node0x265003b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26500180, node0x26500300);
SDValue node0x264f6240 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265003b0, SDValue());
roots.reserve(1);
roots.push_back(node0x264f6240);
dag->setRoot(node0x264f6240);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__regs__regs__:
    {
SDValue node0x26501af0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x26501b90 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x26501c30 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x26501cd0 = dag->getConstant(15LL, dl, MVT::i16);
SDValue node0x26501d70 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x26501ef0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x26501fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26502050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26502100 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26501ef0, node0x26501c30);
SDValue node0x26502190 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26501ef0, node0x26501b90);
SDValue node0x26502250 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26501ef0, node0x26501af0);
SDValue node0x265023e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26502050, node0x26501c30);
SDValue node0x265024a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26502050, node0x26501b90);
SDValue node0x26502560 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26502050, node0x26501af0);
SDValue node0x26240ab0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x26501ef0, mpi, MVT::i8, 1);
SDValue node0x265027a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26240ab0, node0x26501cd0);
SDValue node0x26240b40 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x26502050, mpi, MVT::i8, 1);
SDValue node0x265029e0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26240ab0, node0x265027a0);
SDValue node0x26502aa0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26240b40, node0x26501cd0);
SDValue node0x26240bd0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x26502250, mpi, MVT::i8, 1);
SDValue node0x26502ce0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x265029e0, node0x265027a0);
SDValue node0x26502da0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26240b40, node0x26502aa0);
SDValue node0x26502e60 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26240bd0, node0x26501cd0);
SDValue node0x26240c60 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x26502560, mpi, MVT::i8, 1);
SDValue node0x265030a0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26502da0, node0x26502aa0);
SDValue node0x26503160 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26240bd0, node0x26502e60);
SDValue node0x26503220 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26240c60, node0x26501cd0);
SDValue node0x26240cf0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x26502190, mpi, MVT::i8, 1);
SDValue node0x26503460 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x265030a0, node0x26502ce0);
SDValue node0x26503520 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26503160, node0x26502e60);
SDValue node0x265035e0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26240c60, node0x26503220);
SDValue node0x265036a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26240cf0, node0x26501cd0);
SDValue node0x26240d80 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x265024a0, mpi, MVT::i8, 1);
SDValue node0x265038e0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x26503460, node0x26501d70);
SDValue node0x265039a0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x265035e0, node0x26503220);
SDValue node0x26503a60 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26240cf0, node0x265036a0);
SDValue node0x26503b20 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26240d80, node0x26501cd0);
SDValue node0x26240e10 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x26502100, mpi, MVT::i8, 1);
SDValue node0x26503d60 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x265038e0);
SDValue node0x26503e10 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x265039a0, node0x26503520);
SDValue node0x26503ed0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26503a60, node0x265036a0);
SDValue node0x26503f90 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26240d80, node0x26503b20);
SDValue node0x26504050 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26240e10, node0x26501cd0);
SDValue node0x26240ea0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i16, entry, node0x265023e0, mpi, MVT::i8, 1);
SDValue node0x265041c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26501fa0, node0x26503d60);
SDValue node0x26504280 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x26503e10, node0x26501d70);
SDValue node0x26504340 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26503f90, node0x26503b20);
SDValue node0x26504400 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26240e10, node0x26504050);
SDValue node0x265044c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x26240ea0, node0x26501cd0);
SDValue node0x26504580 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x26504280);
SDValue node0x26504630 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x26504340, node0x26503ed0);
SDValue node0x265046f0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x26504400, node0x26504050);
SDValue node0x265047b0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x26240ea0, node0x265044c0);
SDValue node0x26504870 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265041c0, node0x26504580);
SDValue node0x26504930 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x26504630, node0x26501d70);
SDValue node0x265049f0 = dag->getNode(ISD::XOR, dl, MVT::i16, node0x265047b0, node0x265044c0);
SDValue node0x26504ab0 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x26504930);
SDValue node0x26504b60 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x265049f0, node0x265046f0);
SDValue node0x26504c20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26504870, node0x26504ab0);
SDValue node0x26504ce0 = dag->getNode(ISD::SRL, dl, MVT::i16, node0x26504b60, node0x26501d70);
SDValue node0x26504da0 = dag->getNode(ISD::ZERO_EXTEND, dl, MVT::i32, node0x26504ce0);
SDValue node0x26504e50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26504c20, node0x26504da0);
SDValue node0x264fbcf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26504e50, SDValue());
roots.reserve(1);
roots.push_back(node0x264fbcf0);
dag->setRoot(node0x264fbcf0);
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
SDValue node0x262b36c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x262b3740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262b4240 = dag->getTruncStore(entry, dl, node0x262b36c0, node0x262b3740, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x262b4240);
dag->setRoot(node0x262b4240);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__i32_TRUNC_CLONE_:
    {
SDValue node0x262b2b90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x262b3120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262b3640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262af0a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262b3120, node0x262b3640);
SDValue node0x262b4bc0 = dag->getTruncStore(entry, dl, node0x262b2b90, node0x262af0a0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x262b4bc0);
dag->setRoot(node0x262b4bc0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_:
    {
SDValue node0x262b37c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x262b51e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262b54d0 = dag->getTruncStore(entry, dl, node0x262b37c0, node0x262b51e0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x262b54d0);
dag->setRoot(node0x262b54d0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__i32_TRUNC_CLONE_:
    {
SDValue node0x262b5af0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x262aeca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262b5b70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262aed30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262aeca0, node0x262b5b70);
SDValue node0x262b5f50 = dag->getTruncStore(entry, dl, node0x262b5af0, node0x262aed30, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x262b5f50);
dag->setRoot(node0x262b5f50);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_:
    {
SDValue node0x262b62e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x262b3090 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262b64d0 = dag->getTruncStore(entry, dl, node0x262b62e0, node0x262b3090, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x262b64d0);
dag->setRoot(node0x262b64d0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_:
    {
SDValue node0x262b68c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x262b31b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262b6aa0 = dag->getTruncStore(entry, dl, node0x262b68c0, node0x262b31b0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x262b6aa0);
dag->setRoot(node0x262b6aa0);
    }
    break;
  case Codasip::i_jump_reg_alias__regs___RET_EMUL_:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__0_REG_EMUL_:
    {
SDValue node0x262b6eb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262b83b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262b85d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bd480 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262b83b0, node0x262b85d0);
SDValue node0x262b2a20 = dag->getStore(entry, dl, node0x262b6eb0, node0x262bd480, mpi, 1);
roots.reserve(1);
roots.push_back(node0x262b2a20);
dag->setRoot(node0x262b2a20);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__1_BIGIMM_EMUL_:
    {
SDValue node0x262b7490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262b8160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262bc310 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bc9a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262b8160, node0x262bc310);
SDValue node0x262b8f00 = dag->getStore(entry, dl, node0x262b7490, node0x262bc9a0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x262b8f00);
dag->setRoot(node0x262b8f00);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__2_REG_EMUL_:
    {
SDValue node0x262b7be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262bd200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bdab0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262b7be0, node0x262bd200);
SDValue node0x262bb460 = dag->getLoad(MVT::i32, dl, entry, node0x262bdab0, mpi, 1);
SDValue node0x262be2f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x262bb460, SDValue());
roots.reserve(1);
roots.push_back(node0x262be2f0);
dag->setRoot(node0x262be2f0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__3_BIGIMM_EMUL_:
    {
SDValue node0x262bc410 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262bf6f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bc2a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262bc410, node0x262bf6f0);
SDValue node0x262bda20 = dag->getLoad(MVT::i32, dl, entry, node0x262bc2a0, mpi, 1);
SDValue node0x262bf7a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x262bda20, SDValue());
roots.reserve(1);
roots.push_back(node0x262bf7a0);
dag->setRoot(node0x262bf7a0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__4_BIGIMM_EMUL_:
    {
SDValue node0x262bc0a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x262bafb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262c0120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bc930 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262bafb0, node0x262c0120);
SDValue node0x262b7000 = dag->getStore(entry, dl, node0x262bc0a0, node0x262bc930, mpi, 1);
roots.reserve(1);
roots.push_back(node0x262b7000);
dag->setRoot(node0x262b7000);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__5_BIGIMM_EMUL_:
    {
SDValue node0x262bd6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262c0cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bd9b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262bd6b0, node0x262c0cf0);
SDValue node0x262bbc80 = dag->getLoad(MVT::i32, dl, entry, node0x262bd9b0, mpi, 1);
SDValue node0x262c0d70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x262bbc80, SDValue());
roots.reserve(1);
roots.push_back(node0x262c0d70);
dag->setRoot(node0x262c0d70);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__6_BIGIMM_EMUL_:
    {
SDValue node0x262bd290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262c1810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bc8c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262bd290, node0x262c1810);
SDValue node0x262c1890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x262bc8c0, SDValue());
roots.reserve(1);
roots.push_back(node0x262c1890);
dag->setRoot(node0x262c1890);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__7_BIGIMM_EMUL_:
    {
SDValue node0x262bb040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262c23d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bc130 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262bb040, node0x262c23d0);
SDValue node0x262c2450 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x262bc130, SDValue());
roots.reserve(1);
roots.push_back(node0x262c2450);
dag->setRoot(node0x262c2450);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__8_BIGIMM_EMUL_:
    {
SDValue node0x262c1e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262c2f80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x262bb1a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x262c1e00, node0x262c2f80);
SDValue node0x262c3000 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x262bb1a0, SDValue());
roots.reserve(1);
roots.push_back(node0x262c3000);
dag->setRoot(node0x262c3000);
    }
    break;
  case Codasip::c_addi_lo__opc_addi__regs__regs__:
    {
SDValue node0x24016080 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266f09a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2673f9c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x24016080, node0x266f09a0);
SDValue node0x261e8680 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2673f9c0, SDValue());
roots.reserve(1);
roots.push_back(node0x261e8680);
dag->setRoot(node0x261e8680);
    }
    break;
  case Codasip::c_lui_hi__opc_lui__regs__:
    {
SDValue node0x24015fb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x261e8870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24015fb0, SDValue());
roots.reserve(1);
roots.push_back(node0x261e8870);
dag->setRoot(node0x261e8870);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_lo__:
    {
SDValue node0x261fb210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x261faef0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x261fb210, SDValue());
roots.reserve(1);
roots.push_back(node0x261faef0);
dag->setRoot(node0x261faef0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x261fbe90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x261fb340 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x261fbe90, SDValue());
roots.reserve(1);
roots.push_back(node0x261fb340);
dag->setRoot(node0x261fb340);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_lo__:
    {
SDValue node0x261f70e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265b75d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265b7670 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x261f70e0, node0x265b75d0);
SDValue node0x265b71f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265b7670, SDValue());
roots.reserve(1);
roots.push_back(node0x265b71f0);
dag->setRoot(node0x265b71f0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x265b7f40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x261ef3e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x261ef480 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265b7f40, node0x261ef3e0);
SDValue node0x265b7880 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x261ef480, SDValue());
roots.reserve(1);
roots.push_back(node0x265b7880);
dag->setRoot(node0x265b7880);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_lo__:
    {
SDValue node0x2671eb30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266f48d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x266f4970 = dag->getNode(ISD::AND, dl, MVT::i32, node0x2671eb30, node0x266f48d0);
SDValue node0x266f44f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266f4970, SDValue());
roots.reserve(1);
roots.push_back(node0x266f44f0);
dag->setRoot(node0x266f44f0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x266f0270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266f57f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x266f5890 = dag->getNode(ISD::AND, dl, MVT::i32, node0x266f0270, node0x266f57f0);
SDValue node0x266f4b80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266f5890, SDValue());
roots.reserve(1);
roots.push_back(node0x266f4b80);
dag->setRoot(node0x266f4b80);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_lo__:
    {
SDValue node0x266ffc80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266ff960 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266ffc80, SDValue());
roots.reserve(1);
roots.push_back(node0x266ff960);
dag->setRoot(node0x266ff960);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x26700900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266ffdb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26700900, SDValue());
roots.reserve(1);
roots.push_back(node0x266ffdb0);
dag->setRoot(node0x266ffdb0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_lo__:
    {
SDValue node0x26703630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26703960 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26703a00 = dag->getNode(ISD::OR, dl, MVT::i32, node0x26703630, node0x26703960);
SDValue node0x267034f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26703a00, SDValue());
roots.reserve(1);
roots.push_back(node0x267034f0);
dag->setRoot(node0x267034f0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x267045e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26704910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x267049b0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x267045e0, node0x26704910);
SDValue node0x26703c10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x267049b0, SDValue());
roots.reserve(1);
roots.push_back(node0x26703c10);
dag->setRoot(node0x26703c10);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_lo__:
    {
SDValue node0x2402dd20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2402de00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2402dea0 = dag->getSetCC(dl, MVT::i32, node0x2402de00, node0x2402dd20, ISD::SETGT);
SDValue node0x2402dae0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2402dea0, SDValue());
roots.reserve(1);
roots.push_back(node0x2402dae0);
dag->setRoot(node0x2402dae0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x2402ec10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2402ecf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2402ed90 = dag->getSetCC(dl, MVT::i32, node0x2402ecf0, node0x2402ec10, ISD::SETGT);
SDValue node0x2402e170 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2402ed90, SDValue());
roots.reserve(1);
roots.push_back(node0x2402e170);
dag->setRoot(node0x2402e170);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_lo__:
    {
SDValue node0x24031d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x240320a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24032140 = dag->getSetCC(dl, MVT::i32, node0x24031d70, node0x240320a0, ISD::SETLT);
SDValue node0x24031c30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24032140, SDValue());
roots.reserve(1);
roots.push_back(node0x24031c30);
dag->setRoot(node0x24031c30);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x24032e30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24033160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24033200 = dag->getSetCC(dl, MVT::i32, node0x24032e30, node0x24033160, ISD::SETLT);
SDValue node0x24032460 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24033200, SDValue());
roots.reserve(1);
roots.push_back(node0x24032460);
dag->setRoot(node0x24032460);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_lo__:
    {
SDValue node0x2403d960 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2403da40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2403dae0 = dag->getSetCC(dl, MVT::i32, node0x2403da40, node0x2403d960, ISD::SETNE);
SDValue node0x2403d720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2403dae0, SDValue());
roots.reserve(1);
roots.push_back(node0x2403d720);
dag->setRoot(node0x2403d720);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x2403e850 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2403e930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2403e9d0 = dag->getSetCC(dl, MVT::i32, node0x2403e930, node0x2403e850, ISD::SETNE);
SDValue node0x2403ddb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2403e9d0, SDValue());
roots.reserve(1);
roots.push_back(node0x2403ddb0);
dag->setRoot(node0x2403ddb0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_lo__:
    {
SDValue node0x240419b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24041ce0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24041d80 = dag->getSetCC(dl, MVT::i32, node0x240419b0, node0x24041ce0, ISD::SETULT);
SDValue node0x24041870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24041d80, SDValue());
roots.reserve(1);
roots.push_back(node0x24041870);
dag->setRoot(node0x24041870);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x24042a70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24042da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24042e40 = dag->getSetCC(dl, MVT::i32, node0x24042a70, node0x24042da0, ISD::SETULT);
SDValue node0x240420a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24042e40, SDValue());
roots.reserve(1);
roots.push_back(node0x240420a0);
dag->setRoot(node0x240420a0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_lo__:
    {
SDValue node0x2404d680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2404d360 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2404d680, SDValue());
roots.reserve(1);
roots.push_back(node0x2404d360);
dag->setRoot(node0x2404d360);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x2404e300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2404d7b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2404e300, SDValue());
roots.reserve(1);
roots.push_back(node0x2404d7b0);
dag->setRoot(node0x2404d7b0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_lo__:
    {
SDValue node0x24051170 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x240514a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x24051540 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x24051170, node0x240514a0);
SDValue node0x24051030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x24051540, SDValue());
roots.reserve(1);
roots.push_back(node0x24051030);
dag->setRoot(node0x24051030);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x24052120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x24052450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x240524f0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x24052120, node0x24052450);
SDValue node0x24051750 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x240524f0, SDValue());
roots.reserve(1);
roots.push_back(node0x24051750);
dag->setRoot(node0x24051750);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_lo__:
    {
SDValue node0x2658d940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2658d640 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2658d940);
roots.reserve(1);
roots.push_back(node0x2658d640);
dag->setRoot(node0x2658d640);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_pcrel_lo__:
    {
SDValue node0x2658e3c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x2658e0f0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x2658e3c0);
roots.reserve(1);
roots.push_back(node0x2658e0f0);
dag->setRoot(node0x2658e0f0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_lo__:
    {
SDValue node0x26597ad0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x26596220 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26597ad0, SDValue());
SDValue node0x26597e40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x26597aa0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x26596220, node0x26597e40);
roots.reserve(2);
roots.push_back(node0x26596220);
roots.push_back(node0x26597aa0);
dag->setRoot(node0x26597aa0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x265987e0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x26598020 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265987e0, SDValue());
SDValue node0x26598b50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x265987b0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x26598020, node0x26598b50);
roots.reserve(2);
roots.push_back(node0x26598020);
roots.push_back(node0x265987b0);
dag->setRoot(node0x265987b0);
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
SDValue node0x265bb790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265a9670 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265bb790, mpi, MVT::i8, 1);
SDValue node0x265bab80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265a9670, SDValue());
roots.reserve(1);
roots.push_back(node0x265bab80);
dag->setRoot(node0x265bab80);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_lo__regs__:
    {
SDValue node0x265bcb70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265bcea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265bcf40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265bcb70, node0x265bcea0);
SDValue node0x265bb830 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265bcf40, mpi, MVT::i8, 1);
SDValue node0x265bbae0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265bb830, SDValue());
roots.reserve(1);
roots.push_back(node0x265bbae0);
dag->setRoot(node0x265bbae0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x265bdf50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265bcfd0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265bdf50, mpi, MVT::i8, 1);
SDValue node0x265bd370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265bcfd0, SDValue());
roots.reserve(1);
roots.push_back(node0x265bd370);
dag->setRoot(node0x265bd370);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x265bf220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265bf550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265bf5f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265bf220, node0x265bf550);
SDValue node0x265bdff0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265bf5f0, mpi, MVT::i8, 1);
SDValue node0x265bd190 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265bdff0, SDValue());
roots.reserve(1);
roots.push_back(node0x265bd190);
dag->setRoot(node0x265bd190);
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
SDValue node0x265cd230 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265bf680 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265cd230, mpi, MVT::i8, 1);
SDValue node0x265cc7a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265bf680, SDValue());
roots.reserve(1);
roots.push_back(node0x265cc7a0);
dag->setRoot(node0x265cc7a0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_lo__regs__:
    {
SDValue node0x265ce6e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265cea10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265ceab0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265ce6e0, node0x265cea10);
SDValue node0x265cd2d0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265ceab0, mpi, MVT::i8, 1);
SDValue node0x265cd580 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265cd2d0, SDValue());
roots.reserve(1);
roots.push_back(node0x265cd580);
dag->setRoot(node0x265cd580);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x265cfb10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265ceb40 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265cfb10, mpi, MVT::i8, 1);
SDValue node0x265cee90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265ceb40, SDValue());
roots.reserve(1);
roots.push_back(node0x265cee90);
dag->setRoot(node0x265cee90);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x265d0d90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265d10c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265d1160 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265d0d90, node0x265d10c0);
SDValue node0x265cfbb0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265d1160, mpi, MVT::i8, 1);
SDValue node0x265ced50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265cfbb0, SDValue());
roots.reserve(1);
roots.push_back(node0x265ced50);
dag->setRoot(node0x265ced50);
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
SDValue node0x265deda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265d11f0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265deda0, mpi, MVT::i16, 1);
SDValue node0x265de190 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265d11f0, SDValue());
roots.reserve(1);
roots.push_back(node0x265de190);
dag->setRoot(node0x265de190);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_lo__regs__:
    {
SDValue node0x265e0250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265e0580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265e0620 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265e0250, node0x265e0580);
SDValue node0x265dee40 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265e0620, mpi, MVT::i16, 1);
SDValue node0x265df0f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265dee40, SDValue());
roots.reserve(1);
roots.push_back(node0x265df0f0);
dag->setRoot(node0x265df0f0);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x265e1630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265e06b0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265e1630, mpi, MVT::i16, 1);
SDValue node0x265e0a50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265e06b0, SDValue());
roots.reserve(1);
roots.push_back(node0x265e0a50);
dag->setRoot(node0x265e0a50);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x265e2900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265e2c30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265e2cd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265e2900, node0x265e2c30);
SDValue node0x265e16d0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x265e2cd0, mpi, MVT::i16, 1);
SDValue node0x265e0870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265e16d0, SDValue());
roots.reserve(1);
roots.push_back(node0x265e0870);
dag->setRoot(node0x265e0870);
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
SDValue node0x265f0910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265e2d60 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265f0910, mpi, MVT::i16, 1);
SDValue node0x265efe80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265e2d60, SDValue());
roots.reserve(1);
roots.push_back(node0x265efe80);
dag->setRoot(node0x265efe80);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_lo__regs__:
    {
SDValue node0x265f1dc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265f20f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265f2190 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265f1dc0, node0x265f20f0);
SDValue node0x265f09b0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265f2190, mpi, MVT::i16, 1);
SDValue node0x265f0c60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265f09b0, SDValue());
roots.reserve(1);
roots.push_back(node0x265f0c60);
dag->setRoot(node0x265f0c60);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x265f31f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265f2220 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265f31f0, mpi, MVT::i16, 1);
SDValue node0x265f2570 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265f2220, SDValue());
roots.reserve(1);
roots.push_back(node0x265f2570);
dag->setRoot(node0x265f2570);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x265f4470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x265f47a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x265f4840 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x265f4470, node0x265f47a0);
SDValue node0x265f3290 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x265f4840, mpi, MVT::i16, 1);
SDValue node0x265f2430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x265f3290, SDValue());
roots.reserve(1);
roots.push_back(node0x265f2430);
dag->setRoot(node0x265f2430);
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
SDValue node0x26602480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26602520 = dag->getLoad(MVT::i32, dl, entry, node0x26602480, mpi, 1);
SDValue node0x26601870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26602520, SDValue());
roots.reserve(1);
roots.push_back(node0x26601870);
dag->setRoot(node0x26601870);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_lo__regs__:
    {
SDValue node0x26603880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26603bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26603c50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26603880, node0x26603bb0);
SDValue node0x26603ce0 = dag->getLoad(MVT::i32, dl, entry, node0x26603c50, mpi, 1);
SDValue node0x266026d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26603ce0, SDValue());
roots.reserve(1);
roots.push_back(node0x266026d0);
dag->setRoot(node0x266026d0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x26604b60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26604c00 = dag->getLoad(MVT::i32, dl, entry, node0x26604b60, mpi, 1);
SDValue node0x26603f80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26604c00, SDValue());
roots.reserve(1);
roots.push_back(node0x26603f80);
dag->setRoot(node0x26603f80);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x26605dd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26606100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x266061a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26605dd0, node0x26606100);
SDValue node0x26606230 = dag->getLoad(MVT::i32, dl, entry, node0x266061a0, mpi, 1);
SDValue node0x26603e90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26606230, SDValue());
roots.reserve(1);
roots.push_back(node0x26603e90);
dag->setRoot(node0x26603e90);
    }
    break;
  case Codasip::i_lui_hi__opc_lui__regs__imm20_hi__:
    {
SDValue node0x266254b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26625530 = dag->getConstant(2048LL, dl, MVT::i32);
SDValue node0x266255f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x266254b0, node0x26625530);
SDValue node0x26625660 = dag->getConstant(-4096LL, dl, MVT::i32);
SDValue node0x26625720 = dag->getNode(ISD::AND, dl, MVT::i32, node0x266255f0, node0x26625660);
SDValue node0x266251c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26625720, SDValue());
roots.reserve(1);
roots.push_back(node0x266251c0);
dag->setRoot(node0x266251c0);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_lo__:
    {
SDValue node0x26643cd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26640fd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26643cd0, SDValue());
roots.reserve(1);
roots.push_back(node0x26640fd0);
dag->setRoot(node0x26640fd0);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x26644870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26643e00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26644870, SDValue());
roots.reserve(1);
roots.push_back(node0x26643e00);
dag->setRoot(node0x26643e00);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_lo__:
    {
SDValue node0x26645ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26645ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26645f70 = dag->getNode(ISD::OR, dl, MVT::i32, node0x26645ba0, node0x26645ed0);
SDValue node0x26644f10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26645f70, SDValue());
roots.reserve(1);
roots.push_back(node0x26644f10);
dag->setRoot(node0x26644f10);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x266469a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26646cd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26646d70 = dag->getNode(ISD::OR, dl, MVT::i32, node0x266469a0, node0x26646cd0);
SDValue node0x266460e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x26646d70, SDValue());
roots.reserve(1);
roots.push_back(node0x266460e0);
dag->setRoot(node0x266460e0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x26656fe0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x26657280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x265282c0 = dag->getStore(entry, dl, node0x26656fe0, node0x26657280, mpi, 1);
roots.reserve(1);
roots.push_back(node0x265282c0);
dag->setRoot(node0x265282c0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_lo__regs__:
    {
SDValue node0x26658100 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x26658260 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266584f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26658590 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26658260, node0x266584f0);
SDValue node0x26658620 = dag->getStore(entry, dl, node0x26658100, node0x26658590, mpi, 1);
roots.reserve(1);
roots.push_back(node0x26658620);
dag->setRoot(node0x26658620);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x266591a0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x26659440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266594e0 = dag->getStore(entry, dl, node0x266591a0, node0x26659440, mpi, 1);
roots.reserve(1);
roots.push_back(node0x266594e0);
dag->setRoot(node0x266594e0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x2665a690 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x2665a7f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2665aa80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2665ab20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2665a7f0, node0x2665aa80);
SDValue node0x2665abb0 = dag->getStore(entry, dl, node0x2665a690, node0x2665ab20, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2665abb0);
dag->setRoot(node0x2665abb0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_lo__reg0__:
    {
SDValue node0x266626b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266629f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2626fd60 = dag->getTruncStore(entry, dl, node0x266626b0, node0x266629f0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x2626fd60);
dag->setRoot(node0x2626fd60);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_lo__regs__:
    {
SDValue node0x26663d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26663f40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266641d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26664270 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26663f40, node0x266641d0);
SDValue node0x2626ff40 = dag->getTruncStore(entry, dl, node0x26663d40, node0x26664270, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x2626ff40);
dag->setRoot(node0x2626ff40);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x26664fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26665300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26270140 = dag->getTruncStore(entry, dl, node0x26664fc0, node0x26665300, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x26270140);
dag->setRoot(node0x26270140);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x266665d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266667d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26666a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26666b00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x266667d0, node0x26666a60);
SDValue node0x26270320 = dag->getTruncStore(entry, dl, node0x266665d0, node0x26666b00, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x26270320);
dag->setRoot(node0x26270320);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x26669be0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x26669e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26669f20 = dag->getStore(entry, dl, node0x26669be0, node0x26669e80, mpi, 1);
roots.reserve(1);
roots.push_back(node0x26669f20);
dag->setRoot(node0x26669f20);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_lo__regs__:
    {
SDValue node0x2666aee0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2666b040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2666b2d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2666b370 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2666b040, node0x2666b2d0);
SDValue node0x2666b400 = dag->getStore(entry, dl, node0x2666aee0, node0x2666b370, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2666b400);
dag->setRoot(node0x2666b400);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x2666bf80 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2666c220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2666c2c0 = dag->getStore(entry, dl, node0x2666bf80, node0x2666c220, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2666c2c0);
dag->setRoot(node0x2666c2c0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x2666d470 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x2666d5d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2666d860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2666d900 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2666d5d0, node0x2666d860);
SDValue node0x2666d990 = dag->getStore(entry, dl, node0x2666d470, node0x2666d900, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2666d990);
dag->setRoot(node0x2666d990);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_lo__reg0__:
    {
SDValue node0x26675680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266759c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26271000 = dag->getTruncStore(entry, dl, node0x26675680, node0x266759c0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x26271000);
dag->setRoot(node0x26271000);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_lo__regs__:
    {
SDValue node0x26676d10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26676f10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266771a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26677240 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x26676f10, node0x266771a0);
SDValue node0x262711e0 = dag->getTruncStore(entry, dl, node0x26676d10, node0x26677240, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x262711e0);
dag->setRoot(node0x262711e0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x26677f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266782d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x262713e0 = dag->getTruncStore(entry, dl, node0x26677f90, node0x266782d0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x262713e0);
dag->setRoot(node0x262713e0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x266795a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266797a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26679a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26679ad0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x266797a0, node0x26679a30);
SDValue node0x262715c0 = dag->getTruncStore(entry, dl, node0x266795a0, node0x26679ad0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x262715c0);
dag->setRoot(node0x262715c0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x2667cbb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2667cdb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2667ce50 = dag->getStore(entry, dl, node0x2667cbb0, node0x2667cdb0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2667ce50);
dag->setRoot(node0x2667ce50);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_lo__regs__:
    {
SDValue node0x2667de10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2667df70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2667e160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2667e200 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2667df70, node0x2667e160);
SDValue node0x2667e290 = dag->getStore(entry, dl, node0x2667de10, node0x2667e200, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2667e290);
dag->setRoot(node0x2667e290);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x2667ee10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x2667f010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2667f0b0 = dag->getStore(entry, dl, node0x2667ee10, node0x2667f010, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2667f0b0);
dag->setRoot(node0x2667f0b0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x26680260 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x266803c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266805b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26680650 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x266803c0, node0x266805b0);
SDValue node0x266806e0 = dag->getStore(entry, dl, node0x26680260, node0x26680650, mpi, 1);
roots.reserve(1);
roots.push_back(node0x266806e0);
dag->setRoot(node0x266806e0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_lo__reg0__:
    {
SDValue node0x26688290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26688520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26685d50 = dag->getStore(entry, dl, node0x26688290, node0x26688520, mpi, 1);
roots.reserve(1);
roots.push_back(node0x26685d50);
dag->setRoot(node0x26685d50);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_lo__regs__:
    {
SDValue node0x26689870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x266899c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x26689c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x26689cf0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x266899c0, node0x26689c50);
SDValue node0x26689d80 = dag->getStore(entry, dl, node0x26689870, node0x26689cf0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x26689d80);
dag->setRoot(node0x26689d80);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x2668a9f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2668ac80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2668ad20 = dag->getStore(entry, dl, node0x2668a9f0, node0x2668ac80, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2668ad20);
dag->setRoot(node0x2668ad20);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x2668bfa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x2668c0f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2668c380 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x2668c420 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x2668c0f0, node0x2668c380);
SDValue node0x2668c4b0 = dag->getStore(entry, dl, node0x2668bfa0, node0x2668c420, mpi, 1);
roots.reserve(1);
roots.push_back(node0x2668c4b0);
dag->setRoot(node0x2668c4b0);
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
SDValue node0x266bce60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x266bcb90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x266bce60, SDValue());
roots.reserve(1);
roots.push_back(node0x266bcb90);
dag->setRoot(node0x266bcb90);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__regs__simm12_simple__:
    {
SDValue node0x26592eb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x26593150 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x26592eb0);
roots.reserve(1);
roots.push_back(node0x26593150);
dag->setRoot(node0x26593150);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__regs__simm12_simple__:
    {
SDValue node0x2659db70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x2659c180 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x2659db70, SDValue());
SDValue node0x2659e020 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x2659e2c0 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x2659c180, node0x2659e020);
roots.reserve(2);
roots.push_back(node0x2659c180);
roots.push_back(node0x2659e2c0);
dag->setRoot(node0x2659e2c0);
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
