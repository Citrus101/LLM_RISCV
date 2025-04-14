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
 * \date    2025-04-14
 * \author  Codasip (c) C compiler backend generator
 * \version 9.4.2
 * \brief   Source for compiler backend
 * \project codasip_urisc_v.ia
 * \note          Codasip Studio version: 9.4.2
 *                Project: codasip_urisc_v.ia
 *                Date: 2025-04-14 11:48:10
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
SDValue node0x1602ed60 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x1654fea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1602eb70 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x1654fea0);
SDValue node0x165d23b0 = dag->getCopyToReg(node0x1602eb70, dl, dag->getRegister(Codasip::rf_gpr_1, MVT::i32), node0x1602ed60, SDValue());
roots.reserve(2);
roots.push_back(node0x165d23b0);
roots.push_back(node0x1602eb70);
dag->setRoot(node0x165d23b0);
    } else     {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jump_reg_alias__regs__:
    {
SDValue node0x162a37b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x162a3580 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x162a37b0);
roots.reserve(1);
roots.push_back(node0x162a3580);
dag->setRoot(node0x162a3580);
    }
    break;
  case Codasip::i_jmp_rel_alias__rel_addr20__:
    {
SDValue node0x162a1f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x162a21d0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x162a1f50);
roots.reserve(1);
roots.push_back(node0x162a21d0);
dag->setRoot(node0x162a21d0);
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
SDValue node0x16516c60 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x16287e40 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x16288060 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16516c60, node0x16287e40);
SDValue node0x16287df0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16288060, SDValue());
roots.reserve(1);
roots.push_back(node0x16287df0);
dag->setRoot(node0x16287df0);
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
SDValue node0x16321420 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163213d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16321420, SDValue());
roots.reserve(1);
roots.push_back(node0x163213d0);
dag->setRoot(node0x163213d0);
    }
    break;
  case Codasip::i_mv_alias__regs__regs__:
    {
SDValue node0x163224b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16322260 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163224b0, SDValue());
roots.reserve(1);
roots.push_back(node0x16322260);
dag->setRoot(node0x16322260);
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
SDValue node0x16340380 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x16340330 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16340380, SDValue());
roots.reserve(1);
roots.push_back(node0x16340330);
dag->setRoot(node0x16340330);
    }
    break;
  case Codasip::i_seqz_alias__regs__regs__:
    {
SDValue node0x16341330 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163414b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16341560 = dag->getSetCC(dl, MVT::i32, node0x163414b0, node0x16341330, ISD::SETEQ);
SDValue node0x16341260 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16341560, SDValue());
roots.reserve(1);
roots.push_back(node0x16341260);
dag->setRoot(node0x16341260);
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
SDValue node0x1634af30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1634aee0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1634af30, SDValue());
roots.reserve(1);
roots.push_back(node0x1634aee0);
dag->setRoot(node0x1634aee0);
    }
    break;
  case Codasip::i_snez_alias__regs__regs__:
    {
SDValue node0x1634be40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1634bfc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1634c070 = dag->getSetCC(dl, MVT::i32, node0x1634bfc0, node0x1634be40, ISD::SETNE);
SDValue node0x1634bd70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1634c070, SDValue());
roots.reserve(1);
roots.push_back(node0x1634bd70);
dag->setRoot(node0x1634bd70);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__regs__simm12_simple__immspec_1_:
    {
SDValue node0x163c41d0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x163c2910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163c41d0, SDValue());
SDValue node0x163c4540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163c4680 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x163c2910, node0x163c4540);
roots.reserve(2);
roots.push_back(node0x163c2910);
roots.push_back(node0x163c4680);
dag->setRoot(node0x163c4680);
    }
    break;
  case Codasip::i_call_rel_alias__rel_addr20__:
case Codasip::i_call_rel_alias__rel_addr20__ES:
case Codasip::i_call_rel_alias__rel_addr20__MC:
case Codasip::i_call_rel_alias__rel_addr20__BA:
    if (lowlevel) {
SDValue node0x1602fb40 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x1602fd50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x1602ffd0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x1602fd50);
SDValue node0x1602f1f0 = dag->getCopyToReg(node0x1602ffd0, dl, dag->getRegister(Codasip::rf_gpr_1, MVT::i32), node0x1602fb40, SDValue());
roots.reserve(2);
roots.push_back(node0x1602f1f0);
roots.push_back(node0x1602ffd0);
dag->setRoot(node0x1602f1f0);
    } else     {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__reg0__rel_addr20__:
    {
SDValue node0x1628ad60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x1628aa60 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x1628ad60);
roots.reserve(1);
roots.push_back(node0x1628aa60);
dag->setRoot(node0x1628aa60);
    }
    break;
  case Codasip::i_jal_abs__opc_jal__regs__rel_addr20__:
    {
SDValue node0x1628b340 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x1628a310 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1628b340, SDValue());
SDValue node0x1628b6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x1628b2e0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x1628a310, node0x1628b6b0);
roots.reserve(2);
roots.push_back(node0x1628a310);
roots.push_back(node0x1628b2e0);
dag->setRoot(node0x1628b2e0);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__reg0__rel_addr12__:
    {
SDValue node0x1643f280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x1643f530 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x1643f280);
roots.reserve(1);
roots.push_back(node0x1643f530);
dag->setRoot(node0x1643f530);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x16440800 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16440980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16440a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16440ad0 = dag->getSetCC(dl, MVT::iAny, node0x16440980, node0x16440800, ISD::SETEQ);
SDValue node0x16440cf0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16440ad0, node0x16440a30);
roots.reserve(1);
roots.push_back(node0x16440cf0);
dag->setRoot(node0x16440cf0);
    } else     {
SDValue node0x16440800 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16440980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16440a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16440ad0 = dag->getSetCC(dl, MVT::i32, node0x16440980, node0x16440800, ISD::SETEQ);
SDValue node0x16440cf0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16440ad0, node0x16440a30);
roots.reserve(1);
roots.push_back(node0x16440cf0);
dag->setRoot(node0x16440cf0);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x164431a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16443320 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164433d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16443470 = dag->getSetCC(dl, MVT::iAny, node0x16443320, node0x164431a0, ISD::SETEQ);
SDValue node0x16443690 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16443470, node0x164433d0);
roots.reserve(1);
roots.push_back(node0x16443690);
dag->setRoot(node0x16443690);
    } else     {
SDValue node0x164431a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16443320 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164433d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16443470 = dag->getSetCC(dl, MVT::i32, node0x16443320, node0x164431a0, ISD::SETEQ);
SDValue node0x16443690 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16443470, node0x164433d0);
roots.reserve(1);
roots.push_back(node0x16443690);
dag->setRoot(node0x16443690);
    }
    break;
  case Codasip::i_control_conditional__opc_beq__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x16444e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16444ec0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16444f70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x16445010 = dag->getSetCC(dl, MVT::iAny, node0x16444ec0, node0x16444e10, ISD::SETEQ);
SDValue node0x16445230 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16445010, node0x16444f70);
roots.reserve(1);
roots.push_back(node0x16445230);
dag->setRoot(node0x16445230);
    } else     {
SDValue node0x16444e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16444ec0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16444f70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x16445010 = dag->getSetCC(dl, MVT::i32, node0x16444ec0, node0x16444e10, ISD::SETEQ);
SDValue node0x16445230 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16445010, node0x16444f70);
roots.reserve(1);
roots.push_back(node0x16445230);
dag->setRoot(node0x16445230);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__reg0__rel_addr12__:
    {
SDValue node0x16446190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x16446440 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x16446190);
roots.reserve(1);
roots.push_back(node0x16446440);
dag->setRoot(node0x16446440);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x164473a0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x16447700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164477b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16447850 = dag->getSetCC(dl, MVT::iAny, node0x16447700, node0x164473a0, ISD::SETLT);
SDValue node0x16447a70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16447850, node0x164477b0);
roots.reserve(1);
roots.push_back(node0x16447a70);
dag->setRoot(node0x16447a70);
    } else     {
SDValue node0x164473a0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x16447700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164477b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16447850 = dag->getSetCC(dl, MVT::i32, node0x16447700, node0x164473a0, ISD::SETLT);
SDValue node0x16447a70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16447850, node0x164477b0);
roots.reserve(1);
roots.push_back(node0x16447a70);
dag->setRoot(node0x16447a70);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x1644a060 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x1644a140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1644a1f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x1644a290 = dag->getSetCC(dl, MVT::iAny, node0x1644a140, node0x1644a060, ISD::SETGT);
SDValue node0x1644a4b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1644a290, node0x1644a1f0);
roots.reserve(1);
roots.push_back(node0x1644a4b0);
dag->setRoot(node0x1644a4b0);
    } else     {
SDValue node0x1644a060 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x1644a140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1644a1f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x1644a290 = dag->getSetCC(dl, MVT::i32, node0x1644a140, node0x1644a060, ISD::SETGT);
SDValue node0x1644a4b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1644a290, node0x1644a1f0);
roots.reserve(1);
roots.push_back(node0x1644a4b0);
dag->setRoot(node0x1644a4b0);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x1644bc30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1644bce0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1644bd90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x1644be30 = dag->getSetCC(dl, MVT::iAny, node0x1644bce0, node0x1644bc30, ISD::SETGE);
SDValue node0x1644c050 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1644be30, node0x1644bd90);
roots.reserve(1);
roots.push_back(node0x1644c050);
dag->setRoot(node0x1644c050);
    } else     {
SDValue node0x1644bc30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1644bce0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1644bd90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x1644be30 = dag->getSetCC(dl, MVT::i32, node0x1644bce0, node0x1644bc30, ISD::SETGE);
SDValue node0x1644c050 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1644be30, node0x1644bd90);
roots.reserve(1);
roots.push_back(node0x1644c050);
dag->setRoot(node0x1644c050);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__reg0__rel_addr12__:
    {
SDValue node0x1644cfb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x1644d260 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x1644cfb0);
roots.reserve(1);
roots.push_back(node0x1644d260);
dag->setRoot(node0x1644d260);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x1644e3a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1644e520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1644e5d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x1644e670 = dag->getSetCC(dl, MVT::iAny, node0x1644e520, node0x1644e3a0, ISD::SETEQ);
SDValue node0x1644e890 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1644e670, node0x1644e5d0);
roots.reserve(1);
roots.push_back(node0x1644e890);
dag->setRoot(node0x1644e890);
    } else     {
SDValue node0x1644e3a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1644e520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1644e5d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x1644e670 = dag->getSetCC(dl, MVT::i32, node0x1644e520, node0x1644e3a0, ISD::SETEQ);
SDValue node0x1644e890 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1644e670, node0x1644e5d0);
roots.reserve(1);
roots.push_back(node0x1644e890);
dag->setRoot(node0x1644e890);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x16452940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164529f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16452aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x16452b40 = dag->getSetCC(dl, MVT::iAny, node0x164529f0, node0x16452940, ISD::SETUGE);
SDValue node0x16452d60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16452b40, node0x16452aa0);
roots.reserve(1);
roots.push_back(node0x16452d60);
dag->setRoot(node0x16452d60);
    } else     {
SDValue node0x16452940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164529f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16452aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x16452b40 = dag->getSetCC(dl, MVT::i32, node0x164529f0, node0x16452940, ISD::SETUGE);
SDValue node0x16452d60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16452b40, node0x16452aa0);
roots.reserve(1);
roots.push_back(node0x16452d60);
dag->setRoot(node0x16452d60);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x164549a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16454b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16454bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16454c70 = dag->getSetCC(dl, MVT::iAny, node0x16454b20, node0x164549a0, ISD::SETGT);
SDValue node0x16454e90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16454c70, node0x16454bd0);
roots.reserve(1);
roots.push_back(node0x16454e90);
dag->setRoot(node0x16454e90);
    } else     {
SDValue node0x164549a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16454b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16454bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16454c70 = dag->getSetCC(dl, MVT::i32, node0x16454b20, node0x164549a0, ISD::SETGT);
SDValue node0x16454e90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16454c70, node0x16454bd0);
roots.reserve(1);
roots.push_back(node0x16454e90);
dag->setRoot(node0x16454e90);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x16457390 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16457510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164575c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16457660 = dag->getSetCC(dl, MVT::iAny, node0x16457510, node0x16457390, ISD::SETLT);
SDValue node0x16457880 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16457660, node0x164575c0);
roots.reserve(1);
roots.push_back(node0x16457880);
dag->setRoot(node0x16457880);
    } else     {
SDValue node0x16457390 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16457510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164575c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16457660 = dag->getSetCC(dl, MVT::i32, node0x16457510, node0x16457390, ISD::SETLT);
SDValue node0x16457880 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16457660, node0x164575c0);
roots.reserve(1);
roots.push_back(node0x16457880);
dag->setRoot(node0x16457880);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x16459000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164590b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16459160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x16459200 = dag->getSetCC(dl, MVT::iAny, node0x164590b0, node0x16459000, ISD::SETLT);
SDValue node0x16459420 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16459200, node0x16459160);
roots.reserve(1);
roots.push_back(node0x16459420);
dag->setRoot(node0x16459420);
    } else     {
SDValue node0x16459000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164590b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16459160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x16459200 = dag->getSetCC(dl, MVT::i32, node0x164590b0, node0x16459000, ISD::SETLT);
SDValue node0x16459420 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16459200, node0x16459160);
roots.reserve(1);
roots.push_back(node0x16459420);
dag->setRoot(node0x16459420);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x1645b010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1645b190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1645b240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x1645b2e0 = dag->getSetCC(dl, MVT::iAny, node0x1645b190, node0x1645b010, ISD::SETNE);
SDValue node0x1645b500 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1645b2e0, node0x1645b240);
roots.reserve(1);
roots.push_back(node0x1645b500);
dag->setRoot(node0x1645b500);
    } else     {
SDValue node0x1645b010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1645b190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1645b240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x1645b2e0 = dag->getSetCC(dl, MVT::i32, node0x1645b190, node0x1645b010, ISD::SETNE);
SDValue node0x1645b500 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1645b2e0, node0x1645b240);
roots.reserve(1);
roots.push_back(node0x1645b500);
dag->setRoot(node0x1645b500);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x1645ee00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1645eeb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1645ef60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x1645f000 = dag->getSetCC(dl, MVT::iAny, node0x1645eeb0, node0x1645ee00, ISD::SETULT);
SDValue node0x1645f220 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1645f000, node0x1645ef60);
roots.reserve(1);
roots.push_back(node0x1645f220);
dag->setRoot(node0x1645f220);
    } else     {
SDValue node0x1645ee00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1645eeb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1645ef60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x1645f000 = dag->getSetCC(dl, MVT::i32, node0x1645eeb0, node0x1645ee00, ISD::SETULT);
SDValue node0x1645f220 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x1645f000, node0x1645ef60);
roots.reserve(1);
roots.push_back(node0x1645f220);
dag->setRoot(node0x1645f220);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__reg0__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x16460eb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16461030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164610e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16461180 = dag->getSetCC(dl, MVT::iAny, node0x16461030, node0x16460eb0, ISD::SETNE);
SDValue node0x164613a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16461180, node0x164610e0);
roots.reserve(1);
roots.push_back(node0x164613a0);
dag->setRoot(node0x164613a0);
    } else     {
SDValue node0x16460eb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16461030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164610e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16461180 = dag->getSetCC(dl, MVT::i32, node0x16461030, node0x16460eb0, ISD::SETNE);
SDValue node0x164613a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16461180, node0x164610e0);
roots.reserve(1);
roots.push_back(node0x164613a0);
dag->setRoot(node0x164613a0);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__regs__reg0__rel_addr12__:
    if (lowlevel) {
SDValue node0x164638a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16463a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16463ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16463b70 = dag->getSetCC(dl, MVT::iAny, node0x16463a20, node0x164638a0, ISD::SETNE);
SDValue node0x16463d90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16463b70, node0x16463ad0);
roots.reserve(1);
roots.push_back(node0x16463d90);
dag->setRoot(node0x16463d90);
    } else     {
SDValue node0x164638a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16463a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16463ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16463b70 = dag->getSetCC(dl, MVT::i32, node0x16463a20, node0x164638a0, ISD::SETNE);
SDValue node0x16463d90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16463b70, node0x16463ad0);
roots.reserve(1);
roots.push_back(node0x16463d90);
dag->setRoot(node0x16463d90);
    }
    break;
  case Codasip::i_control_conditional__opc_bne__regs__regs__rel_addr12__:
    if (lowlevel) {
SDValue node0x16465510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164655c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16465670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x16465710 = dag->getSetCC(dl, MVT::iAny, node0x164655c0, node0x16465510, ISD::SETNE);
SDValue node0x16465930 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16465710, node0x16465670);
roots.reserve(1);
roots.push_back(node0x16465930);
dag->setRoot(node0x16465930);
    } else     {
SDValue node0x16465510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164655c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16465670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x16465710 = dag->getSetCC(dl, MVT::i32, node0x164655c0, node0x16465510, ISD::SETNE);
SDValue node0x16465930 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x16465710, node0x16465670);
roots.reserve(1);
roots.push_back(node0x16465930);
dag->setRoot(node0x16465930);
    }
    break;
  case Codasip::i_control_conditional__opc_bge__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x163b6c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x163b6ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163b6f80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b7030 = dag->getSetCC(dl, MVT::iAny, node0x163b6ed0, node0x163b6f80, ISD::SETLE);
SDValue node0x163b70d0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x163b7030, node0x163b6c70);
roots.reserve(1);
roots.push_back(node0x163b70d0);
dag->setRoot(node0x163b70d0);
    } else     {
SDValue node0x163b6c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x163b6ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163b6f80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b7030 = dag->getSetCC(dl, MVT::i32, node0x163b6ed0, node0x163b6f80, ISD::SETLE);
SDValue node0x163b70d0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x163b7030, node0x163b6c70);
roots.reserve(1);
roots.push_back(node0x163b70d0);
dag->setRoot(node0x163b70d0);
    }
    break;
  case Codasip::i_control_conditional__opc_bgeu__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x163b7b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x163b7e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163b7ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b7f80 = dag->getSetCC(dl, MVT::iAny, node0x163b7e20, node0x163b7ed0, ISD::SETULE);
SDValue node0x163b8050 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x163b7f80, node0x163b7b90);
roots.reserve(1);
roots.push_back(node0x163b8050);
dag->setRoot(node0x163b8050);
    } else     {
SDValue node0x163b7b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x163b7e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163b7ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b7f80 = dag->getSetCC(dl, MVT::i32, node0x163b7e20, node0x163b7ed0, ISD::SETULE);
SDValue node0x163b8050 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x163b7f80, node0x163b7b90);
roots.reserve(1);
roots.push_back(node0x163b8050);
dag->setRoot(node0x163b8050);
    }
    break;
  case Codasip::i_control_conditional__opc_blt__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x163b8a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x163b8cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163b8da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b8e50 = dag->getSetCC(dl, MVT::iAny, node0x163b8cf0, node0x163b8da0, ISD::SETGT);
SDValue node0x163b8f20 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x163b8e50, node0x163b8a60);
roots.reserve(1);
roots.push_back(node0x163b8f20);
dag->setRoot(node0x163b8f20);
    } else     {
SDValue node0x163b8a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x163b8cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163b8da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b8e50 = dag->getSetCC(dl, MVT::i32, node0x163b8cf0, node0x163b8da0, ISD::SETGT);
SDValue node0x163b8f20 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x163b8e50, node0x163b8a60);
roots.reserve(1);
roots.push_back(node0x163b8f20);
dag->setRoot(node0x163b8f20);
    }
    break;
  case Codasip::i_control_conditional__opc_bltu__regs__regs__rel_addr12__swappedCmpClone0__:
    if (lowlevel) {
SDValue node0x163b9930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x163b9bc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163b9c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b9d20 = dag->getSetCC(dl, MVT::iAny, node0x163b9bc0, node0x163b9c70, ISD::SETUGT);
SDValue node0x163b9df0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x163b9d20, node0x163b9930);
roots.reserve(1);
roots.push_back(node0x163b9df0);
dag->setRoot(node0x163b9df0);
    } else     {
SDValue node0x163b9930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x163b9bc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163b9c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b9d20 = dag->getSetCC(dl, MVT::i32, node0x163b9bc0, node0x163b9c70, ISD::SETUGT);
SDValue node0x163b9df0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x163b9d20, node0x163b9930);
roots.reserve(1);
roots.push_back(node0x163b9df0);
dag->setRoot(node0x163b9df0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_simple__:
    {
SDValue node0x1628d690 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x1628d3c0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x1628d690);
roots.reserve(1);
roots.push_back(node0x1628d3c0);
dag->setRoot(node0x1628d3c0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_simple__:
    {
SDValue node0x16297c50 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x16297370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16297c50, SDValue());
SDValue node0x16297fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16297c20 = dag->getNode(ISD::BR, dl, MVT::Other, node0x16297370, node0x16297fc0);
roots.reserve(2);
roots.push_back(node0x16297370);
roots.push_back(node0x16297c20);
dag->setRoot(node0x16297c20);
    }
    break;
  case Codasip::i_auipc__opc_auipc__regs__imm20_s12__:
    {
SDValue node0x1654c7c0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x1654cab0 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x1654ccd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1654cd70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1654c7c0, node0x1654ccd0);
SDValue node0x1654ce00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1654cd70, node0x1654cab0);
SDValue node0x1654c770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1654ce00, SDValue());
roots.reserve(1);
roots.push_back(node0x1654c770);
dag->setRoot(node0x1654c770);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_simple__:
    {
SDValue node0x1601c2c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16231eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1601c2c0, SDValue());
roots.reserve(1);
roots.push_back(node0x16231eb0);
dag->setRoot(node0x16231eb0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__:
    {
SDValue node0x165e6aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1625a7c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1625a860 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x165e6aa0, node0x1625a7c0);
SDValue node0x162592e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1625a860, SDValue());
roots.reserve(1);
roots.push_back(node0x162592e0);
dag->setRoot(node0x162592e0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_simple__:
    {
SDValue node0x16626a50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16626b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16626ba0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x16626a50, node0x16626b00);
SDValue node0x16625590 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16626ba0, SDValue());
roots.reserve(1);
roots.push_back(node0x16625590);
dag->setRoot(node0x16625590);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_simple__:
    {
SDValue node0x16631930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x166307c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16631930, SDValue());
roots.reserve(1);
roots.push_back(node0x166307c0);
dag->setRoot(node0x166307c0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_simple__:
    {
SDValue node0x16635ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16635b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16635c20 = dag->getNode(ISD::OR, dl, MVT::i32, node0x16635ad0, node0x16635b80);
SDValue node0x16634620 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16635c20, SDValue());
roots.reserve(1);
roots.push_back(node0x16634620);
dag->setRoot(node0x16634620);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__:
    {
SDValue node0x16554b40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16554c20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16554cc0 = dag->getSetCC(dl, MVT::i32, node0x16554c20, node0x16554b40, ISD::SETGT);
SDValue node0x16553860 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16554cc0, SDValue());
roots.reserve(1);
roots.push_back(node0x16553860);
dag->setRoot(node0x16553860);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_simple__:
    {
SDValue node0x16559160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16559210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x165592b0 = dag->getSetCC(dl, MVT::i32, node0x16559160, node0x16559210, ISD::SETLT);
SDValue node0x16557b50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165592b0, SDValue());
roots.reserve(1);
roots.push_back(node0x16557b50);
dag->setRoot(node0x16557b50);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__:
    {
SDValue node0x16564780 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16564860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16564900 = dag->getSetCC(dl, MVT::i32, node0x16564860, node0x16564780, ISD::SETNE);
SDValue node0x165634a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16564900, SDValue());
roots.reserve(1);
roots.push_back(node0x165634a0);
dag->setRoot(node0x165634a0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_simple__:
    {
SDValue node0x16568da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16568e50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16568ef0 = dag->getSetCC(dl, MVT::i32, node0x16568da0, node0x16568e50, ISD::SETULT);
SDValue node0x16567790 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16568ef0, SDValue());
roots.reserve(1);
roots.push_back(node0x16567790);
dag->setRoot(node0x16567790);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_simple__:
    {
SDValue node0x165740b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16572ea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165740b0, SDValue());
roots.reserve(1);
roots.push_back(node0x16572ea0);
dag->setRoot(node0x16572ea0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_simple__:
    {
SDValue node0x16578390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16578440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x165784e0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x16578390, node0x16578440);
SDValue node0x16576e40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165784e0, SDValue());
roots.reserve(1);
roots.push_back(node0x16576e40);
dag->setRoot(node0x16576e40);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_slli__regs__regs__shift_imm__:
    {
SDValue node0x1657d250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1657d300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1657d3a0 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x1657d250, node0x1657d300);
SDValue node0x1657cda0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1657d3a0, SDValue());
roots.reserve(1);
roots.push_back(node0x1657cda0);
dag->setRoot(node0x1657cda0);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_srai__regs__regs__shift_imm__:
    {
SDValue node0x16582370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16582420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x165824c0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x16582370, node0x16582420);
SDValue node0x16581ec0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165824c0, SDValue());
roots.reserve(1);
roots.push_back(node0x16581ec0);
dag->setRoot(node0x16581ec0);
    }
    break;
  case Codasip::i_comp_2reg_imm_shift__opc_srli__regs__regs__shift_imm__:
    {
SDValue node0x16587490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16587540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x165875e0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x16587490, node0x16587540);
SDValue node0x16586fe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165875e0, SDValue());
roots.reserve(1);
roots.push_back(node0x16586fe0);
dag->setRoot(node0x16586fe0);
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
SDValue node0x1659cf30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1659b0e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1659cf30, SDValue());
roots.reserve(1);
roots.push_back(node0x1659b0e0);
dag->setRoot(node0x1659b0e0);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__reg0__regs__:
    {
SDValue node0x1659e120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1659d120 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1659e120, SDValue());
roots.reserve(1);
roots.push_back(node0x1659d120);
dag->setRoot(node0x1659d120);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__regs__reg0__:
    {
SDValue node0x165a0180 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1659e2b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165a0180, SDValue());
roots.reserve(1);
roots.push_back(node0x1659e2b0);
dag->setRoot(node0x1659e2b0);
    }
    break;
  case Codasip::i_comp_3reg__opc_add__regs__regs__regs__:
    {
SDValue node0x165a14b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x165a1560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x165a1610 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x165a14b0, node0x165a1560);
SDValue node0x165a11c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165a1610, SDValue());
roots.reserve(1);
roots.push_back(node0x165a11c0);
dag->setRoot(node0x165a11c0);
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
SDValue node0x165a9920 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x165a7ad0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165a9920, SDValue());
roots.reserve(1);
roots.push_back(node0x165a7ad0);
dag->setRoot(node0x165a7ad0);
    }
    break;
  case Codasip::i_comp_3reg__opc_and__regs__regs__regs__:
    {
SDValue node0x165adbb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x165adc60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x165add10 = dag->getNode(ISD::AND, dl, MVT::i32, node0x165adbb0, node0x165adc60);
SDValue node0x165aca10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165add10, SDValue());
roots.reserve(1);
roots.push_back(node0x165aca10);
dag->setRoot(node0x165aca10);
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
SDValue node0x163e1340 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163df4f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163e1340, SDValue());
roots.reserve(1);
roots.push_back(node0x163df4f0);
dag->setRoot(node0x163df4f0);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__reg0__regs__:
    {
SDValue node0x163e2590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163e1530 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163e2590, SDValue());
roots.reserve(1);
roots.push_back(node0x163e1530);
dag->setRoot(node0x163e1530);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__regs__reg0__:
    {
SDValue node0x163e4650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163e2720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163e4650, SDValue());
roots.reserve(1);
roots.push_back(node0x163e2720);
dag->setRoot(node0x163e2720);
    }
    break;
  case Codasip::i_comp_3reg__opc_or__regs__regs__regs__:
    {
SDValue node0x163e5990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163e5a40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x163e5af0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x163e5990, node0x163e5a40);
SDValue node0x163e47e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163e5af0, SDValue());
roots.reserve(1);
roots.push_back(node0x163e47e0);
dag->setRoot(node0x163e47e0);
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
SDValue node0x163ede60 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163ec010 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163ede60, SDValue());
roots.reserve(1);
roots.push_back(node0x163ec010);
dag->setRoot(node0x163ec010);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__reg0__:
    {
SDValue node0x163f0f60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163ef040 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163f0f60, SDValue());
roots.reserve(1);
roots.push_back(node0x163ef040);
dag->setRoot(node0x163ef040);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__regs__:
    {
SDValue node0x163f22e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163f2390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x163f24d0 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x163f22e0, node0x163f2390);
SDValue node0x163f10f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163f24d0, SDValue());
roots.reserve(1);
roots.push_back(node0x163f10f0);
dag->setRoot(node0x163f10f0);
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
SDValue node0x163fa810 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163f89c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163fa810, SDValue());
roots.reserve(1);
roots.push_back(node0x163f89c0);
dag->setRoot(node0x163f89c0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__reg0__regs__:
    {
SDValue node0x163fb880 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163fba00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163fbab0 = dag->getSetCC(dl, MVT::i32, node0x163fba00, node0x163fb880, ISD::SETGT);
SDValue node0x163faa00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163fbab0, SDValue());
roots.reserve(1);
roots.push_back(node0x163faa00);
dag->setRoot(node0x163faa00);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__reg0__:
    {
SDValue node0x163fda60 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x163fdc80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163fdd30 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x163fdc80, node0x163fda60);
SDValue node0x163fbdd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163fdd30, SDValue());
roots.reserve(1);
roots.push_back(node0x163fbdd0);
dag->setRoot(node0x163fbdd0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__regs__:
    {
SDValue node0x163ff020 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163ff0d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x163ff180 = dag->getSetCC(dl, MVT::i32, node0x163ff020, node0x163ff0d0, ISD::SETLT);
SDValue node0x163fdf40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163ff180, SDValue());
roots.reserve(1);
roots.push_back(node0x163fdf40);
dag->setRoot(node0x163fdf40);
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
SDValue node0x16407550 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16405860 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16407550, SDValue());
roots.reserve(1);
roots.push_back(node0x16405860);
dag->setRoot(node0x16405860);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__reg0__regs__:
    {
SDValue node0x164085c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16408740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164087f0 = dag->getSetCC(dl, MVT::i32, node0x16408740, node0x164085c0, ISD::SETNE);
SDValue node0x16407740 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164087f0, SDValue());
roots.reserve(1);
roots.push_back(node0x16407740);
dag->setRoot(node0x16407740);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__:
    {
SDValue node0x1640bab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1640bb60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1640bc10 = dag->getSetCC(dl, MVT::i32, node0x1640bab0, node0x1640bb60, ISD::SETULT);
SDValue node0x1640a910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1640bc10, SDValue());
roots.reserve(1);
roots.push_back(node0x1640a910);
dag->setRoot(node0x1640a910);
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
SDValue node0x16413fe0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16412190 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16413fe0, SDValue());
roots.reserve(1);
roots.push_back(node0x16412190);
dag->setRoot(node0x16412190);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__reg0__:
    {
SDValue node0x164170e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164151c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164170e0, SDValue());
roots.reserve(1);
roots.push_back(node0x164151c0);
dag->setRoot(node0x164151c0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__regs__:
    {
SDValue node0x16418460 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16418510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16418650 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x16418460, node0x16418510);
SDValue node0x16417270 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16418650, SDValue());
roots.reserve(1);
roots.push_back(node0x16417270);
dag->setRoot(node0x16417270);
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
SDValue node0x16420990 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1641eb40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16420990, SDValue());
roots.reserve(1);
roots.push_back(node0x1641eb40);
dag->setRoot(node0x1641eb40);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__reg0__:
    {
SDValue node0x16423a90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16421b70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16423a90, SDValue());
roots.reserve(1);
roots.push_back(node0x16421b70);
dag->setRoot(node0x16421b70);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__regs__:
    {
SDValue node0x16424e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16424ec0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16425000 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x16424e10, node0x16424ec0);
SDValue node0x16423c20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16425000, SDValue());
roots.reserve(1);
roots.push_back(node0x16423c20);
dag->setRoot(node0x16423c20);
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
SDValue node0x1642d340 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1642b4f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1642d340, SDValue());
roots.reserve(1);
roots.push_back(node0x1642b4f0);
dag->setRoot(node0x1642b4f0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__reg0__regs__:
    {
SDValue node0x1642e330 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1642e530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1642e5e0 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x1642e330, node0x1642e530);
SDValue node0x1642d530 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1642e5e0, SDValue());
roots.reserve(1);
roots.push_back(node0x1642d530);
dag->setRoot(node0x1642d530);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__regs__reg0__:
    {
SDValue node0x16430650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1642e7f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16430650, SDValue());
roots.reserve(1);
roots.push_back(node0x1642e7f0);
dag->setRoot(node0x1642e7f0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sub__regs__regs__regs__:
    {
SDValue node0x16431930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164319e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16431a90 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x16431930, node0x164319e0);
SDValue node0x164307e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16431a90, SDValue());
roots.reserve(1);
roots.push_back(node0x164307e0);
dag->setRoot(node0x164307e0);
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
SDValue node0x16439da0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16437f50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16439da0, SDValue());
roots.reserve(1);
roots.push_back(node0x16437f50);
dag->setRoot(node0x16437f50);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__reg0__regs__:
    {
SDValue node0x1643af90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16439f90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1643af90, SDValue());
roots.reserve(1);
roots.push_back(node0x16439f90);
dag->setRoot(node0x16439f90);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__regs__reg0__:
    {
SDValue node0x1643cff0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1643b120 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1643cff0, SDValue());
roots.reserve(1);
roots.push_back(node0x1643b120);
dag->setRoot(node0x1643b120);
    }
    break;
  case Codasip::i_comp_3reg__opc_xor__regs__regs__regs__:
    {
SDValue node0x1643e2d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1643e380 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1643e430 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x1643e2d0, node0x1643e380);
SDValue node0x1643d180 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1643e430, SDValue());
roots.reserve(1);
roots.push_back(node0x1643d180);
dag->setRoot(node0x1643d180);
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
SDValue node0x162b5f80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164f27f0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162b5f80, mpi, MVT::i8, 1);
SDValue node0x162b5300 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164f27f0, SDValue());
roots.reserve(1);
roots.push_back(node0x162b5300);
dag->setRoot(node0x162b5300);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__:
    {
SDValue node0x162b72a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162b7350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162b73f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162b72a0, node0x162b7350);
SDValue node0x164f2410 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162b73f0, mpi, MVT::i8, 1);
SDValue node0x162b51c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164f2410, SDValue());
roots.reserve(1);
roots.push_back(node0x162b51c0);
dag->setRoot(node0x162b51c0);
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
SDValue node0x162c7af0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162bd7c0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162c7af0, mpi, MVT::i8, 1);
SDValue node0x162c6e70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162bd7c0, SDValue());
roots.reserve(1);
roots.push_back(node0x162c6e70);
dag->setRoot(node0x162c6e70);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__:
    {
SDValue node0x162c8e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162c8ec0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162c8f60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162c8e10, node0x162c8ec0);
SDValue node0x162bc550 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162c8f60, mpi, MVT::i8, 1);
SDValue node0x162c6d30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162bc550, SDValue());
roots.reserve(1);
roots.push_back(node0x162c6d30);
dag->setRoot(node0x162c6d30);
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
SDValue node0x162d9660 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162cf330 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162d9660, mpi, MVT::i16, 1);
SDValue node0x162d89e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162cf330, SDValue());
roots.reserve(1);
roots.push_back(node0x162d89e0);
dag->setRoot(node0x162d89e0);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__:
    {
SDValue node0x162da980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162daa30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162daad0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162da980, node0x162daa30);
SDValue node0x162ce0c0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162daad0, mpi, MVT::i16, 1);
SDValue node0x162d88a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162ce0c0, SDValue());
roots.reserve(1);
roots.push_back(node0x162d88a0);
dag->setRoot(node0x162d88a0);
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
SDValue node0x162eb1d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162e0ea0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162eb1d0, mpi, MVT::i16, 1);
SDValue node0x162ea550 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162e0ea0, SDValue());
roots.reserve(1);
roots.push_back(node0x162ea550);
dag->setRoot(node0x162ea550);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__:
    {
SDValue node0x162ec4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162ec5a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162ec640 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162ec4f0, node0x162ec5a0);
SDValue node0x162dfc30 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162ec640, mpi, MVT::i16, 1);
SDValue node0x162ea410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162dfc30, SDValue());
roots.reserve(1);
roots.push_back(node0x162ea410);
dag->setRoot(node0x162ea410);
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
SDValue node0x162fca30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162fcad0 = dag->getLoad(MVT::i32, dl, entry, node0x162fca30, mpi, 1);
SDValue node0x162fbe00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162fcad0, SDValue());
roots.reserve(1);
roots.push_back(node0x162fbe00);
dag->setRoot(node0x162fbe00);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__:
    {
SDValue node0x162fdcf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162fdda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162fde40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162fdcf0, node0x162fdda0);
SDValue node0x162fded0 = dag->getLoad(MVT::i32, dl, entry, node0x162fde40, mpi, 1);
SDValue node0x162fbd10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162fded0, SDValue());
roots.reserve(1);
roots.push_back(node0x162fbd10);
dag->setRoot(node0x162fbd10);
    }
    break;
  case Codasip::i_lui__opc_lui__regs__imm20_s12__:
    {
SDValue node0x16319590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16319160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16319590, SDValue());
roots.reserve(1);
roots.push_back(node0x16319160);
dag->setRoot(node0x16319160);
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
SDValue node0x16324ff0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16324fa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16324ff0, SDValue());
roots.reserve(1);
roots.push_back(node0x16324fa0);
dag->setRoot(node0x16324fa0);
    }
    break;
  case Codasip::i_neg_alias__regs__regs__:
    {
SDValue node0x16325e80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16326080 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16326130 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x16325e80, node0x16326080);
SDValue node0x16325e30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16326130, SDValue());
roots.reserve(1);
roots.push_back(node0x16325e30);
dag->setRoot(node0x16325e30);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__reg0__:
    {
SDValue node0x16351200 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x163514a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16351540 = dag->getStore(entry, dl, node0x16351200, node0x163514a0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16351540);
dag->setRoot(node0x16351540);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__:
    {
SDValue node0x163521d0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x16352510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163525c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16352660 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16352510, node0x163525c0);
SDValue node0x163526f0 = dag->getStore(entry, dl, node0x163521d0, node0x16352660, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163526f0);
dag->setRoot(node0x163526f0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__reg0__:
    {
SDValue node0x1635d500 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1635d5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1606ca50 = dag->getTruncStore(entry, dl, node0x1635d500, node0x1635d5b0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x1606ca50);
dag->setRoot(node0x1606ca50);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__regs__:
    {
SDValue node0x1635e880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1635e930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1635e9e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1635eb30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1635e930, node0x1635e9e0);
SDValue node0x1635d700 = dag->getTruncStore(entry, dl, node0x1635e880, node0x1635eb30, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x1635d700);
dag->setRoot(node0x1635d700);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__:
    {
SDValue node0x16363fe0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x16364280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16364320 = dag->getStore(entry, dl, node0x16363fe0, node0x16364280, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16364320);
dag->setRoot(node0x16364320);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__:
    {
SDValue node0x163651a0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x163654e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16365590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16365630 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x163654e0, node0x16365590);
SDValue node0x163656c0 = dag->getStore(entry, dl, node0x163651a0, node0x16365630, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163656c0);
dag->setRoot(node0x163656c0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__reg0__:
    {
SDValue node0x163704d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16370580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1606cfb0 = dag->getTruncStore(entry, dl, node0x163704d0, node0x16370580, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x1606cfb0);
dag->setRoot(node0x1606cfb0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__regs__:
    {
SDValue node0x16371850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16371900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163719b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16371b00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16371900, node0x163719b0);
SDValue node0x163706d0 = dag->getTruncStore(entry, dl, node0x16371850, node0x16371b00, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x163706d0);
dag->setRoot(node0x163706d0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__reg0__:
    {
SDValue node0x16376d30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16376f30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16376fd0 = dag->getStore(entry, dl, node0x16376d30, node0x16376f30, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16376fd0);
dag->setRoot(node0x16376fd0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__regs__:
    {
SDValue node0x16377e50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163780f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163781a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16378240 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x163780f0, node0x163781a0);
SDValue node0x163782d0 = dag->getStore(entry, dl, node0x16377e50, node0x16378240, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163782d0);
dag->setRoot(node0x163782d0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__reg0__:
    {
SDValue node0x16382dd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16382e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16382f20 = dag->getStore(entry, dl, node0x16382dd0, node0x16382e80, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16382f20);
dag->setRoot(node0x16382f20);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__:
    {
SDValue node0x163840f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163841a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16384250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x163842f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x163841a0, node0x16384250);
SDValue node0x16384380 = dag->getStore(entry, dl, node0x163840f0, node0x163842f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16384380);
dag->setRoot(node0x16384380);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:
    {
SDValue node0x163b3eb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x162468b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163b3eb0, SDValue());
roots.reserve(1);
roots.push_back(node0x162468b0);
dag->setRoot(node0x162468b0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:
    {
SDValue node0x1625df80 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x160233d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1625df80, SDValue());
roots.reserve(1);
roots.push_back(node0x160233d0);
dag->setRoot(node0x160233d0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__0__:
    {
SDValue node0x163b4db0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163b4440 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163b4db0, SDValue());
roots.reserve(1);
roots.push_back(node0x163b4440);
dag->setRoot(node0x163b4440);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_simple__immSpecClone__imm_1__1__:
    {
SDValue node0x163b4610 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x163b3d40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163b4610, SDValue());
roots.reserve(1);
roots.push_back(node0x163b3d40);
dag->setRoot(node0x163b3d40);
    }
    break;
  case Codasip::i_comp_3reg__opc_sll__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x1629b680 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x162ea200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1629a1d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16370620 = dag->getNode(ISD::AND, dl, MVT::i32, node0x1629a1d0, node0x1629b680);
SDValue node0x1635ea80 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x162ea200, node0x16370620);
SDValue node0x1606b2c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1635ea80, SDValue());
roots.reserve(1);
roots.push_back(node0x1606b2c0);
dag->setRoot(node0x1606b2c0);
    }
    break;
  case Codasip::i_comp_3reg__opc_slt__regs__regs__regs__swappedCmpClone0__:
    {
SDValue node0x1625def0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b2c10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x163b5650 = dag->getSetCC(dl, MVT::i32, node0x1625def0, node0x163b2c10, ISD::SETGT);
SDValue node0x163b52e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163b5650, SDValue());
roots.reserve(1);
roots.push_back(node0x163b52e0);
dag->setRoot(node0x163b52e0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sltu__regs__regs__regs__swappedCmpClone0__:
    {
SDValue node0x163b5ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b6020 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x163b60d0 = dag->getSetCC(dl, MVT::i32, node0x163b5ed0, node0x163b6020, ISD::SETUGT);
SDValue node0x163b4be0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163b60d0, SDValue());
roots.reserve(1);
roots.push_back(node0x163b4be0);
dag->setRoot(node0x163b4be0);
    }
    break;
  case Codasip::i_comp_3reg__opc_sra__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x163f20c0 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x162904c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1628f490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x163f2440 = dag->getNode(ISD::AND, dl, MVT::i32, node0x1628f490, node0x163f20c0);
SDValue node0x1635d650 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x162904c0, node0x163f2440);
SDValue node0x16095720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1635d650, SDValue());
roots.reserve(1);
roots.push_back(node0x16095720);
dag->setRoot(node0x16095720);
    }
    break;
  case Codasip::i_comp_3reg__opc_srl__regs__regs__regs__SHIFT_MASK_CLONE_:
    {
SDValue node0x16418240 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x162f2a10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162f17a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164185c0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x162f17a0, node0x16418240);
SDValue node0x1634c110 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x162f2a10, node0x164185c0);
SDValue node0x160960a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1634c110, SDValue());
roots.reserve(1);
roots.push_back(node0x160960a0);
dag->setRoot(node0x160960a0);
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
SDValue node0x162a1b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162b6020 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x162a1b80, mpi, MVT::i8, 1);
SDValue node0x164eadc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162b6020, SDValue());
roots.reserve(1);
roots.push_back(node0x164eadc0);
dag->setRoot(node0x164eadc0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x162b7480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162b6f60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162b7550 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162b7480, node0x162b6f60);
SDValue node0x164f0bf0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x162b7550, mpi, MVT::i8, 1);
SDValue node0x160669c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164f0bf0, SDValue());
roots.reserve(1);
roots.push_back(node0x160669c0);
dag->setRoot(node0x160669c0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163c5650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163be3b0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x163c5650, mpi, MVT::i8, 1);
SDValue node0x163c1350 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163be3b0, SDValue());
roots.reserve(1);
roots.push_back(node0x163c1350);
dag->setRoot(node0x163c1350);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x163c5700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163bd8f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x163c5700, mpi, MVT::i8, 1);
SDValue node0x163b5c80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163bd8f0, SDValue());
roots.reserve(1);
roots.push_back(node0x163b5c80);
dag->setRoot(node0x163b5c80);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x162bc2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162c7b90 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x162bc2b0, mpi, MVT::i8, 1);
SDValue node0x160675d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162c7b90, SDValue());
roots.reserve(1);
roots.push_back(node0x160675d0);
dag->setRoot(node0x160675d0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x162c8ff0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162c8ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162c90c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162c8ff0, node0x162c8ad0);
SDValue node0x164f0810 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x162c90c0, mpi, MVT::i8, 1);
SDValue node0x160680e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164f0810, SDValue());
roots.reserve(1);
roots.push_back(node0x160680e0);
dag->setRoot(node0x160680e0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163c5fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163bcdc0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x163c5fc0, mpi, MVT::i8, 1);
SDValue node0x163c1e50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163bcdc0, SDValue());
roots.reserve(1);
roots.push_back(node0x163c1e50);
dag->setRoot(node0x163c1e50);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x163c6070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163bc340 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x163c6070, mpi, MVT::i8, 1);
SDValue node0x163b66b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163bc340, SDValue());
roots.reserve(1);
roots.push_back(node0x163b66b0);
dag->setRoot(node0x163b66b0);
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
SDValue node0x162cde20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162d9700 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x162cde20, mpi, MVT::i16, 1);
SDValue node0x16068d20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162d9700, SDValue());
roots.reserve(1);
roots.push_back(node0x16068d20);
dag->setRoot(node0x16068d20);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x162dab60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162da640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162dac30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162dab60, node0x162da640);
SDValue node0x164f0430 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x162dac30, mpi, MVT::i16, 1);
SDValue node0x16069830 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164f0430, SDValue());
roots.reserve(1);
roots.push_back(node0x16069830);
dag->setRoot(node0x16069830);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163c7290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163c6a20 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x163c7290, mpi, MVT::i16, 1);
SDValue node0x163c5c00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163c6a20, SDValue());
roots.reserve(1);
roots.push_back(node0x163c5c00);
dag->setRoot(node0x163c5c00);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x163c7340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163bc290 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x163c7340, mpi, MVT::i16, 1);
SDValue node0x16096470 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163bc290, SDValue());
roots.reserve(1);
roots.push_back(node0x16096470);
dag->setRoot(node0x16096470);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__reg0__AEXT_CLONE_:
    {
SDValue node0x162df990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162eb270 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x162df990, mpi, MVT::i16, 1);
SDValue node0x1606a440 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162eb270, SDValue());
roots.reserve(1);
roots.push_back(node0x1606a440);
dag->setRoot(node0x1606a440);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__AEXT_CLONE_:
    {
SDValue node0x162ec6d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162ec1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162ec7a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162ec6d0, node0x162ec1b0);
SDValue node0x164f0050 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x162ec7a0, mpi, MVT::i16, 1);
SDValue node0x1606af50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164f0050, SDValue());
roots.reserve(1);
roots.push_back(node0x1606af50);
dag->setRoot(node0x1606af50);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163c7c00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163bb6a0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x163c7c00, mpi, MVT::i16, 1);
SDValue node0x163c3fb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163bb6a0, SDValue());
roots.reserve(1);
roots.push_back(node0x163c3fb0);
dag->setRoot(node0x163c3fb0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_simple__regs__immspec_1_AEXT_CLONE_:
    {
SDValue node0x163c7cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164eecc0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x163c7cb0, mpi, MVT::i16, 1);
SDValue node0x163bf370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164eecc0, SDValue());
roots.reserve(1);
roots.push_back(node0x163bf370);
dag->setRoot(node0x163bf370);
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
SDValue node0x163c8ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163c8f80 = dag->getLoad(MVT::i32, dl, entry, node0x163c8ed0, mpi, 1);
SDValue node0x163c7840 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163c8f80, SDValue());
roots.reserve(1);
roots.push_back(node0x163c7840);
dag->setRoot(node0x163c7840);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163c95e0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x163c9800 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163c9580 = dag->getStore(entry, dl, node0x163c95e0, node0x163c9800, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163c9580);
dag->setRoot(node0x163c9580);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163c9ff0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163ca0a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163bf570 = dag->getTruncStore(entry, dl, node0x163c9ff0, node0x163ca0a0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x163bf570);
dag->setRoot(node0x163bf570);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163ca740 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x163ca960 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163ca6e0 = dag->getStore(entry, dl, node0x163ca740, node0x163ca960, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163ca6e0);
dag->setRoot(node0x163ca6e0);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163cb1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163cb270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163c2010 = dag->getTruncStore(entry, dl, node0x163cb1c0, node0x163cb270, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x163c2010);
dag->setRoot(node0x163c2010);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163cb910 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163cba90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163cb8b0 = dag->getStore(entry, dl, node0x163cb910, node0x163cba90, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163cb8b0);
dag->setRoot(node0x163cb8b0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__immspec_1_:
    {
SDValue node0x163cc2f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163cc3a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163cc130 = dag->getStore(entry, dl, node0x163cc2f0, node0x163cc3a0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163cc130);
dag->setRoot(node0x163cc130);
    }
    break;
  case Codasip::i_jal__opc_jal__reg0__rel_addr20__:
    {
SDValue node0x16288ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x16288d90 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x16288ba0);
roots.reserve(1);
roots.push_back(node0x16288d90);
dag->setRoot(node0x16288d90);
    }
    break;
  case Codasip::i_jal__opc_jal__regs__rel_addr20__:
    {
SDValue node0x16289b50 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x162881d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16289b50, SDValue());
SDValue node0x16289f60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x1628a150 = dag->getNode(ISD::BR, dl, MVT::Other, node0x162881d0, node0x16289f60);
roots.reserve(2);
roots.push_back(node0x162881d0);
roots.push_back(node0x1628a150);
dag->setRoot(node0x1628a150);
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
SDValue node0x1649fe30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1649fd90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1649fe30, SDValue());
roots.reserve(1);
roots.push_back(node0x1649fd90);
dag->setRoot(node0x1649fd90);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_a__regs__regs__regs__:
    if (lowlevel) {
SDValue node0x164a4620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164a4840 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164a48f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164a49a0 = dag->getSetCC(dl, MVT::iAny, node0x164a4840, node0x164a4620, ISD::SETEQ);
SDValue node0x1649dbd0 = dag->getNode(ISD::SDIV, dl, MVT::i32, node0x164a48f0, node0x164a4840);
SDValue node0x164a4a90 = dag->getNode(ISD::SELECT, dl, MVT::i32, node0x164a49a0, node0x164a4620, node0x1649dbd0);
SDValue node0x164a4500 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164a4a90, SDValue());
roots.reserve(1);
roots.push_back(node0x164a4500);
dag->setRoot(node0x164a4500);
    } else     {
SDValue node0x164a4620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164a4840 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164a48f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164a49a0 = dag->getSetCC(dl, MVT::i32, node0x164a4840, node0x164a4620, ISD::SETEQ);
SDValue node0x1649dbd0 = dag->getNode(ISD::SDIV, dl, MVT::i32, node0x164a48f0, node0x164a4840);
SDValue node0x164a4a90 = dag->getNode(ISD::SELECT, dl, MVT::i32, node0x164a49a0, node0x164a4620, node0x1649dbd0);
SDValue node0x164a4500 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164a4a90, SDValue());
roots.reserve(1);
roots.push_back(node0x164a4500);
dag->setRoot(node0x164a4500);
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
SDValue node0x164b3b30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164b3bb0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164b3c50 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164b3cf0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164b3d90 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164b3e90 = dag->getLoad(MVT::i16, dl, entry, node0x164b3b30, mpi, 1);
SDValue node0x164b3f60 = dag->getLoad(MVT::i16, dl, entry, node0x164b3b30, mpi, 1);
SDValue node0x164b4030 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b3f60, node0x164b3e90);
SDValue node0x164b40c0 = dag->getLoad(MVT::i16, dl, entry, node0x164b3bb0, mpi, 1);
SDValue node0x164b4190 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b4030, node0x164b3cf0);
SDValue node0x164b4250 = dag->getLoad(MVT::i16, dl, entry, node0x164b3bb0, mpi, 1);
SDValue node0x164b4320 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b4250, node0x164b40c0);
SDValue node0x164b43e0 = dag->getLoad(MVT::i16, dl, entry, node0x164b3c50, mpi, 1);
SDValue node0x164b44b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b4320, node0x164b3cf0);
SDValue node0x164b4570 = dag->getLoad(MVT::i16, dl, entry, node0x164b3c50, mpi, 1);
SDValue node0x164b4640 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164b44b0, node0x164b4190);
SDValue node0x164b4700 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b4570, node0x164b43e0);
SDValue node0x164b47c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b4700, node0x164b3cf0);
SDValue node0x164b4880 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164b4640, node0x164b47c0);
SDValue node0x165db2a0 = dag->getStore(entry, dl, node0x164b4880, node0x164b3d90, mpi, 1);
roots.reserve(1);
roots.push_back(node0x165db2a0);
dag->setRoot(node0x165db2a0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__reg0__reg0__regs__:
    {
SDValue node0x164b5910 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164b5990 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164b5a30 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164b5ad0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164b5b70 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164b5c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164b5d00 = dag->getLoad(MVT::i16, dl, entry, node0x164b5910, mpi, 1);
SDValue node0x164b5dd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164b5c50, node0x164b5a30);
SDValue node0x164b5e60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164b5c50, node0x164b5990);
SDValue node0x164b5f20 = dag->getLoad(MVT::i16, dl, entry, node0x164b5c50, mpi, 1);
SDValue node0x164b5ff0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b5f20, node0x164b5d00);
SDValue node0x164b60b0 = dag->getLoad(MVT::i16, dl, entry, node0x164b5990, mpi, 1);
SDValue node0x164b6180 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b5ff0, node0x164b5ad0);
SDValue node0x164b6240 = dag->getLoad(MVT::i16, dl, entry, node0x164b5e60, mpi, 1);
SDValue node0x164b6310 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b6240, node0x164b60b0);
SDValue node0x164b63d0 = dag->getLoad(MVT::i16, dl, entry, node0x164b5a30, mpi, 1);
SDValue node0x164b64a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b6310, node0x164b5ad0);
SDValue node0x164b6560 = dag->getLoad(MVT::i16, dl, entry, node0x164b5dd0, mpi, 1);
SDValue node0x164b6630 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164b64a0, node0x164b6180);
SDValue node0x164b66f0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b6560, node0x164b63d0);
SDValue node0x164b67b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b66f0, node0x164b5ad0);
SDValue node0x164b6870 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164b6630, node0x164b67b0);
SDValue node0x1623c750 = dag->getStore(entry, dl, node0x164b6870, node0x164b5b70, mpi, 1);
roots.reserve(1);
roots.push_back(node0x1623c750);
dag->setRoot(node0x1623c750);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__reg0__regs__reg0__:
    {
SDValue node0x164b8590 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164b8610 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164b86b0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164b8750 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164b87f0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164b88d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164b8980 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164b88d0, node0x164b86b0);
SDValue node0x164b8a10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164b88d0, node0x164b8610);
SDValue node0x164b8ad0 = dag->getLoad(MVT::i16, dl, entry, node0x164b88d0, mpi, 1);
SDValue node0x164b8ba0 = dag->getLoad(MVT::i16, dl, entry, node0x164b8590, mpi, 1);
SDValue node0x164b8c70 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b8ba0, node0x164b8ad0);
SDValue node0x164b8d30 = dag->getLoad(MVT::i16, dl, entry, node0x164b8a10, mpi, 1);
SDValue node0x164b8e00 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b8c70, node0x164b8750);
SDValue node0x164b8ec0 = dag->getLoad(MVT::i16, dl, entry, node0x164b8610, mpi, 1);
SDValue node0x164b8f90 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b8ec0, node0x164b8d30);
SDValue node0x164b9050 = dag->getLoad(MVT::i16, dl, entry, node0x164b8980, mpi, 1);
SDValue node0x164b9120 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b8f90, node0x164b8750);
SDValue node0x164b91e0 = dag->getLoad(MVT::i16, dl, entry, node0x164b86b0, mpi, 1);
SDValue node0x164b92b0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164b9120, node0x164b8e00);
SDValue node0x164b9370 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164b91e0, node0x164b9050);
SDValue node0x164b9430 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164b9370, node0x164b8750);
SDValue node0x164b94f0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164b92b0, node0x164b9430);
SDValue node0x166081e0 = dag->getStore(entry, dl, node0x164b94f0, node0x164b87f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x166081e0);
dag->setRoot(node0x166081e0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__reg0__regs__regs__:
    {
SDValue node0x164baaf0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164bab90 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164bac30 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164bacd0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164badb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164bae60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164baf10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164badb0, node0x164bab90);
SDValue node0x164bafa0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164badb0, node0x164baaf0);
SDValue node0x164bb060 = dag->getLoad(MVT::i16, dl, entry, node0x164badb0, mpi, 1);
SDValue node0x164bb130 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164bae60, node0x164bab90);
SDValue node0x164bb1f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164bae60, node0x164baaf0);
SDValue node0x164bb2b0 = dag->getLoad(MVT::i16, dl, entry, node0x164bae60, mpi, 1);
SDValue node0x164bb380 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164bb2b0, node0x164bb060);
SDValue node0x164bb440 = dag->getLoad(MVT::i16, dl, entry, node0x164bafa0, mpi, 1);
SDValue node0x164bb510 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164bb380, node0x164bac30);
SDValue node0x164bb5d0 = dag->getLoad(MVT::i16, dl, entry, node0x164bb1f0, mpi, 1);
SDValue node0x164bb6a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164bb5d0, node0x164bb440);
SDValue node0x164bb760 = dag->getLoad(MVT::i16, dl, entry, node0x164baf10, mpi, 1);
SDValue node0x164bb830 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164bb6a0, node0x164bac30);
SDValue node0x164bb8f0 = dag->getLoad(MVT::i16, dl, entry, node0x164bb130, mpi, 1);
SDValue node0x164bb9c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164bb830, node0x164bb510);
SDValue node0x164bba80 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164bb8f0, node0x164bb760);
SDValue node0x164bbb40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164bba80, node0x164bac30);
SDValue node0x164bbc00 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164bb9c0, node0x164bbb40);
SDValue node0x16019aa0 = dag->getStore(entry, dl, node0x164bbc00, node0x164bacd0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16019aa0);
dag->setRoot(node0x16019aa0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__reg0__reg0__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__reg0__reg0__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__reg0__regs__reg0__:
    {
roots.reserve(0);
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__reg0__regs__regs__:
    {
roots.reserve(0);
dag->setRoot(entry);
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
SDValue node0x164e9c90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164e9bf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164e9c90, SDValue());
roots.reserve(1);
roots.push_back(node0x164e9bf0);
dag->setRoot(node0x164e9bf0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_e__regs__regs__reg0__:
    if (lowlevel) {
SDValue node0x164ed1b0 = dag->getConstant(-32768LL, dl, MVT::i32);
SDValue node0x164ed250 = dag->getConstant(32767LL, dl, MVT::i32);
SDValue node0x164ed470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164ed520 = dag->getSetCC(dl, MVT::iAny, node0x164ed470, node0x164ed1b0, ISD::SETGT);
SDValue node0x164e79d0 = dag->getNode(ISD::SELECT, dl, MVT::i32, node0x164ed520, node0x164ed470, node0x164ed1b0);
SDValue node0x164ed5e0 = dag->getSetCC(dl, MVT::iAny, node0x164e79d0, node0x164ed250, ISD::SETLT);
SDValue node0x164ed6b0 = dag->getNode(ISD::SELECT, dl, MVT::i32, node0x164ed5e0, node0x164e79d0, node0x164ed250);
SDValue node0x164ed090 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164ed6b0, SDValue());
roots.reserve(1);
roots.push_back(node0x164ed090);
dag->setRoot(node0x164ed090);
    } else     {
SDValue node0x164ed1b0 = dag->getConstant(-32768LL, dl, MVT::i32);
SDValue node0x164ed250 = dag->getConstant(32767LL, dl, MVT::i32);
SDValue node0x164ed470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164ed520 = dag->getSetCC(dl, MVT::i32, node0x164ed470, node0x164ed1b0, ISD::SETGT);
SDValue node0x164e79d0 = dag->getNode(ISD::SELECT, dl, MVT::i32, node0x164ed520, node0x164ed470, node0x164ed1b0);
SDValue node0x164ed5e0 = dag->getSetCC(dl, MVT::i32, node0x164e79d0, node0x164ed250, ISD::SETLT);
SDValue node0x164ed6b0 = dag->getNode(ISD::SELECT, dl, MVT::i32, node0x164ed5e0, node0x164e79d0, node0x164ed250);
SDValue node0x164ed090 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164ed6b0, SDValue());
roots.reserve(1);
roots.push_back(node0x164ed090);
dag->setRoot(node0x164ed090);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__reg0__reg0__reg0__:
    {
SDValue node0x164efb30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164efbb0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164efc50 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164efcf0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164efdd0 = dag->getLoad(MVT::i16, dl, entry, node0x164efb30, mpi, 1);
SDValue node0x164efea0 = dag->getLoad(MVT::i16, dl, entry, node0x164efb30, mpi, 1);
SDValue node0x164eff70 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164efea0, node0x164efdd0);
SDValue node0x164e7b60 = dag->getStore(entry, dl, node0x164eff70, node0x164efb30, mpi, 1);
SDValue node0x164f0120 = dag->getLoad(MVT::i16, dl, node0x164e7b60, node0x164efbb0, mpi, 1);
SDValue node0x164f01f0 = dag->getLoad(MVT::i16, dl, node0x164e7b60, node0x164efbb0, mpi, 1);
SDValue node0x164f02c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f01f0, node0x164f0120);
SDValue node0x164f0380 = dag->getStore(node0x164e7b60, dl, node0x164f02c0, node0x164efbb0, mpi, 1);
SDValue node0x164f0500 = dag->getLoad(MVT::i16, dl, node0x164f0380, node0x164efc50, mpi, 1);
SDValue node0x164f05d0 = dag->getLoad(MVT::i16, dl, node0x164f0380, node0x164efc50, mpi, 1);
SDValue node0x164f06a0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f05d0, node0x164f0500);
SDValue node0x164f0760 = dag->getStore(node0x164f0380, dl, node0x164f06a0, node0x164efc50, mpi, 1);
SDValue node0x164f08e0 = dag->getLoad(MVT::i16, dl, node0x164f0760, node0x164efcf0, mpi, 1);
SDValue node0x164f09b0 = dag->getLoad(MVT::i16, dl, node0x164f0760, node0x164efcf0, mpi, 1);
SDValue node0x164f0a80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f09b0, node0x164f08e0);
SDValue node0x164f0b40 = dag->getStore(node0x164f0760, dl, node0x164f0a80, node0x164efcf0, mpi, 1);
roots.reserve(4);
roots.push_back(node0x164e7b60);
roots.push_back(node0x164f0380);
roots.push_back(node0x164f0760);
roots.push_back(node0x164f0b40);
dag->setRoot(node0x164f0b40);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__reg0__reg0__regs__:
    {
SDValue node0x164f1c00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164f1c80 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164f1d20 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164f1dc0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164f1ea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164f1f50 = dag->getLoad(MVT::i16, dl, entry, node0x164f1c00, mpi, 1);
SDValue node0x164f2020 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f1ea0, node0x164f1dc0);
SDValue node0x164f20b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f1ea0, node0x164f1d20);
SDValue node0x164f2170 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f1ea0, node0x164f1c80);
SDValue node0x164f2230 = dag->getLoad(MVT::i16, dl, entry, node0x164f1ea0, mpi, 1);
SDValue node0x164f2300 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f2230, node0x164f1f50);
SDValue node0x164f1b20 = dag->getStore(entry, dl, node0x164f2300, node0x164f1c00, mpi, 1);
SDValue node0x164f24e0 = dag->getLoad(MVT::i16, dl, node0x164f1b20, node0x164f1c80, mpi, 1);
SDValue node0x164f25b0 = dag->getLoad(MVT::i16, dl, node0x164f1b20, node0x164f2170, mpi, 1);
SDValue node0x164f2680 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f25b0, node0x164f24e0);
SDValue node0x164f2740 = dag->getStore(node0x164f1b20, dl, node0x164f2680, node0x164f1c80, mpi, 1);
SDValue node0x164f28c0 = dag->getLoad(MVT::i16, dl, node0x164f2740, node0x164f1d20, mpi, 1);
SDValue node0x164f2990 = dag->getLoad(MVT::i16, dl, node0x164f2740, node0x164f20b0, mpi, 1);
SDValue node0x164f2a60 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f2990, node0x164f28c0);
SDValue node0x164f2b20 = dag->getStore(node0x164f2740, dl, node0x164f2a60, node0x164f1d20, mpi, 1);
SDValue node0x164f2ca0 = dag->getLoad(MVT::i16, dl, node0x164f2b20, node0x164f1dc0, mpi, 1);
SDValue node0x164f2d70 = dag->getLoad(MVT::i16, dl, node0x164f2b20, node0x164f2020, mpi, 1);
SDValue node0x164f2e40 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f2d70, node0x164f2ca0);
SDValue node0x164f2f00 = dag->getStore(node0x164f2b20, dl, node0x164f2e40, node0x164f1dc0, mpi, 1);
roots.reserve(4);
roots.push_back(node0x164f1b20);
roots.push_back(node0x164f2740);
roots.push_back(node0x164f2b20);
roots.push_back(node0x164f2f00);
dag->setRoot(node0x164f2f00);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__reg0__regs__reg0__:
    {
SDValue node0x164f4d40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164f4dc0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164f4e60 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164f4f00 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164f4fe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164f5090 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f4fe0, node0x164f4f00);
SDValue node0x164f5120 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f4fe0, node0x164f4e60);
SDValue node0x164f51e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f4fe0, node0x164f4dc0);
SDValue node0x164f52a0 = dag->getLoad(MVT::i16, dl, entry, node0x164f4fe0, mpi, 1);
SDValue node0x164f5370 = dag->getLoad(MVT::i16, dl, entry, node0x164f4d40, mpi, 1);
SDValue node0x164f5440 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f5370, node0x164f52a0);
SDValue node0x164f40e0 = dag->getStore(entry, dl, node0x164f5440, node0x164f4d40, mpi, 1);
SDValue node0x164f5620 = dag->getLoad(MVT::i16, dl, node0x164f40e0, node0x164f51e0, mpi, 1);
SDValue node0x164f56f0 = dag->getLoad(MVT::i16, dl, node0x164f40e0, node0x164f4dc0, mpi, 1);
SDValue node0x164f57c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f56f0, node0x164f5620);
SDValue node0x164f5880 = dag->getStore(node0x164f40e0, dl, node0x164f57c0, node0x164f4dc0, mpi, 1);
SDValue node0x164f5a00 = dag->getLoad(MVT::i16, dl, node0x164f5880, node0x164f5120, mpi, 1);
SDValue node0x164f5ad0 = dag->getLoad(MVT::i16, dl, node0x164f5880, node0x164f4e60, mpi, 1);
SDValue node0x164f5ba0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f5ad0, node0x164f5a00);
SDValue node0x164f5c60 = dag->getStore(node0x164f5880, dl, node0x164f5ba0, node0x164f4e60, mpi, 1);
SDValue node0x164f5de0 = dag->getLoad(MVT::i16, dl, node0x164f5c60, node0x164f5090, mpi, 1);
SDValue node0x164f5eb0 = dag->getLoad(MVT::i16, dl, node0x164f5c60, node0x164f4f00, mpi, 1);
SDValue node0x164f5f80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f5eb0, node0x164f5de0);
SDValue node0x164f6040 = dag->getStore(node0x164f5c60, dl, node0x164f5f80, node0x164f4f00, mpi, 1);
roots.reserve(4);
roots.push_back(node0x164f40e0);
roots.push_back(node0x164f5880);
roots.push_back(node0x164f5c60);
roots.push_back(node0x164f6040);
dag->setRoot(node0x164f6040);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__reg0__regs__regs__:
    {
SDValue node0x164f75f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164f7710 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164f77b0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164f7850 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164f7930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164f79e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x164f7a90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f7930, node0x164f7850);
SDValue node0x164f7b20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f7930, node0x164f77b0);
SDValue node0x164f7be0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f7930, node0x164f7710);
SDValue node0x164f7ca0 = dag->getLoad(MVT::i16, dl, entry, node0x164f7930, mpi, 1);
SDValue node0x164f7d70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f79e0, node0x164f7850);
SDValue node0x164f7e30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f79e0, node0x164f77b0);
SDValue node0x164f7ef0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164f79e0, node0x164f7710);
SDValue node0x164f7fb0 = dag->getLoad(MVT::i16, dl, entry, node0x164f79e0, mpi, 1);
SDValue node0x164f8080 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f7fb0, node0x164f7ca0);
SDValue node0x164f7510 = dag->getStore(entry, dl, node0x164f8080, node0x164f75f0, mpi, 1);
SDValue node0x164f8260 = dag->getLoad(MVT::i16, dl, node0x164f7510, node0x164f7be0, mpi, 1);
SDValue node0x164f8330 = dag->getLoad(MVT::i16, dl, node0x164f7510, node0x164f7ef0, mpi, 1);
SDValue node0x164f8400 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f8330, node0x164f8260);
SDValue node0x164f84c0 = dag->getStore(node0x164f7510, dl, node0x164f8400, node0x164f7710, mpi, 1);
SDValue node0x164f8640 = dag->getLoad(MVT::i16, dl, node0x164f84c0, node0x164f7b20, mpi, 1);
SDValue node0x164f8710 = dag->getLoad(MVT::i16, dl, node0x164f84c0, node0x164f7e30, mpi, 1);
SDValue node0x164f87e0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f8710, node0x164f8640);
SDValue node0x164f88a0 = dag->getStore(node0x164f84c0, dl, node0x164f87e0, node0x164f77b0, mpi, 1);
SDValue node0x164f8a20 = dag->getLoad(MVT::i16, dl, node0x164f88a0, node0x164f7a90, mpi, 1);
SDValue node0x164f8af0 = dag->getLoad(MVT::i16, dl, node0x164f88a0, node0x164f7d70, mpi, 1);
SDValue node0x164f8bc0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164f8af0, node0x164f8a20);
SDValue node0x164f8c80 = dag->getStore(node0x164f88a0, dl, node0x164f8bc0, node0x164f7850, mpi, 1);
roots.reserve(4);
roots.push_back(node0x164f7510);
roots.push_back(node0x164f84c0);
roots.push_back(node0x164f88a0);
roots.push_back(node0x164f8c80);
dag->setRoot(node0x164f8c80);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_g__reg0__reg0__reg0__:
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
SDValue node0x1633ae60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16339f00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1633ae60, SDValue());
roots.reserve(1);
roots.push_back(node0x16339f00);
dag->setRoot(node0x16339f00);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_simple__:
    {
SDValue node0x1633d420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1633d4d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1633d570 = dag->getNode(ISD::OR, dl, MVT::i32, node0x1633d420, node0x1633d4d0);
SDValue node0x1633c1e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1633d570, SDValue());
roots.reserve(1);
roots.push_back(node0x1633c1e0);
dag->setRoot(node0x1633c1e0);
    }
    break;
  case Codasip::i_xret__opc_mret__:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__AEXT_CLONE_:
    {
SDValue node0x1654cbf0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1654cb50 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x1654ca10 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x1654c970 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x1654c8d0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164b1600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164af280 = dag->getLoad(MVT::i16, dl, entry, node0x1654cbf0, mpi, 1);
SDValue node0x16554d60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164b1600, node0x1654c8d0);
SDValue node0x163cf1d0 = dag->getLoad(MVT::i16, dl, entry, node0x1654cbf0, mpi, 1);
SDValue node0x1602fdf0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x163cf1d0, node0x164af280);
SDValue node0x160528b0 = dag->getLoad(MVT::i16, dl, entry, node0x1654cb50, mpi, 1);
SDValue node0x1602fe80 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1602fdf0, node0x1654c970);
SDValue node0x16052970 = dag->getLoad(MVT::i16, dl, entry, node0x1654cb50, mpi, 1);
SDValue node0x1602ff10 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16052970, node0x160528b0);
SDValue node0x16052a30 = dag->getLoad(MVT::i16, dl, entry, node0x1654ca10, mpi, 1);
SDValue node0x1602ef90 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1602ff10, node0x1654c970);
SDValue node0x16052af0 = dag->getLoad(MVT::i16, dl, entry, node0x1654ca10, mpi, 1);
SDValue node0x165d2070 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1602ef90, node0x1602fe80);
SDValue node0x163cedf0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16052af0, node0x16052a30);
SDValue node0x164650a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x163cedf0, node0x1654c970);
SDValue node0x16461220 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x165d2070, node0x164650a0);
SDValue node0x16460c60 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x16461220);
SDValue node0x16052c40 = dag->getStore(entry, dl, node0x16461220, node0x16554d60, mpi, 1);
SDValue node0x163d75f0 = dag->getCopyToReg(node0x16052c40, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16460c60, SDValue());
roots.reserve(2);
roots.push_back(node0x163d75f0);
roots.push_back(node0x16052c40);
dag->setRoot(node0x163d75f0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__regs__AEXT_CLONE_:
    {
SDValue node0x164c2f20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164c2c00 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x163d00a0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164c0850 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164b1520 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16053fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16054030 = dag->getLoad(MVT::i16, dl, entry, node0x164c2f20, mpi, 1);
SDValue node0x160540c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16463c10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16053fa0, node0x164b1520);
SDValue node0x16463650 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160540c0, node0x163d00a0);
SDValue node0x16465870 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160540c0, node0x164c2c00);
SDValue node0x160541e0 = dag->getLoad(MVT::i16, dl, entry, node0x160540c0, mpi, 1);
SDValue node0x164657b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x160541e0, node0x16054030);
SDValue node0x160542a0 = dag->getLoad(MVT::i16, dl, entry, node0x164c2c00, mpi, 1);
SDValue node0x164612e0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164657b0, node0x164c0850);
SDValue node0x16054360 = dag->getLoad(MVT::i16, dl, entry, node0x16465870, mpi, 1);
SDValue node0x16458b90 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16054360, node0x160542a0);
SDValue node0x16054420 = dag->getLoad(MVT::i16, dl, entry, node0x163d00a0, mpi, 1);
SDValue node0x1645b440 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16458b90, node0x164c0850);
SDValue node0x160544e0 = dag->getLoad(MVT::i16, dl, entry, node0x16463650, mpi, 1);
SDValue node0x1645b380 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1645b440, node0x164612e0);
SDValue node0x1645adc0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x160544e0, node0x16054420);
SDValue node0x1645f160 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1645adc0, node0x164c0850);
SDValue node0x1645f0a0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1645b380, node0x1645f160);
SDValue node0x1645e990 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1645f0a0);
SDValue node0x16053360 = dag->getStore(entry, dl, node0x1645f0a0, node0x16463c10, mpi, 1);
SDValue node0x165aab00 = dag->getCopyToReg(node0x16053360, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1645e990, SDValue());
roots.reserve(2);
roots.push_back(node0x165aab00);
roots.push_back(node0x16053360);
dag->setRoot(node0x165aab00);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__AEXT_CLONE_:
    {
SDValue node0x164c6210 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164c5e70 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164b28a0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164b29e0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164b2a80 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16055ca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16055d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164592a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16055ca0, node0x164b28a0);
SDValue node0x16454dd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16055ca0, node0x164c5e70);
SDValue node0x16055e20 = dag->getLoad(MVT::i16, dl, entry, node0x16055ca0, mpi, 1);
SDValue node0x16454d10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16055d30, node0x164b2a80);
SDValue node0x16055ee0 = dag->getLoad(MVT::i16, dl, entry, node0x164c6210, mpi, 1);
SDValue node0x16454750 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16055ee0, node0x16055e20);
SDValue node0x16055fa0 = dag->getLoad(MVT::i16, dl, entry, node0x16454dd0, mpi, 1);
SDValue node0x164577c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16454750, node0x164b29e0);
SDValue node0x16056060 = dag->getLoad(MVT::i16, dl, entry, node0x164c5e70, mpi, 1);
SDValue node0x16457700 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16056060, node0x16055fa0);
SDValue node0x16056120 = dag->getLoad(MVT::i16, dl, entry, node0x164592a0, mpi, 1);
SDValue node0x16457140 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16457700, node0x164b29e0);
SDValue node0x160561e0 = dag->getLoad(MVT::i16, dl, entry, node0x164b28a0, mpi, 1);
SDValue node0x16459360 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16457140, node0x164577c0);
SDValue node0x164524d0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x160561e0, node0x16056120);
SDValue node0x1644e150 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164524d0, node0x164b29e0);
SDValue node0x16450e90 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16459360, node0x1644e150);
SDValue node0x16451000 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x16450e90);
SDValue node0x16054f20 = dag->getStore(entry, dl, node0x16450e90, node0x16454d10, mpi, 1);
SDValue node0x16056360 = dag->getCopyToReg(node0x16054f20, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16451000, SDValue());
roots.reserve(2);
roots.push_back(node0x16056360);
roots.push_back(node0x16054f20);
dag->setRoot(node0x16056360);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__AEXT_CLONE_:
    {
SDValue node0x164c8ba0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164c8880 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164c8800 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164baa50 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16057b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16057c10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x16057ca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16451090 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16057b80, node0x164c8880);
SDValue node0x16451150 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16057b80, node0x164c8ba0);
SDValue node0x16057d90 = dag->getLoad(MVT::i16, dl, entry, node0x16057b80, mpi, 1);
SDValue node0x16452ca0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16057c10, node0x164baa50);
SDValue node0x16452be0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16057ca0, node0x164c8880);
SDValue node0x1644e710 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16057ca0, node0x164c8ba0);
SDValue node0x16057eb0 = dag->getLoad(MVT::i16, dl, entry, node0x16057ca0, mpi, 1);
SDValue node0x1644bed0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16057eb0, node0x16057d90);
SDValue node0x16057f70 = dag->getLoad(MVT::i16, dl, entry, node0x16451150, mpi, 1);
SDValue node0x1644b7c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1644bed0, node0x164c8800);
SDValue node0x16058030 = dag->getLoad(MVT::i16, dl, entry, node0x1644e710, mpi, 1);
SDValue node0x1644d1a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16058030, node0x16057f70);
SDValue node0x160580f0 = dag->getLoad(MVT::i16, dl, entry, node0x16451090, mpi, 1);
SDValue node0x1644cee0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1644d1a0, node0x164c8800);
SDValue node0x160581b0 = dag->getLoad(MVT::i16, dl, entry, node0x16452be0, mpi, 1);
SDValue node0x1644d0e0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1644cee0, node0x1644b7c0);
SDValue node0x1644d050 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x160581b0, node0x160580f0);
SDValue node0x1644e7d0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1644d050, node0x164c8800);
SDValue node0x1644bf90 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1644d0e0, node0x1644e7d0);
SDValue node0x16446230 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1644bf90);
SDValue node0x16056d10 = dag->getStore(entry, dl, node0x1644bf90, node0x16452ca0, mpi, 1);
SDValue node0x16058330 = dag->getCopyToReg(node0x16056d10, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16446230, SDValue());
roots.reserve(2);
roots.push_back(node0x16058330);
roots.push_back(node0x16056d10);
dag->setRoot(node0x16058330);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__reg0__AEXT_CLONE_:
    {
SDValue node0x164a45a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164a46c0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164a4760 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164adea0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164adf20 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164cb1a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164cb0d0 = dag->getLoad(MVT::i16, dl, entry, node0x164a45a0, mpi, 1);
SDValue node0x164cb000 = dag->getLoad(MVT::i16, dl, entry, node0x164a45a0, mpi, 1);
SDValue node0x164cc260 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164cb000, node0x164cb0d0);
SDValue node0x164caf30 = dag->getLoad(MVT::i16, dl, entry, node0x164a46c0, mpi, 1);
SDValue node0x164479b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164cc260, node0x164adf20);
SDValue node0x164cae60 = dag->getLoad(MVT::i16, dl, entry, node0x164a46c0, mpi, 1);
SDValue node0x164478f0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x164479b0);
SDValue node0x16447330 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164cae60, node0x164caf30);
SDValue node0x164cad90 = dag->getLoad(MVT::i16, dl, entry, node0x164a4760, mpi, 1);
SDValue node0x1644a3f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164cb1a0, node0x164478f0);
SDValue node0x1644a330 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16447330, node0x164adf20);
SDValue node0x164cacc0 = dag->getLoad(MVT::i16, dl, entry, node0x164a4760, mpi, 1);
SDValue node0x16449cd0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1644a330);
SDValue node0x164d08f0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164cacc0, node0x164cad90);
SDValue node0x164cc190 = dag->getLoad(MVT::i16, dl, entry, node0x164adea0, mpi, 1);
SDValue node0x164ce740 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1644a3f0, node0x16449cd0);
SDValue node0x164ce800 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d08f0, node0x164adf20);
SDValue node0x164cc950 = dag->getLoad(MVT::i16, dl, entry, node0x164adea0, mpi, 1);
SDValue node0x164d0490 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x164ce800);
SDValue node0x164d0520 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164cc950, node0x164cc190);
SDValue node0x164d05e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164ce740, node0x164d0490);
SDValue node0x164d0770 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d0520, node0x164adf20);
SDValue node0x164d0830 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x164d0770);
SDValue node0x164ce6b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d05e0, node0x164d0830);
SDValue node0x16059730 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164ce6b0, SDValue());
roots.reserve(1);
roots.push_back(node0x16059730);
dag->setRoot(node0x16059730);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__AEXT_CLONE_:
    {
SDValue node0x164d8eb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164d8b90 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164af1a0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164d5fc0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164ce480 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164cc880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164cc7b0 = dag->getLoad(MVT::i16, dl, entry, node0x164d8eb0, mpi, 1);
SDValue node0x164cc6e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164449a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164cc6e0, node0x164d5fc0);
SDValue node0x16446380 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164cc6e0, node0x164af1a0);
SDValue node0x164460c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164cc6e0, node0x164d8b90);
SDValue node0x164cc610 = dag->getLoad(MVT::i16, dl, entry, node0x164cc6e0, mpi, 1);
SDValue node0x164462c0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164cc610, node0x164cc7b0);
SDValue node0x164cc540 = dag->getLoad(MVT::i16, dl, entry, node0x164d8b90, mpi, 1);
SDValue node0x164cc2f0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164462c0, node0x164ce480);
SDValue node0x164cc470 = dag->getLoad(MVT::i16, dl, entry, node0x164460c0, mpi, 1);
SDValue node0x164cc3b0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x164cc2f0);
SDValue node0x16445170 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164cc470, node0x164cc540);
SDValue node0x164ce8c0 = dag->getLoad(MVT::i16, dl, entry, node0x164af1a0, mpi, 1);
SDValue node0x1643f320 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164cc880, node0x164cc3b0);
SDValue node0x16440c30 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16445170, node0x164ce480);
SDValue node0x164cee70 = dag->getLoad(MVT::i16, dl, entry, node0x16446380, mpi, 1);
SDValue node0x16440b70 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x16440c30);
SDValue node0x164405b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164cee70, node0x164ce8c0);
SDValue node0x164ceda0 = dag->getLoad(MVT::i16, dl, entry, node0x164d5fc0, mpi, 1);
SDValue node0x164435d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1643f320, node0x16440b70);
SDValue node0x16443510 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164405b0, node0x164ce480);
SDValue node0x164cecd0 = dag->getLoad(MVT::i16, dl, entry, node0x164449a0, mpi, 1);
SDValue node0x16442f50 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x16443510);
SDValue node0x1643f3b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164cecd0, node0x164ceda0);
SDValue node0x16568f90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164435d0, node0x16442f50);
SDValue node0x163fbb50 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1643f3b0, node0x164ce480);
SDValue node0x163ff220 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x163fbb50);
SDValue node0x16408890 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16568f90, node0x163ff220);
SDValue node0x1605b310 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16408890, SDValue());
roots.reserve(1);
roots.push_back(node0x1605b310);
dag->setRoot(node0x1605b310);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__reg0__AEXT_CLONE_:
    {
SDValue node0x164dc850 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164dc4b0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164cfff0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164d0070 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164d0110 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164cec00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164ceb30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1640bcb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164cec00, node0x164d0070);
SDValue node0x1643f470 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164cec00, node0x164cfff0);
SDValue node0x1643f1b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164cec00, node0x164dc4b0);
SDValue node0x164cea60 = dag->getLoad(MVT::i16, dl, entry, node0x164cec00, mpi, 1);
SDValue node0x164ce990 = dag->getLoad(MVT::i16, dl, entry, node0x164dc850, mpi, 1);
SDValue node0x165649a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164ce990, node0x164cea60);
SDValue node0x164d06a0 = dag->getLoad(MVT::i16, dl, entry, node0x1643f1b0, mpi, 1);
SDValue node0x16559350 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x165649a0, node0x164d0110);
SDValue node0x164d0e90 = dag->getLoad(MVT::i16, dl, entry, node0x164dc4b0, mpi, 1);
SDValue node0x1605cef0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x16559350);
SDValue node0x1605cf60 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d0e90, node0x164d06a0);
SDValue node0x164d0dc0 = dag->getLoad(MVT::i16, dl, entry, node0x1643f470, mpi, 1);
SDValue node0x1605d000 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164ceb30, node0x1605cef0);
SDValue node0x1605d0a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1605cf60, node0x164d0110);
SDValue node0x164d0cf0 = dag->getLoad(MVT::i16, dl, entry, node0x164cfff0, mpi, 1);
SDValue node0x1605d140 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1605d0a0);
SDValue node0x1605d1b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d0cf0, node0x164d0dc0);
SDValue node0x164d0c20 = dag->getLoad(MVT::i16, dl, entry, node0x1640bcb0, mpi, 1);
SDValue node0x1605d250 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1605d000, node0x1605d140);
SDValue node0x1605d2f0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1605d1b0, node0x164d0110);
SDValue node0x164d0b50 = dag->getLoad(MVT::i16, dl, entry, node0x164d0070, mpi, 1);
SDValue node0x1605d390 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1605d2f0);
SDValue node0x1605d400 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d0b50, node0x164d0c20);
SDValue node0x1605d4a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1605d250, node0x1605d390);
SDValue node0x1605d540 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1605d400, node0x164d0110);
SDValue node0x1605d5e0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1605d540);
SDValue node0x1605d650 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1605d4a0, node0x1605d5e0);
SDValue node0x1605d6f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1605d650, SDValue());
roots.reserve(1);
roots.push_back(node0x1605d6f0);
dag->setRoot(node0x1605d6f0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__AEXT_CLONE_:
    {
SDValue node0x164df7e0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164df4c0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164df440 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164d0250 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164d0a80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x164d09b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1605f330 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1605f3c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d0a80, node0x164df440);
SDValue node0x1605f460 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d0a80, node0x164df4c0);
SDValue node0x1605f500 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d0a80, node0x164df7e0);
SDValue node0x1605f5a0 = dag->getLoad(MVT::i16, dl, entry, node0x164d0a80, mpi, 1);
SDValue node0x1605f630 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1605f330, node0x164df440);
SDValue node0x1605f6d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1605f330, node0x164df4c0);
SDValue node0x1605f770 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1605f330, node0x164df7e0);
SDValue node0x1605f810 = dag->getLoad(MVT::i16, dl, entry, node0x1605f330, mpi, 1);
SDValue node0x1605f8a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1605f810, node0x1605f5a0);
SDValue node0x1605f940 = dag->getLoad(MVT::i16, dl, entry, node0x1605f500, mpi, 1);
SDValue node0x1605f9d0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1605f8a0, node0x164d0250);
SDValue node0x1605fa70 = dag->getLoad(MVT::i16, dl, entry, node0x1605f770, mpi, 1);
SDValue node0x1605fb00 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1605f9d0);
SDValue node0x1605fb70 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1605fa70, node0x1605f940);
SDValue node0x1605fc10 = dag->getLoad(MVT::i16, dl, entry, node0x1605f460, mpi, 1);
SDValue node0x1605fca0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d09b0, node0x1605fb00);
SDValue node0x1605fd40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1605fb70, node0x164d0250);
SDValue node0x1605fde0 = dag->getLoad(MVT::i16, dl, entry, node0x1605f6d0, mpi, 1);
SDValue node0x1605fe70 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1605fd40);
SDValue node0x1605fee0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1605fde0, node0x1605fc10);
SDValue node0x1605ff80 = dag->getLoad(MVT::i16, dl, entry, node0x1605f3c0, mpi, 1);
SDValue node0x16060010 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1605fca0, node0x1605fe70);
SDValue node0x160600b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1605fee0, node0x164d0250);
SDValue node0x16060150 = dag->getLoad(MVT::i16, dl, entry, node0x1605f630, mpi, 1);
SDValue node0x160601e0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x160600b0);
SDValue node0x16060250 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16060150, node0x1605ff80);
SDValue node0x160602f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16060010, node0x160601e0);
SDValue node0x16060390 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16060250, node0x164d0250);
SDValue node0x16060430 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x16060390);
SDValue node0x160604a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160602f0, node0x16060430);
SDValue node0x16060540 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x160604a0, SDValue());
roots.reserve(1);
roots.push_back(node0x16060540);
dag->setRoot(node0x16060540);
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
SDValue node0x1663c470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b2b20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1663c470, SDValue());
roots.reserve(1);
roots.push_back(node0x163b2b20);
dag->setRoot(node0x163b2b20);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_b__regs__regs__regs__:
    {
SDValue node0x164b2940 = dag->getConstant(8LL, dl, MVT::i32);
SDValue node0x164b2b60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164b2c10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164b2cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x164abc40 = dag->getNode(ISD::MUL, dl, MVT::i32, node0x164b2b60, node0x164b2c10);
SDValue node0x164b2d90 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x164abc40, node0x164b2940);
SDValue node0x164b2e50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164b2d90, node0x164b2cc0);
SDValue node0x164b2780 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164b2e50, SDValue());
roots.reserve(1);
roots.push_back(node0x164b2780);
dag->setRoot(node0x164b2780);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__:
    {
SDValue node0x164c0550 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164c05d0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164c0670 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164c0710 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164c07b0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164c0930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164c09e0 = dag->getLoad(MVT::i16, dl, entry, node0x164c0550, mpi, 1);
SDValue node0x164be340 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c0930, node0x164c07b0);
SDValue node0x164c0ad0 = dag->getLoad(MVT::i16, dl, entry, node0x164c0550, mpi, 1);
SDValue node0x164c0ba0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c0ad0, node0x164c09e0);
SDValue node0x164c0c60 = dag->getLoad(MVT::i16, dl, entry, node0x164c05d0, mpi, 1);
SDValue node0x164c0d30 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c0ba0, node0x164c0710);
SDValue node0x164c0df0 = dag->getLoad(MVT::i16, dl, entry, node0x164c05d0, mpi, 1);
SDValue node0x164c0ec0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c0df0, node0x164c0c60);
SDValue node0x164c0f80 = dag->getLoad(MVT::i16, dl, entry, node0x164c0670, mpi, 1);
SDValue node0x164c1050 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c0ec0, node0x164c0710);
SDValue node0x164c1110 = dag->getLoad(MVT::i16, dl, entry, node0x164c0670, mpi, 1);
SDValue node0x164c11e0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164c1050, node0x164c0d30);
SDValue node0x164c12a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c1110, node0x164c0f80);
SDValue node0x164c1360 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c12a0, node0x164c0710);
SDValue node0x164c1420 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164c11e0, node0x164c1360);
SDValue node0x164c14e0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164c1420);
SDValue node0x165dc890 = dag->getStore(entry, dl, node0x164c1420, node0x164be340, mpi, 1);
SDValue node0x164c04b0 = dag->getCopyToReg(node0x165dc890, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164c14e0, SDValue());
roots.reserve(2);
roots.push_back(node0x164c04b0);
roots.push_back(node0x165dc890);
dag->setRoot(node0x164c04b0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__regs__:
    {
SDValue node0x164c2b80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164c2ca0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164c2d40 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164c2de0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164c2e80 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164c3000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164c30b0 = dag->getLoad(MVT::i16, dl, entry, node0x164c2b80, mpi, 1);
SDValue node0x164c3180 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164c3230 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c3000, node0x164c2e80);
SDValue node0x164c32c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c3180, node0x164c2d40);
SDValue node0x164c3380 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c3180, node0x164c2ca0);
SDValue node0x164c3440 = dag->getLoad(MVT::i16, dl, entry, node0x164c3180, mpi, 1);
SDValue node0x164c3510 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c3440, node0x164c30b0);
SDValue node0x164c35d0 = dag->getLoad(MVT::i16, dl, entry, node0x164c2ca0, mpi, 1);
SDValue node0x164c36a0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c3510, node0x164c2de0);
SDValue node0x164c3760 = dag->getLoad(MVT::i16, dl, entry, node0x164c3380, mpi, 1);
SDValue node0x164c3830 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c3760, node0x164c35d0);
SDValue node0x164c38f0 = dag->getLoad(MVT::i16, dl, entry, node0x164c2d40, mpi, 1);
SDValue node0x164c39c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c3830, node0x164c2de0);
SDValue node0x164c3a80 = dag->getLoad(MVT::i16, dl, entry, node0x164c32c0, mpi, 1);
SDValue node0x164c3b50 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164c39c0, node0x164c36a0);
SDValue node0x164c3c10 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c3a80, node0x164c38f0);
SDValue node0x164c3cd0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c3c10, node0x164c2de0);
SDValue node0x164c3d90 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164c3b50, node0x164c3cd0);
SDValue node0x164c3e50 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164c3d90);
SDValue node0x1623c470 = dag->getStore(entry, dl, node0x164c3d90, node0x164c3230, mpi, 1);
SDValue node0x164c1760 = dag->getCopyToReg(node0x1623c470, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164c3e50, SDValue());
roots.reserve(2);
roots.push_back(node0x164c1760);
roots.push_back(node0x1623c470);
dag->setRoot(node0x164c1760);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__:
    {
SDValue node0x164c5ef0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164c5f90 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164c6030 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164c60d0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164c6170 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164c62f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164c63a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164c6450 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c62f0, node0x164c6030);
SDValue node0x164c64e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c62f0, node0x164c5f90);
SDValue node0x164c65a0 = dag->getLoad(MVT::i16, dl, entry, node0x164c62f0, mpi, 1);
SDValue node0x164c6670 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c63a0, node0x164c6170);
SDValue node0x164c6730 = dag->getLoad(MVT::i16, dl, entry, node0x164c5ef0, mpi, 1);
SDValue node0x164c6800 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c6730, node0x164c65a0);
SDValue node0x164c68c0 = dag->getLoad(MVT::i16, dl, entry, node0x164c64e0, mpi, 1);
SDValue node0x164c6990 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c6800, node0x164c60d0);
SDValue node0x164c6a50 = dag->getLoad(MVT::i16, dl, entry, node0x164c5f90, mpi, 1);
SDValue node0x164c6b20 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c6a50, node0x164c68c0);
SDValue node0x164c6be0 = dag->getLoad(MVT::i16, dl, entry, node0x164c6450, mpi, 1);
SDValue node0x164c6cb0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c6b20, node0x164c60d0);
SDValue node0x164c6d70 = dag->getLoad(MVT::i16, dl, entry, node0x164c6030, mpi, 1);
SDValue node0x164c6e40 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164c6cb0, node0x164c6990);
SDValue node0x164c6f00 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c6d70, node0x164c6be0);
SDValue node0x164c6fc0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c6f00, node0x164c60d0);
SDValue node0x164c7080 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164c6e40, node0x164c6fc0);
SDValue node0x164c7140 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164c7080);
SDValue node0x165e10e0 = dag->getStore(entry, dl, node0x164c7080, node0x164c6670, mpi, 1);
SDValue node0x164c40d0 = dag->getCopyToReg(node0x165e10e0, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164c7140, SDValue());
roots.reserve(2);
roots.push_back(node0x164c40d0);
roots.push_back(node0x165e10e0);
dag->setRoot(node0x164c40d0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__:
    {
SDValue node0x164c8920 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164c89c0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164c8a60 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164c8b00 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164c8c80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164c8d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x164c8de0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164c8e90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c8c80, node0x164c89c0);
SDValue node0x164c8f20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c8c80, node0x164c8920);
SDValue node0x164c8fe0 = dag->getLoad(MVT::i16, dl, entry, node0x164c8c80, mpi, 1);
SDValue node0x164c90b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c8d30, node0x164c8b00);
SDValue node0x164c9170 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c8de0, node0x164c89c0);
SDValue node0x164c9230 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164c8de0, node0x164c8920);
SDValue node0x164c92f0 = dag->getLoad(MVT::i16, dl, entry, node0x164c8de0, mpi, 1);
SDValue node0x164c93c0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c92f0, node0x164c8fe0);
SDValue node0x164c9480 = dag->getLoad(MVT::i16, dl, entry, node0x164c8f20, mpi, 1);
SDValue node0x164c9550 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c93c0, node0x164c8a60);
SDValue node0x164c9610 = dag->getLoad(MVT::i16, dl, entry, node0x164c9230, mpi, 1);
SDValue node0x164c96e0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c9610, node0x164c9480);
SDValue node0x164c97a0 = dag->getLoad(MVT::i16, dl, entry, node0x164c8e90, mpi, 1);
SDValue node0x164c9870 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c96e0, node0x164c8a60);
SDValue node0x164c9930 = dag->getLoad(MVT::i16, dl, entry, node0x164c9170, mpi, 1);
SDValue node0x164c9a00 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164c9870, node0x164c9550);
SDValue node0x164c9ac0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164c9930, node0x164c97a0);
SDValue node0x164c9b80 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164c9ac0, node0x164c8a60);
SDValue node0x164c9c40 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164c9a00, node0x164c9b80);
SDValue node0x164c9d00 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164c9c40);
SDValue node0x164c8720 = dag->getStore(entry, dl, node0x164c9c40, node0x164c90b0, mpi, 1);
SDValue node0x164c17b0 = dag->getCopyToReg(node0x164c8720, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164c9d00, SDValue());
roots.reserve(2);
roots.push_back(node0x164c17b0);
roots.push_back(node0x164c8720);
dag->setRoot(node0x164c17b0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__reg0__:
    {
SDValue node0x164d5cc0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164d5d40 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164d5de0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164d5e80 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164d5f20 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164d60a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164d6150 = dag->getLoad(MVT::i16, dl, entry, node0x164d5cc0, mpi, 1);
SDValue node0x164d6220 = dag->getLoad(MVT::i16, dl, entry, node0x164d5cc0, mpi, 1);
SDValue node0x164d3a00 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d6220, node0x164d6150);
SDValue node0x164d6310 = dag->getLoad(MVT::i16, dl, entry, node0x164d5d40, mpi, 1);
SDValue node0x164d63e0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d3a00, node0x164d5f20);
SDValue node0x164d64a0 = dag->getLoad(MVT::i16, dl, entry, node0x164d5d40, mpi, 1);
SDValue node0x164d6570 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164d63e0);
SDValue node0x164d6620 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d64a0, node0x164d6310);
SDValue node0x164d66e0 = dag->getLoad(MVT::i16, dl, entry, node0x164d5de0, mpi, 1);
SDValue node0x164d67b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d60a0, node0x164d6570);
SDValue node0x164d6870 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d6620, node0x164d5f20);
SDValue node0x164d6930 = dag->getLoad(MVT::i16, dl, entry, node0x164d5de0, mpi, 1);
SDValue node0x164d6a00 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164d6870);
SDValue node0x164d6ab0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d6930, node0x164d66e0);
SDValue node0x164d6b70 = dag->getLoad(MVT::i16, dl, entry, node0x164d5e80, mpi, 1);
SDValue node0x164d6c40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d67b0, node0x164d6a00);
SDValue node0x164d6d00 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d6ab0, node0x164d5f20);
SDValue node0x164d6dc0 = dag->getLoad(MVT::i16, dl, entry, node0x164d5e80, mpi, 1);
SDValue node0x164d6e90 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164d6d00);
SDValue node0x164d6f40 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d6dc0, node0x164d6b70);
SDValue node0x164d7000 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d6c40, node0x164d6e90);
SDValue node0x164d70c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d6f40, node0x164d5f20);
SDValue node0x164d7180 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164d70c0);
SDValue node0x164d7230 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d7000, node0x164d7180);
SDValue node0x164d5c20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164d7230, SDValue());
roots.reserve(1);
roots.push_back(node0x164d5c20);
dag->setRoot(node0x164d5c20);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__reg0__regs__:
    {
SDValue node0x164d8b10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164d8c30 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164d8cd0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164d8d70 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164d8e10 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164d8f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164d9040 = dag->getLoad(MVT::i16, dl, entry, node0x164d8b10, mpi, 1);
SDValue node0x164d9110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164d91c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d9110, node0x164d8d70);
SDValue node0x164d9250 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d9110, node0x164d8cd0);
SDValue node0x164d9310 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d9110, node0x164d8c30);
SDValue node0x164d93d0 = dag->getLoad(MVT::i16, dl, entry, node0x164d9110, mpi, 1);
SDValue node0x164d94a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d93d0, node0x164d9040);
SDValue node0x164d9560 = dag->getLoad(MVT::i16, dl, entry, node0x164d8c30, mpi, 1);
SDValue node0x164d9630 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d94a0, node0x164d8e10);
SDValue node0x164d96f0 = dag->getLoad(MVT::i16, dl, entry, node0x164d9310, mpi, 1);
SDValue node0x164d97c0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164d9630);
SDValue node0x164d9870 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d96f0, node0x164d9560);
SDValue node0x164d9930 = dag->getLoad(MVT::i16, dl, entry, node0x164d8cd0, mpi, 1);
SDValue node0x164d9a00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d8f90, node0x164d97c0);
SDValue node0x164d9ac0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d9870, node0x164d8e10);
SDValue node0x164d9b80 = dag->getLoad(MVT::i16, dl, entry, node0x164d9250, mpi, 1);
SDValue node0x164d9c50 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164d9ac0);
SDValue node0x164d9d00 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164d9b80, node0x164d9930);
SDValue node0x164d9dc0 = dag->getLoad(MVT::i16, dl, entry, node0x164d8d70, mpi, 1);
SDValue node0x164d9e90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d9a00, node0x164d9c50);
SDValue node0x164d9f50 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164d9d00, node0x164d8e10);
SDValue node0x164da010 = dag->getLoad(MVT::i16, dl, entry, node0x164d91c0, mpi, 1);
SDValue node0x164da0e0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164d9f50);
SDValue node0x164da190 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164da010, node0x164d9dc0);
SDValue node0x164da250 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164d9e90, node0x164da0e0);
SDValue node0x164da310 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164da190, node0x164d8e10);
SDValue node0x164da3d0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164da310);
SDValue node0x164da480 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164da250, node0x164da3d0);
SDValue node0x164d7b50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164da480, SDValue());
roots.reserve(1);
roots.push_back(node0x164d7b50);
dag->setRoot(node0x164d7b50);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__reg0__:
    {
SDValue node0x164dc530 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164dc5d0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164dc670 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164dc710 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164dc7b0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164dc930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164dc9e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164dca90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dc930, node0x164dc710);
SDValue node0x164dcb20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dc930, node0x164dc670);
SDValue node0x164dcbe0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dc930, node0x164dc5d0);
SDValue node0x164dcca0 = dag->getLoad(MVT::i16, dl, entry, node0x164dc930, mpi, 1);
SDValue node0x164dcd70 = dag->getLoad(MVT::i16, dl, entry, node0x164dc530, mpi, 1);
SDValue node0x164dce40 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164dcd70, node0x164dcca0);
SDValue node0x164dcf00 = dag->getLoad(MVT::i16, dl, entry, node0x164dcbe0, mpi, 1);
SDValue node0x164dcfd0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164dce40, node0x164dc7b0);
SDValue node0x164dd090 = dag->getLoad(MVT::i16, dl, entry, node0x164dc5d0, mpi, 1);
SDValue node0x164dd160 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164dcfd0);
SDValue node0x164dd210 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164dd090, node0x164dcf00);
SDValue node0x164dd2d0 = dag->getLoad(MVT::i16, dl, entry, node0x164dcb20, mpi, 1);
SDValue node0x164dd3a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dc9e0, node0x164dd160);
SDValue node0x164dd460 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164dd210, node0x164dc7b0);
SDValue node0x164dd520 = dag->getLoad(MVT::i16, dl, entry, node0x164dc670, mpi, 1);
SDValue node0x164dd5f0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164dd460);
SDValue node0x164dd6a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164dd520, node0x164dd2d0);
SDValue node0x164dd760 = dag->getLoad(MVT::i16, dl, entry, node0x164dca90, mpi, 1);
SDValue node0x164dd830 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dd3a0, node0x164dd5f0);
SDValue node0x164dd8f0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164dd6a0, node0x164dc7b0);
SDValue node0x164dd9b0 = dag->getLoad(MVT::i16, dl, entry, node0x164dc710, mpi, 1);
SDValue node0x164dda80 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164dd8f0);
SDValue node0x164ddb30 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164dd9b0, node0x164dd760);
SDValue node0x164ddbf0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dd830, node0x164dda80);
SDValue node0x164ddcb0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164ddb30, node0x164dc7b0);
SDValue node0x164ddd70 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164ddcb0);
SDValue node0x164dde20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164ddbf0, node0x164ddd70);
SDValue node0x164d7790 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164dde20, SDValue());
roots.reserve(1);
roots.push_back(node0x164d7790);
dag->setRoot(node0x164d7790);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_d__regs__regs__regs__:
    {
SDValue node0x164df560 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164df600 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164df6a0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164df740 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x164df8c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x164df970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164dfa20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x164dfad0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164df8c0, node0x164df6a0);
SDValue node0x164dfb60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164df8c0, node0x164df600);
SDValue node0x164dfc20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164df8c0, node0x164df560);
SDValue node0x164dfce0 = dag->getLoad(MVT::i16, dl, entry, node0x164df8c0, mpi, 1);
SDValue node0x164dfdb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dfa20, node0x164df6a0);
SDValue node0x164dfe70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dfa20, node0x164df600);
SDValue node0x164dff30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164dfa20, node0x164df560);
SDValue node0x164dfff0 = dag->getLoad(MVT::i16, dl, entry, node0x164dfa20, mpi, 1);
SDValue node0x164e00c0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164dfff0, node0x164dfce0);
SDValue node0x164e0180 = dag->getLoad(MVT::i16, dl, entry, node0x164dfc20, mpi, 1);
SDValue node0x164e0250 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164e00c0, node0x164df740);
SDValue node0x164e0310 = dag->getLoad(MVT::i16, dl, entry, node0x164dff30, mpi, 1);
SDValue node0x164e03e0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164e0250);
SDValue node0x164e0490 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164e0310, node0x164e0180);
SDValue node0x164e0550 = dag->getLoad(MVT::i16, dl, entry, node0x164dfb60, mpi, 1);
SDValue node0x164e0620 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164df970, node0x164e03e0);
SDValue node0x164e06e0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164e0490, node0x164df740);
SDValue node0x164e07a0 = dag->getLoad(MVT::i16, dl, entry, node0x164dfe70, mpi, 1);
SDValue node0x164e0870 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164e06e0);
SDValue node0x164e0920 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164e07a0, node0x164e0550);
SDValue node0x164e09e0 = dag->getLoad(MVT::i16, dl, entry, node0x164dfad0, mpi, 1);
SDValue node0x164e0ab0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164e0620, node0x164e0870);
SDValue node0x164e0b70 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164e0920, node0x164df740);
SDValue node0x164e0c30 = dag->getLoad(MVT::i16, dl, entry, node0x164dfdb0, mpi, 1);
SDValue node0x164e0d00 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164e0b70);
SDValue node0x164e0db0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x164e0c30, node0x164e09e0);
SDValue node0x164e0e70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164e0ab0, node0x164e0d00);
SDValue node0x164e0f30 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x164e0db0, node0x164df740);
SDValue node0x164e0ff0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x164e0f30);
SDValue node0x164e10a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164e0e70, node0x164e0ff0);
SDValue node0x164daf80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164e10a0, SDValue());
roots.reserve(1);
roots.push_back(node0x164daf80);
dag->setRoot(node0x164daf80);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__regs__reg0__reg0__:
    {
SDValue node0x164fd800 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164fd880 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x164fd920 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x164fd9c0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x164fdb40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x164fdbf0 = dag->getLoad(MVT::i16, dl, entry, node0x164fd800, mpi, 1);
SDValue node0x164fb590 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164fdb40, node0x164fd9c0);
SDValue node0x164fdce0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164fdb40, node0x164fd920);
SDValue node0x164fdda0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x164fdb40, node0x164fd880);
SDValue node0x164fde60 = dag->getLoad(MVT::i16, dl, entry, node0x164fd800, mpi, 1);
SDValue node0x164fdf30 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164fde60, node0x164fdbf0);
SDValue node0x164fb6d0 = dag->getStore(entry, dl, node0x164fdf30, node0x164fdb40, mpi, 1);
SDValue node0x164fe110 = dag->getLoad(MVT::i16, dl, node0x164fb6d0, node0x164fd880, mpi, 1);
SDValue node0x164fe1e0 = dag->getLoad(MVT::i16, dl, node0x164fb6d0, node0x164fd880, mpi, 1);
SDValue node0x164fe2b0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164fe1e0, node0x164fe110);
SDValue node0x164fe370 = dag->getStore(node0x164fb6d0, dl, node0x164fe2b0, node0x164fdda0, mpi, 1);
SDValue node0x164fe4f0 = dag->getLoad(MVT::i16, dl, node0x164fe370, node0x164fd920, mpi, 1);
SDValue node0x164fe5c0 = dag->getLoad(MVT::i16, dl, node0x164fe370, node0x164fd920, mpi, 1);
SDValue node0x164fe690 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164fe5c0, node0x164fe4f0);
SDValue node0x164fe750 = dag->getStore(node0x164fe370, dl, node0x164fe690, node0x164fdce0, mpi, 1);
SDValue node0x164fe8d0 = dag->getLoad(MVT::i16, dl, node0x164fe750, node0x164fd9c0, mpi, 1);
SDValue node0x164fe9a0 = dag->getLoad(MVT::i16, dl, node0x164fe750, node0x164fd9c0, mpi, 1);
SDValue node0x164fea70 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x164fe9a0, node0x164fe8d0);
SDValue node0x164feb30 = dag->getStore(node0x164fe750, dl, node0x164fea70, node0x164fb590, mpi, 1);
SDValue node0x164fd760 = dag->getCopyToReg(node0x164feb30, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x164fdb40, SDValue());
roots.reserve(5);
roots.push_back(node0x164fd760);
roots.push_back(node0x164fb6d0);
roots.push_back(node0x164fe370);
roots.push_back(node0x164fe750);
roots.push_back(node0x164feb30);
dag->setRoot(node0x164fd760);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__regs__reg0__regs__:
    {
SDValue node0x16500210 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16500330 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x165003d0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x16500470 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x165005f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x165006a0 = dag->getLoad(MVT::i16, dl, entry, node0x16500210, mpi, 1);
SDValue node0x16500770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16500820 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x165005f0, node0x16500470);
SDValue node0x165008b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x165005f0, node0x165003d0);
SDValue node0x16500970 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x165005f0, node0x16500330);
SDValue node0x16500a30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16500770, node0x16500470);
SDValue node0x16500af0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16500770, node0x165003d0);
SDValue node0x16500bb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16500770, node0x16500330);
SDValue node0x16500c70 = dag->getLoad(MVT::i16, dl, entry, node0x16500770, mpi, 1);
SDValue node0x16500d40 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16500c70, node0x165006a0);
SDValue node0x16500130 = dag->getStore(entry, dl, node0x16500d40, node0x165005f0, mpi, 1);
SDValue node0x16500f20 = dag->getLoad(MVT::i16, dl, node0x16500130, node0x16500330, mpi, 1);
SDValue node0x16500ff0 = dag->getLoad(MVT::i16, dl, node0x16500130, node0x16500bb0, mpi, 1);
SDValue node0x165010c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16500ff0, node0x16500f20);
SDValue node0x16501180 = dag->getStore(node0x16500130, dl, node0x165010c0, node0x16500970, mpi, 1);
SDValue node0x16501300 = dag->getLoad(MVT::i16, dl, node0x16501180, node0x165003d0, mpi, 1);
SDValue node0x165013d0 = dag->getLoad(MVT::i16, dl, node0x16501180, node0x16500af0, mpi, 1);
SDValue node0x165014a0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x165013d0, node0x16501300);
SDValue node0x16501560 = dag->getStore(node0x16501180, dl, node0x165014a0, node0x165008b0, mpi, 1);
SDValue node0x165016e0 = dag->getLoad(MVT::i16, dl, node0x16501560, node0x16500470, mpi, 1);
SDValue node0x165017b0 = dag->getLoad(MVT::i16, dl, node0x16501560, node0x16500a30, mpi, 1);
SDValue node0x16501880 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x165017b0, node0x165016e0);
SDValue node0x16501940 = dag->getStore(node0x16501560, dl, node0x16501880, node0x16500820, mpi, 1);
SDValue node0x164fed90 = dag->getCopyToReg(node0x16501940, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165005f0, SDValue());
roots.reserve(5);
roots.push_back(node0x164fed90);
roots.push_back(node0x16500130);
roots.push_back(node0x16501180);
roots.push_back(node0x16501560);
roots.push_back(node0x16501940);
dag->setRoot(node0x164fed90);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__regs__regs__reg0__:
    {
SDValue node0x16503b10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16503bb0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16503c50 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x16503cf0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16503e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16503f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16503fd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16503e70, node0x16503cf0);
SDValue node0x16504060 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16503e70, node0x16503c50);
SDValue node0x16504120 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16503e70, node0x16503bb0);
SDValue node0x165041e0 = dag->getLoad(MVT::i16, dl, entry, node0x16503e70, mpi, 1);
SDValue node0x165042b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16503f20, node0x16503cf0);
SDValue node0x16504370 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16503f20, node0x16503c50);
SDValue node0x16504430 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16503f20, node0x16503bb0);
SDValue node0x165044f0 = dag->getLoad(MVT::i16, dl, entry, node0x16503b10, mpi, 1);
SDValue node0x165045c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x165044f0, node0x165041e0);
SDValue node0x16502cf0 = dag->getStore(entry, dl, node0x165045c0, node0x16503f20, mpi, 1);
SDValue node0x165047a0 = dag->getLoad(MVT::i16, dl, node0x16502cf0, node0x16504120, mpi, 1);
SDValue node0x16504870 = dag->getLoad(MVT::i16, dl, node0x16502cf0, node0x16503bb0, mpi, 1);
SDValue node0x16504940 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16504870, node0x165047a0);
SDValue node0x16504a00 = dag->getStore(node0x16502cf0, dl, node0x16504940, node0x16504430, mpi, 1);
SDValue node0x16504b80 = dag->getLoad(MVT::i16, dl, node0x16504a00, node0x16504060, mpi, 1);
SDValue node0x16504c50 = dag->getLoad(MVT::i16, dl, node0x16504a00, node0x16503c50, mpi, 1);
SDValue node0x16504d20 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16504c50, node0x16504b80);
SDValue node0x16504de0 = dag->getStore(node0x16504a00, dl, node0x16504d20, node0x16504370, mpi, 1);
SDValue node0x16504f60 = dag->getLoad(MVT::i16, dl, node0x16504de0, node0x16503fd0, mpi, 1);
SDValue node0x16505030 = dag->getLoad(MVT::i16, dl, node0x16504de0, node0x16503cf0, mpi, 1);
SDValue node0x16505100 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16505030, node0x16504f60);
SDValue node0x165051c0 = dag->getStore(node0x16504de0, dl, node0x16505100, node0x165042b0, mpi, 1);
SDValue node0x16501bf0 = dag->getCopyToReg(node0x165051c0, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16503f20, SDValue());
roots.reserve(5);
roots.push_back(node0x16501bf0);
roots.push_back(node0x16502cf0);
roots.push_back(node0x16504a00);
roots.push_back(node0x16504de0);
roots.push_back(node0x165051c0);
dag->setRoot(node0x16501bf0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__regs__regs__regs__:
    {
SDValue node0x16506a20 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16506ac0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x16506b60 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16506ce0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x16506d90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16506e40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16506ef0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506ce0, node0x16506b60);
SDValue node0x16506f80 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506ce0, node0x16506ac0);
SDValue node0x16507040 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506ce0, node0x16506a20);
SDValue node0x16507100 = dag->getLoad(MVT::i16, dl, entry, node0x16506ce0, mpi, 1);
SDValue node0x165071d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506d90, node0x16506b60);
SDValue node0x16507290 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506d90, node0x16506ac0);
SDValue node0x16507350 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506d90, node0x16506a20);
SDValue node0x16507410 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506e40, node0x16506b60);
SDValue node0x165074d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506e40, node0x16506ac0);
SDValue node0x16507590 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16506e40, node0x16506a20);
SDValue node0x16507650 = dag->getLoad(MVT::i16, dl, entry, node0x16506e40, mpi, 1);
SDValue node0x16507720 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16507650, node0x16507100);
SDValue node0x16506820 = dag->getStore(entry, dl, node0x16507720, node0x16506d90, mpi, 1);
SDValue node0x16507900 = dag->getLoad(MVT::i16, dl, node0x16506820, node0x16507040, mpi, 1);
SDValue node0x165079d0 = dag->getLoad(MVT::i16, dl, node0x16506820, node0x16507590, mpi, 1);
SDValue node0x16507aa0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x165079d0, node0x16507900);
SDValue node0x16507b60 = dag->getStore(node0x16506820, dl, node0x16507aa0, node0x16507350, mpi, 1);
SDValue node0x16507ce0 = dag->getLoad(MVT::i16, dl, node0x16507b60, node0x16506f80, mpi, 1);
SDValue node0x16507db0 = dag->getLoad(MVT::i16, dl, node0x16507b60, node0x165074d0, mpi, 1);
SDValue node0x16507e80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16507db0, node0x16507ce0);
SDValue node0x16507f40 = dag->getStore(node0x16507b60, dl, node0x16507e80, node0x16507290, mpi, 1);
SDValue node0x165080c0 = dag->getLoad(MVT::i16, dl, node0x16507f40, node0x16506ef0, mpi, 1);
SDValue node0x16508190 = dag->getLoad(MVT::i16, dl, node0x16507f40, node0x16507410, mpi, 1);
SDValue node0x16508260 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16508190, node0x165080c0);
SDValue node0x16508320 = dag->getStore(node0x16507f40, dl, node0x16508260, node0x165071d0, mpi, 1);
SDValue node0x16501ba0 = dag->getCopyToReg(node0x16508320, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16506d90, SDValue());
roots.reserve(5);
roots.push_back(node0x16501ba0);
roots.push_back(node0x16506820);
roots.push_back(node0x16507b60);
roots.push_back(node0x16507f40);
roots.push_back(node0x16508320);
dag->setRoot(node0x16501ba0);
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
SDValue node0x160d2d10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x160d2d90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160d3780 = dag->getTruncStore(entry, dl, node0x160d2d10, node0x160d2d90, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x160d3780);
dag->setRoot(node0x160d3780);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__i32_TRUNC_CLONE_:
    {
SDValue node0x160d1ba0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x160cdc30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160d2c90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160cca30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160cdc30, node0x160d2c90);
SDValue node0x160d4100 = dag->getTruncStore(entry, dl, node0x160d1ba0, node0x160cca30, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x160d4100);
dag->setRoot(node0x160d4100);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__reg0__i32_TRUNC_CLONE_:
    {
SDValue node0x160d2e10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x160d4720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160d4a10 = dag->getTruncStore(entry, dl, node0x160d2e10, node0x160d4720, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x160d4a10);
dag->setRoot(node0x160d4a10);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__i32_TRUNC_CLONE_:
    {
SDValue node0x160d5030 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x160d2420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160d50b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160cd3a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160d2420, node0x160d50b0);
SDValue node0x160d5490 = dag->getTruncStore(entry, dl, node0x160d5030, node0x160cd3a0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x160d5490);
dag->setRoot(node0x160d5490);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_:
    {
SDValue node0x160d5820 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x160d2540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160d5a10 = dag->getTruncStore(entry, dl, node0x160d5820, node0x160d2540, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x160d5a10);
dag->setRoot(node0x160d5a10);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_simple__regs__immspec_1_i32_TRUNC_CLONE_:
    {
SDValue node0x160d5e00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x164ae000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160d5fe0 = dag->getTruncStore(entry, dl, node0x160d5e00, node0x164ae000, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x160d5fe0);
dag->setRoot(node0x160d5fe0);
    }
    break;
  case Codasip::i_jump_reg_alias__regs___RET_EMUL_:
    {
dag->setRoot(entry);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__0_REG_EMUL_:
    {
SDValue node0x160d6360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160d7860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160d24b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160dc930 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160d7860, node0x160d24b0);
SDValue node0x160d19b0 = dag->getStore(entry, dl, node0x160d6360, node0x160dc930, mpi, 1);
roots.reserve(1);
roots.push_back(node0x160d19b0);
dag->setRoot(node0x160d19b0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__1_BIGIMM_EMUL_:
    {
SDValue node0x160d6940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160d7610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160d9be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160dbe50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160d7610, node0x160d9be0);
SDValue node0x160d83b0 = dag->getStore(entry, dl, node0x160d6940, node0x160dbe50, mpi, 1);
roots.reserve(1);
roots.push_back(node0x160d83b0);
dag->setRoot(node0x160d83b0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__2_REG_EMUL_:
    {
SDValue node0x160dced0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160dc6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160dcf60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160dced0, node0x160dc6b0);
SDValue node0x160da910 = dag->getLoad(MVT::i32, dl, entry, node0x160dcf60, mpi, 1);
SDValue node0x160dd7a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x160da910, SDValue());
roots.reserve(1);
roots.push_back(node0x160dd7a0);
dag->setRoot(node0x160dd7a0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__3_BIGIMM_EMUL_:
    {
SDValue node0x160db9c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160deba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160db750 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160db9c0, node0x160deba0);
SDValue node0x160dcfd0 = dag->getLoad(MVT::i32, dl, entry, node0x160db750, mpi, 1);
SDValue node0x160d8af0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x160dcfd0, SDValue());
roots.reserve(1);
roots.push_back(node0x160d8af0);
dag->setRoot(node0x160d8af0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_simple__regs__4_BIGIMM_EMUL_:
    {
SDValue node0x160dc0a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x160da460 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160df530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160dbde0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160da460, node0x160df530);
SDValue node0x160d64b0 = dag->getStore(entry, dl, node0x160dc0a0, node0x160dbde0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x160d64b0);
dag->setRoot(node0x160d64b0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_simple__regs__5_BIGIMM_EMUL_:
    {
SDValue node0x160dcb60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160e0100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160dce60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160dcb60, node0x160e0100);
SDValue node0x160db130 = dag->getLoad(MVT::i32, dl, entry, node0x160dce60, mpi, 1);
SDValue node0x160e0180 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x160db130, SDValue());
roots.reserve(1);
roots.push_back(node0x160e0180);
dag->setRoot(node0x160e0180);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__6_BIGIMM_EMUL_:
    {
SDValue node0x160dc740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160e0c20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160dbd70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160dc740, node0x160e0c20);
SDValue node0x160e0ca0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x160dbd70, SDValue());
roots.reserve(1);
roots.push_back(node0x160e0ca0);
dag->setRoot(node0x160e0ca0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__7_BIGIMM_EMUL_:
    {
SDValue node0x160da4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160e17e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160db5e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160da4f0, node0x160e17e0);
SDValue node0x160e1860 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x160db5e0, SDValue());
roots.reserve(1);
roots.push_back(node0x160e1860);
dag->setRoot(node0x160e1860);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_simple__8_BIGIMM_EMUL_:
    {
SDValue node0x160e1210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x160e2470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x160da650 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x160e1210, node0x160e2470);
SDValue node0x160e24f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x160da650, SDValue());
roots.reserve(1);
roots.push_back(node0x160e24f0);
dag->setRoot(node0x160e24f0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__reg0__reg0__reg0__MOI_CLONE_:
    {
SDValue node0x16650a90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16680af0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16651790 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x1664ffb0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16651530 = dag->getLoad(MVT::i16, dl, entry, node0x16650a90, mpi, 1);
SDValue node0x166813c0 = dag->getLoad(MVT::i16, dl, entry, node0x16650a90, mpi, 1);
SDValue node0x16681670 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166813c0, node0x16651530);
SDValue node0x16682400 = dag->getStore(entry, dl, node0x16681670, node0x16650a90, mpi, 1);
SDValue node0x16681330 = dag->getLoad(MVT::i16, dl, node0x16682400, node0x16680af0, mpi, 1);
SDValue node0x166824c0 = dag->getLoad(MVT::i16, dl, node0x16682400, node0x16680af0, mpi, 1);
SDValue node0x1667f2a0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166824c0, node0x16681330);
SDValue node0x166825b0 = dag->getStore(node0x16682400, dl, node0x1667f2a0, node0x16680af0, mpi, 1);
SDValue node0x16682630 = dag->getLoad(MVT::i16, dl, node0x166825b0, node0x16651790, mpi, 1);
SDValue node0x16682700 = dag->getLoad(MVT::i16, dl, node0x166825b0, node0x16651790, mpi, 1);
SDValue node0x16681520 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16682700, node0x16682630);
SDValue node0x166827f0 = dag->getStore(node0x166825b0, dl, node0x16681520, node0x16651790, mpi, 1);
SDValue node0x16682870 = dag->getLoad(MVT::i16, dl, node0x166827f0, node0x1664ffb0, mpi, 1);
SDValue node0x16682940 = dag->getLoad(MVT::i16, dl, node0x166827f0, node0x1664ffb0, mpi, 1);
SDValue node0x16681990 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16682940, node0x16682870);
SDValue node0x16682a30 = dag->getStore(node0x166827f0, dl, node0x16681990, node0x1664ffb0, mpi, 1);
roots.reserve(4);
roots.push_back(node0x16682400);
roots.push_back(node0x166825b0);
roots.push_back(node0x166827f0);
roots.push_back(node0x16682a30);
dag->setRoot(node0x16682a30);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__reg0__reg0__regs__MOI_CLONE_:
    {
SDValue node0x16681a00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16680e10 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16683150 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x166831f0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16683290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16683340 = dag->getLoad(MVT::i16, dl, entry, node0x16681a00, mpi, 1);
SDValue node0x16680930 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16683290, node0x166831f0);
SDValue node0x16681760 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16683290, node0x16683150);
SDValue node0x16681590 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16683290, node0x16680e10);
SDValue node0x166834a0 = dag->getLoad(MVT::i16, dl, entry, node0x16683290, mpi, 1);
SDValue node0x1667f5c0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166834a0, node0x16683340);
SDValue node0x166835c0 = dag->getStore(entry, dl, node0x1667f5c0, node0x16681a00, mpi, 1);
SDValue node0x16683670 = dag->getLoad(MVT::i16, dl, node0x166835c0, node0x16680e10, mpi, 1);
SDValue node0x16683740 = dag->getLoad(MVT::i16, dl, node0x166835c0, node0x16681590, mpi, 1);
SDValue node0x166801b0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16683740, node0x16683670);
SDValue node0x16683860 = dag->getStore(node0x166835c0, dl, node0x166801b0, node0x16680e10, mpi, 1);
SDValue node0x16683910 = dag->getLoad(MVT::i16, dl, node0x16683860, node0x16683150, mpi, 1);
SDValue node0x166839e0 = dag->getLoad(MVT::i16, dl, node0x16683860, node0x16681760, mpi, 1);
SDValue node0x16652380 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166839e0, node0x16683910);
SDValue node0x16683b00 = dag->getStore(node0x16683860, dl, node0x16652380, node0x16683150, mpi, 1);
SDValue node0x16683bb0 = dag->getLoad(MVT::i16, dl, node0x16683b00, node0x166831f0, mpi, 1);
SDValue node0x16683c80 = dag->getLoad(MVT::i16, dl, node0x16683b00, node0x16680930, mpi, 1);
SDValue node0x1667e9d0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16683c80, node0x16683bb0);
SDValue node0x16683da0 = dag->getStore(node0x16683b00, dl, node0x1667e9d0, node0x166831f0, mpi, 1);
roots.reserve(4);
roots.push_back(node0x166835c0);
roots.push_back(node0x16683860);
roots.push_back(node0x16683b00);
roots.push_back(node0x16683da0);
dag->setRoot(node0x16683da0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__reg0__regs__reg0__MOI_CLONE_:
    {
SDValue node0x16684b90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16684c30 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16684cd0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x16684d70 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16684e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16652460 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16684e10, node0x16684d70);
SDValue node0x16680da0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16684e10, node0x16684cd0);
SDValue node0x16680a80 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16684e10, node0x16684c30);
SDValue node0x16684fb0 = dag->getLoad(MVT::i16, dl, entry, node0x16684e10, mpi, 1);
SDValue node0x16685080 = dag->getLoad(MVT::i16, dl, entry, node0x16684b90, mpi, 1);
SDValue node0x1667dde0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16685080, node0x16684fb0);
SDValue node0x166851a0 = dag->getStore(entry, dl, node0x1667dde0, node0x16684b90, mpi, 1);
SDValue node0x16685250 = dag->getLoad(MVT::i16, dl, node0x166851a0, node0x16680a80, mpi, 1);
SDValue node0x16685320 = dag->getLoad(MVT::i16, dl, node0x166851a0, node0x16684c30, mpi, 1);
SDValue node0x1667fe90 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16685320, node0x16685250);
SDValue node0x16685440 = dag->getStore(node0x166851a0, dl, node0x1667fe90, node0x16684c30, mpi, 1);
SDValue node0x166854f0 = dag->getLoad(MVT::i16, dl, node0x16685440, node0x16680da0, mpi, 1);
SDValue node0x166855c0 = dag->getLoad(MVT::i16, dl, node0x16685440, node0x16684cd0, mpi, 1);
SDValue node0x16685690 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166855c0, node0x166854f0);
SDValue node0x16685750 = dag->getStore(node0x16685440, dl, node0x16685690, node0x16684cd0, mpi, 1);
SDValue node0x16685800 = dag->getLoad(MVT::i16, dl, node0x16685750, node0x16652460, mpi, 1);
SDValue node0x166858d0 = dag->getLoad(MVT::i16, dl, node0x16685750, node0x16684d70, mpi, 1);
SDValue node0x166859a0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166858d0, node0x16685800);
SDValue node0x16685a60 = dag->getStore(node0x16685750, dl, node0x166859a0, node0x16684d70, mpi, 1);
roots.reserve(4);
roots.push_back(node0x166851a0);
roots.push_back(node0x16685440);
roots.push_back(node0x16685750);
roots.push_back(node0x16685a60);
dag->setRoot(node0x16685a60);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_f__reg0__regs__regs__MOI_CLONE_:
    {
SDValue node0x16686850 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x166868f0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16686990 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x16686a30 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16686ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16686b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16686c30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16686ad0, node0x16686a30);
SDValue node0x16686cf0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16686ad0, node0x16686990);
SDValue node0x16686db0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16686ad0, node0x166868f0);
SDValue node0x16686e70 = dag->getLoad(MVT::i16, dl, entry, node0x16686ad0, mpi, 1);
SDValue node0x16686f40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16686b80, node0x16686a30);
SDValue node0x16687000 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16686b80, node0x16686990);
SDValue node0x166870c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16686b80, node0x166868f0);
SDValue node0x16687180 = dag->getLoad(MVT::i16, dl, entry, node0x16686b80, mpi, 1);
SDValue node0x16687250 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16687180, node0x16686e70);
SDValue node0x16687310 = dag->getStore(entry, dl, node0x16687250, node0x16686850, mpi, 1);
SDValue node0x166873c0 = dag->getLoad(MVT::i16, dl, node0x16687310, node0x16686db0, mpi, 1);
SDValue node0x16687490 = dag->getLoad(MVT::i16, dl, node0x16687310, node0x166870c0, mpi, 1);
SDValue node0x16687560 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16687490, node0x166873c0);
SDValue node0x16687620 = dag->getStore(node0x16687310, dl, node0x16687560, node0x166868f0, mpi, 1);
SDValue node0x166876d0 = dag->getLoad(MVT::i16, dl, node0x16687620, node0x16686cf0, mpi, 1);
SDValue node0x166877a0 = dag->getLoad(MVT::i16, dl, node0x16687620, node0x16687000, mpi, 1);
SDValue node0x16687870 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166877a0, node0x166876d0);
SDValue node0x16687930 = dag->getStore(node0x16687620, dl, node0x16687870, node0x16686990, mpi, 1);
SDValue node0x166879e0 = dag->getLoad(MVT::i16, dl, node0x16687930, node0x16686c30, mpi, 1);
SDValue node0x16687ab0 = dag->getLoad(MVT::i16, dl, node0x16687930, node0x16686f40, mpi, 1);
SDValue node0x16687b80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16687ab0, node0x166879e0);
SDValue node0x16687c40 = dag->getStore(node0x16687930, dl, node0x16687b80, node0x16686a30, mpi, 1);
roots.reserve(4);
roots.push_back(node0x16687310);
roots.push_back(node0x16687620);
roots.push_back(node0x16687930);
roots.push_back(node0x16687c40);
dag->setRoot(node0x16687c40);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__AEXT_CLONE_MOI_CLONE_:
    {
SDValue node0x16688c70 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16688d10 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16688db0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x16688e50 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x16688ef0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16688f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16689040 = dag->getLoad(MVT::i16, dl, entry, node0x16688c70, mpi, 1);
SDValue node0x16689110 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16688f90, node0x16688ef0);
SDValue node0x166891d0 = dag->getLoad(MVT::i16, dl, entry, node0x16688c70, mpi, 1);
SDValue node0x166892a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x166891d0, node0x16689040);
SDValue node0x16689360 = dag->getLoad(MVT::i16, dl, entry, node0x16688d10, mpi, 1);
SDValue node0x16689430 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x166892a0, node0x16688e50);
SDValue node0x166894f0 = dag->getLoad(MVT::i16, dl, entry, node0x16688d10, mpi, 1);
SDValue node0x166895c0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x166894f0, node0x16689360);
SDValue node0x16689680 = dag->getLoad(MVT::i16, dl, entry, node0x16688db0, mpi, 1);
SDValue node0x16689750 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x166895c0, node0x16688e50);
SDValue node0x16689810 = dag->getLoad(MVT::i16, dl, entry, node0x16688db0, mpi, 1);
SDValue node0x166898e0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16689750, node0x16689430);
SDValue node0x166899a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16689810, node0x16689680);
SDValue node0x16689a60 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x166899a0, node0x16688e50);
SDValue node0x16689b20 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166898e0, node0x16689a60);
SDValue node0x16689be0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x16689b20);
SDValue node0x16689c90 = dag->getStore(entry, dl, node0x16689b20, node0x16689110, mpi, 1);
SDValue node0x16689d40 = dag->getCopyToReg(node0x16689c90, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16689be0, SDValue());
roots.reserve(2);
roots.push_back(node0x16689d40);
roots.push_back(node0x16689c90);
dag->setRoot(node0x16689d40);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__regs__AEXT_CLONE_MOI_CLONE_:
    {
SDValue node0x1668a450 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1668a4f0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x1668a590 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x1668a630 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x1668a6d0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x1668a770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1668a820 = dag->getLoad(MVT::i16, dl, entry, node0x1668a450, mpi, 1);
SDValue node0x1668a8f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1668a9a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668a770, node0x1668a6d0);
SDValue node0x1668aa60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668a8f0, node0x1668a590);
SDValue node0x1668ab20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668a8f0, node0x1668a4f0);
SDValue node0x1668abe0 = dag->getLoad(MVT::i16, dl, entry, node0x1668a8f0, mpi, 1);
SDValue node0x1668acb0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668abe0, node0x1668a820);
SDValue node0x1668ad70 = dag->getLoad(MVT::i16, dl, entry, node0x1668a4f0, mpi, 1);
SDValue node0x1668ae40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668acb0, node0x1668a630);
SDValue node0x1668af00 = dag->getLoad(MVT::i16, dl, entry, node0x1668ab20, mpi, 1);
SDValue node0x1668afd0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668af00, node0x1668ad70);
SDValue node0x1668b090 = dag->getLoad(MVT::i16, dl, entry, node0x1668a590, mpi, 1);
SDValue node0x1668b160 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668afd0, node0x1668a630);
SDValue node0x1668b220 = dag->getLoad(MVT::i16, dl, entry, node0x1668aa60, mpi, 1);
SDValue node0x1668b2f0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1668b160, node0x1668ae40);
SDValue node0x1668b3b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668b220, node0x1668b090);
SDValue node0x1668b470 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668b3b0, node0x1668a630);
SDValue node0x1668b530 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1668b2f0, node0x1668b470);
SDValue node0x1668b5f0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1668b530);
SDValue node0x1668b6a0 = dag->getStore(entry, dl, node0x1668b530, node0x1668a9a0, mpi, 1);
SDValue node0x1668b750 = dag->getCopyToReg(node0x1668b6a0, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1668b5f0, SDValue());
roots.reserve(2);
roots.push_back(node0x1668b750);
roots.push_back(node0x1668b6a0);
dag->setRoot(node0x1668b750);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__AEXT_CLONE_MOI_CLONE_:
    {
SDValue node0x1668bf70 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1668c010 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x1668c0b0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x1668c150 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x1668c1f0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x1668c290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1668c340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1668c3f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668c290, node0x1668c0b0);
SDValue node0x1668c4b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668c290, node0x1668c010);
SDValue node0x1668c570 = dag->getLoad(MVT::i16, dl, entry, node0x1668c290, mpi, 1);
SDValue node0x1668c640 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668c340, node0x1668c1f0);
SDValue node0x1668c700 = dag->getLoad(MVT::i16, dl, entry, node0x1668bf70, mpi, 1);
SDValue node0x1668c7d0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668c700, node0x1668c570);
SDValue node0x1668c890 = dag->getLoad(MVT::i16, dl, entry, node0x1668c4b0, mpi, 1);
SDValue node0x1668c960 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668c7d0, node0x1668c150);
SDValue node0x1668ca20 = dag->getLoad(MVT::i16, dl, entry, node0x1668c010, mpi, 1);
SDValue node0x1668caf0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668ca20, node0x1668c890);
SDValue node0x1668cbb0 = dag->getLoad(MVT::i16, dl, entry, node0x1668c3f0, mpi, 1);
SDValue node0x1668cc80 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668caf0, node0x1668c150);
SDValue node0x1668cd40 = dag->getLoad(MVT::i16, dl, entry, node0x1668c0b0, mpi, 1);
SDValue node0x1668ce10 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1668cc80, node0x1668c960);
SDValue node0x1668ced0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668cd40, node0x1668cbb0);
SDValue node0x1668cf90 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668ced0, node0x1668c150);
SDValue node0x1668d050 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1668ce10, node0x1668cf90);
SDValue node0x1668d110 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1668d050);
SDValue node0x1668d1c0 = dag->getStore(entry, dl, node0x1668d050, node0x1668c640, mpi, 1);
SDValue node0x1668d270 = dag->getCopyToReg(node0x1668d1c0, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1668d110, SDValue());
roots.reserve(2);
roots.push_back(node0x1668d270);
roots.push_back(node0x1668d1c0);
dag->setRoot(node0x1668d270);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__AEXT_CLONE_MOI_CLONE_:
    {
SDValue node0x1668da90 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x1668db30 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x1668dbd0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x1668dc70 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x1668dd10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1668ddc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x1668de70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1668df20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668dd10, node0x1668db30);
SDValue node0x1668dfe0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668dd10, node0x1668da90);
SDValue node0x1668e0a0 = dag->getLoad(MVT::i16, dl, entry, node0x1668dd10, mpi, 1);
SDValue node0x1668e170 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668ddc0, node0x1668dc70);
SDValue node0x1668e230 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668de70, node0x1668db30);
SDValue node0x1668e2f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668de70, node0x1668da90);
SDValue node0x1668e3b0 = dag->getLoad(MVT::i16, dl, entry, node0x1668de70, mpi, 1);
SDValue node0x1668e480 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668e3b0, node0x1668e0a0);
SDValue node0x1668e540 = dag->getLoad(MVT::i16, dl, entry, node0x1668dfe0, mpi, 1);
SDValue node0x1668e610 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668e480, node0x1668dbd0);
SDValue node0x1668e6d0 = dag->getLoad(MVT::i16, dl, entry, node0x1668e2f0, mpi, 1);
SDValue node0x1668e7a0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668e6d0, node0x1668e540);
SDValue node0x1668e860 = dag->getLoad(MVT::i16, dl, entry, node0x1668df20, mpi, 1);
SDValue node0x1668e930 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668e7a0, node0x1668dbd0);
SDValue node0x1668e9f0 = dag->getLoad(MVT::i16, dl, entry, node0x1668e230, mpi, 1);
SDValue node0x1668eac0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1668e930, node0x1668e610);
SDValue node0x1668eb80 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668e9f0, node0x1668e860);
SDValue node0x1668ec40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668eb80, node0x1668dbd0);
SDValue node0x1668ed00 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x1668eac0, node0x1668ec40);
SDValue node0x1668edc0 = dag->getNode(ISD::ANY_EXTEND, dl, MVT::i32, node0x1668ed00);
SDValue node0x1668ee70 = dag->getStore(entry, dl, node0x1668ed00, node0x1668e170, mpi, 1);
SDValue node0x1668ef20 = dag->getCopyToReg(node0x1668ee70, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1668edc0, SDValue());
roots.reserve(2);
roots.push_back(node0x1668ef20);
roots.push_back(node0x1668ee70);
dag->setRoot(node0x1668ef20);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__reg0__MOI_CLONE_:
    {
SDValue node0x1668f900 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x1668f9a0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x1668fa40 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x1668fae0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x1668fb80 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x1668fc20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1668fcd0 = dag->getLoad(MVT::i16, dl, entry, node0x1668f900, mpi, 1);
SDValue node0x1668fda0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1668fc20, node0x1668fb80);
SDValue node0x1668fe60 = dag->getLoad(MVT::i16, dl, entry, node0x1668f900, mpi, 1);
SDValue node0x1668ff30 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x1668fe60, node0x1668fcd0);
SDValue node0x1668fff0 = dag->getLoad(MVT::i16, dl, entry, node0x1668f9a0, mpi, 1);
SDValue node0x166900c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x1668ff30, node0x1668fae0);
SDValue node0x16690180 = dag->getLoad(MVT::i16, dl, entry, node0x1668f9a0, mpi, 1);
SDValue node0x16690250 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16690180, node0x1668fff0);
SDValue node0x16690310 = dag->getLoad(MVT::i16, dl, entry, node0x1668fa40, mpi, 1);
SDValue node0x166903e0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16690250, node0x1668fae0);
SDValue node0x166904a0 = dag->getLoad(MVT::i16, dl, entry, node0x1668fa40, mpi, 1);
SDValue node0x16690570 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166903e0, node0x166900c0);
SDValue node0x16690630 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x166904a0, node0x16690310);
SDValue node0x166906f0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16690630, node0x1668fae0);
SDValue node0x166907b0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16690570, node0x166906f0);
SDValue node0x16690870 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x166907b0);
SDValue node0x16690920 = dag->getStore(entry, dl, node0x166907b0, node0x1668fda0, mpi, 1);
SDValue node0x166909d0 = dag->getCopyToReg(node0x16690920, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16690870, SDValue());
roots.reserve(2);
roots.push_back(node0x166909d0);
roots.push_back(node0x16690920);
dag->setRoot(node0x166909d0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__reg0__regs__MOI_CLONE_:
    {
SDValue node0x166919a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16691a40 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16691ae0 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x16691b80 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x16691c20 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16691cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16691d70 = dag->getLoad(MVT::i16, dl, entry, node0x166919a0, mpi, 1);
SDValue node0x16691e40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16691ef0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16691cc0, node0x16691c20);
SDValue node0x16691fb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16691e40, node0x16691ae0);
SDValue node0x16692070 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16691e40, node0x16691a40);
SDValue node0x16692130 = dag->getLoad(MVT::i16, dl, entry, node0x16691e40, mpi, 1);
SDValue node0x16692200 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16692130, node0x16691d70);
SDValue node0x166922c0 = dag->getLoad(MVT::i16, dl, entry, node0x16691a40, mpi, 1);
SDValue node0x16692390 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16692200, node0x16691b80);
SDValue node0x16692450 = dag->getLoad(MVT::i16, dl, entry, node0x16692070, mpi, 1);
SDValue node0x16692520 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16692450, node0x166922c0);
SDValue node0x166925e0 = dag->getLoad(MVT::i16, dl, entry, node0x16691ae0, mpi, 1);
SDValue node0x166926b0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16692520, node0x16691b80);
SDValue node0x16692770 = dag->getLoad(MVT::i16, dl, entry, node0x16691fb0, mpi, 1);
SDValue node0x16692840 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166926b0, node0x16692390);
SDValue node0x16692900 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16692770, node0x166925e0);
SDValue node0x166929c0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16692900, node0x16691b80);
SDValue node0x16692a80 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16692840, node0x166929c0);
SDValue node0x16692b40 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x16692a80);
SDValue node0x16692bf0 = dag->getStore(entry, dl, node0x16692a80, node0x16691ef0, mpi, 1);
SDValue node0x16692ca0 = dag->getCopyToReg(node0x16692bf0, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16692b40, SDValue());
roots.reserve(2);
roots.push_back(node0x16692ca0);
roots.push_back(node0x16692bf0);
dag->setRoot(node0x16692ca0);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__reg0__MOI_CLONE_:
    {
SDValue node0x16693d30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16693dd0 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16693e70 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x16693f10 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x16693fb0 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x16694050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16694100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x166941b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16694050, node0x16693e70);
SDValue node0x16694270 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16694050, node0x16693dd0);
SDValue node0x16694330 = dag->getLoad(MVT::i16, dl, entry, node0x16694050, mpi, 1);
SDValue node0x16694400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16694100, node0x16693fb0);
SDValue node0x166944c0 = dag->getLoad(MVT::i16, dl, entry, node0x16693d30, mpi, 1);
SDValue node0x16694590 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x166944c0, node0x16694330);
SDValue node0x16694650 = dag->getLoad(MVT::i16, dl, entry, node0x16694270, mpi, 1);
SDValue node0x16694720 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16694590, node0x16693f10);
SDValue node0x166947e0 = dag->getLoad(MVT::i16, dl, entry, node0x16693dd0, mpi, 1);
SDValue node0x166948b0 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x166947e0, node0x16694650);
SDValue node0x16694970 = dag->getLoad(MVT::i16, dl, entry, node0x166941b0, mpi, 1);
SDValue node0x16694a40 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x166948b0, node0x16693f10);
SDValue node0x16694b00 = dag->getLoad(MVT::i16, dl, entry, node0x16693e70, mpi, 1);
SDValue node0x16694bd0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16694a40, node0x16694720);
SDValue node0x16694c90 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16694b00, node0x16694970);
SDValue node0x16694d50 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16694c90, node0x16693f10);
SDValue node0x16694e10 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16694bd0, node0x16694d50);
SDValue node0x16694ed0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x16694e10);
SDValue node0x16694f80 = dag->getStore(entry, dl, node0x16694e10, node0x16694400, mpi, 1);
SDValue node0x16695030 = dag->getCopyToReg(node0x16694f80, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16694ed0, SDValue());
roots.reserve(2);
roots.push_back(node0x16695030);
roots.push_back(node0x16694f80);
dag->setRoot(node0x16695030);
    }
    break;
  case Codasip::i_ext_hackaton__opc_hackaton_custom_c__regs__regs__regs__MOI_CLONE_:
    {
SDValue node0x16696170 = dag->getConstant(2LL, dl, MVT::i32);
SDValue node0x16696210 = dag->getConstant(4LL, dl, MVT::i32);
SDValue node0x166962b0 = dag->getConstant(8LL, dl, MVT::i16);
SDValue node0x16696350 = dag->getConstant(6LL, dl, MVT::i32);
SDValue node0x166963f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x166964a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(3), MVT::i32);
SDValue node0x16696550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16696600 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x166963f0, node0x16696210);
SDValue node0x166966c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x166963f0, node0x16696170);
SDValue node0x16696780 = dag->getLoad(MVT::i16, dl, entry, node0x166963f0, mpi, 1);
SDValue node0x16696850 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x166964a0, node0x16696350);
SDValue node0x16696910 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16696550, node0x16696210);
SDValue node0x166969d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16696550, node0x16696170);
SDValue node0x16696a90 = dag->getLoad(MVT::i16, dl, entry, node0x16696550, mpi, 1);
SDValue node0x16696b60 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16696a90, node0x16696780);
SDValue node0x16696c20 = dag->getLoad(MVT::i16, dl, entry, node0x166966c0, mpi, 1);
SDValue node0x16696cf0 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16696b60, node0x166962b0);
SDValue node0x16696db0 = dag->getLoad(MVT::i16, dl, entry, node0x166969d0, mpi, 1);
SDValue node0x16696e80 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x16696db0, node0x16696c20);
SDValue node0x16696f40 = dag->getLoad(MVT::i16, dl, entry, node0x16696600, mpi, 1);
SDValue node0x16697010 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16696e80, node0x166962b0);
SDValue node0x166970d0 = dag->getLoad(MVT::i16, dl, entry, node0x16696910, mpi, 1);
SDValue node0x166971a0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x16697010, node0x16696cf0);
SDValue node0x16697260 = dag->getNode(ISD::MUL, dl, MVT::i16, node0x166970d0, node0x16696f40);
SDValue node0x16697320 = dag->getNode(ISD::SRA, dl, MVT::i16, node0x16697260, node0x166962b0);
SDValue node0x166973e0 = dag->getNode(ISD::ADD, dl, MVT::i16, node0x166971a0, node0x16697320);
SDValue node0x166974a0 = dag->getNode(ISD::SIGN_EXTEND, dl, MVT::i32, node0x166973e0);
SDValue node0x16697550 = dag->getStore(entry, dl, node0x166973e0, node0x16696850, mpi, 1);
SDValue node0x16697600 = dag->getCopyToReg(node0x16697550, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x166974a0, SDValue());
roots.reserve(2);
roots.push_back(node0x16697600);
roots.push_back(node0x16697550);
dag->setRoot(node0x16697600);
    }
    break;
  case Codasip::c_addi_lo__opc_addi__regs__regs__:
    {
SDValue node0x16261c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16620df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16608400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16261c70, node0x16620df0);
SDValue node0x166083b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16608400, SDValue());
roots.reserve(1);
roots.push_back(node0x166083b0);
dag->setRoot(node0x166083b0);
    }
    break;
  case Codasip::c_lui_hi__opc_lui__regs__:
    {
SDValue node0x16608a80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x166085e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16608a80, SDValue());
roots.reserve(1);
roots.push_back(node0x166085e0);
dag->setRoot(node0x166085e0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_lo__:
    {
SDValue node0x16231a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16231700 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16231a20, SDValue());
roots.reserve(1);
roots.push_back(node0x16231700);
dag->setRoot(node0x16231700);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x16023250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16231b50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16023250, SDValue());
roots.reserve(1);
roots.push_back(node0x16231b50);
dag->setRoot(node0x16231b50);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_lo__:
    {
SDValue node0x1663db50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1601e750 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1601e7f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1663db50, node0x1601e750);
SDValue node0x1601e370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1601e7f0, SDValue());
roots.reserve(1);
roots.push_back(node0x1601e370);
dag->setRoot(node0x1601e370);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_addi__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x16046240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16259990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16259a30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16046240, node0x16259990);
SDValue node0x1601ea00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16259a30, SDValue());
roots.reserve(1);
roots.push_back(node0x1601ea00);
dag->setRoot(node0x1601ea00);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_lo__:
    {
SDValue node0x1622eee0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16624d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16624dc0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x1622eee0, node0x16624d20);
SDValue node0x16624940 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16624dc0, SDValue());
roots.reserve(1);
roots.push_back(node0x16624940);
dag->setRoot(node0x16624940);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_andi__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x166206c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16625c40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16625ce0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x166206c0, node0x16625c40);
SDValue node0x16624fd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16625ce0, SDValue());
roots.reserve(1);
roots.push_back(node0x16624fd0);
dag->setRoot(node0x16624fd0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_lo__:
    {
SDValue node0x166300d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1662fdb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x166300d0, SDValue());
roots.reserve(1);
roots.push_back(node0x1662fdb0);
dag->setRoot(node0x1662fdb0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x16630d50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16630200 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16630d50, SDValue());
roots.reserve(1);
roots.push_back(node0x16630200);
dag->setRoot(node0x16630200);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_lo__:
    {
SDValue node0x16633a80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16633db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16633e50 = dag->getNode(ISD::OR, dl, MVT::i32, node0x16633a80, node0x16633db0);
SDValue node0x16633940 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16633e50, SDValue());
roots.reserve(1);
roots.push_back(node0x16633940);
dag->setRoot(node0x16633940);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_ori__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x16634a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16634d60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16634e00 = dag->getNode(ISD::OR, dl, MVT::i32, node0x16634a30, node0x16634d60);
SDValue node0x16634060 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16634e00, SDValue());
roots.reserve(1);
roots.push_back(node0x16634060);
dag->setRoot(node0x16634060);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_lo__:
    {
SDValue node0x16552e50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16552f30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16552fd0 = dag->getSetCC(dl, MVT::i32, node0x16552f30, node0x16552e50, ISD::SETGT);
SDValue node0x16552c10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16552fd0, SDValue());
roots.reserve(1);
roots.push_back(node0x16552c10);
dag->setRoot(node0x16552c10);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x16553d40 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16553e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16553ec0 = dag->getSetCC(dl, MVT::i32, node0x16553e20, node0x16553d40, ISD::SETGT);
SDValue node0x165532a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16553ec0, SDValue());
roots.reserve(1);
roots.push_back(node0x165532a0);
dag->setRoot(node0x165532a0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_lo__:
    {
SDValue node0x16556ea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x165571d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16557270 = dag->getSetCC(dl, MVT::i32, node0x16556ea0, node0x165571d0, ISD::SETLT);
SDValue node0x16556d60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16557270, SDValue());
roots.reserve(1);
roots.push_back(node0x16556d60);
dag->setRoot(node0x16556d60);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_slti__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x16557f60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16558290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16558330 = dag->getSetCC(dl, MVT::i32, node0x16557f60, node0x16558290, ISD::SETLT);
SDValue node0x16557590 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16558330, SDValue());
roots.reserve(1);
roots.push_back(node0x16557590);
dag->setRoot(node0x16557590);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_lo__:
    {
SDValue node0x16562a90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16562b70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16562c10 = dag->getSetCC(dl, MVT::i32, node0x16562b70, node0x16562a90, ISD::SETNE);
SDValue node0x16562850 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16562c10, SDValue());
roots.reserve(1);
roots.push_back(node0x16562850);
dag->setRoot(node0x16562850);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x16563980 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16563a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16563b00 = dag->getSetCC(dl, MVT::i32, node0x16563a60, node0x16563980, ISD::SETNE);
SDValue node0x16562ee0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16563b00, SDValue());
roots.reserve(1);
roots.push_back(node0x16562ee0);
dag->setRoot(node0x16562ee0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_lo__:
    {
SDValue node0x16566ae0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16566e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16566eb0 = dag->getSetCC(dl, MVT::i32, node0x16566ae0, node0x16566e10, ISD::SETULT);
SDValue node0x165669a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16566eb0, SDValue());
roots.reserve(1);
roots.push_back(node0x165669a0);
dag->setRoot(node0x165669a0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_sltiu__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x16567ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16567ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16567f70 = dag->getSetCC(dl, MVT::i32, node0x16567ba0, node0x16567ed0, ISD::SETULT);
SDValue node0x165671d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16567f70, SDValue());
roots.reserve(1);
roots.push_back(node0x165671d0);
dag->setRoot(node0x165671d0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_lo__:
    {
SDValue node0x165727b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16572490 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x165727b0, SDValue());
roots.reserve(1);
roots.push_back(node0x16572490);
dag->setRoot(node0x16572490);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x16573430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x165728e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16573430, SDValue());
roots.reserve(1);
roots.push_back(node0x165728e0);
dag->setRoot(node0x165728e0);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_lo__:
    {
SDValue node0x165762a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x165765d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16576670 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x165762a0, node0x165765d0);
SDValue node0x16576160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16576670, SDValue());
roots.reserve(1);
roots.push_back(node0x16576160);
dag->setRoot(node0x16576160);
    }
    break;
  case Codasip::i_comp_2reg_imm__opc_xori__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x16577250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16577580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16577620 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x16577250, node0x16577580);
SDValue node0x16576880 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16577620, SDValue());
roots.reserve(1);
roots.push_back(node0x16576880);
dag->setRoot(node0x16576880);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_lo__:
    {
SDValue node0x1628c070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x1628bd70 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x1628c070);
roots.reserve(1);
roots.push_back(node0x1628bd70);
dag->setRoot(node0x1628bd70);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__reg0__simm12_pcrel_lo__:
    {
SDValue node0x1628caf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x1628c820 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x1628caf0);
roots.reserve(1);
roots.push_back(node0x1628c820);
dag->setRoot(node0x1628c820);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_lo__:
    {
SDValue node0x16296200 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x16294950 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16296200, SDValue());
SDValue node0x16296570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x162961d0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x16294950, node0x16296570);
roots.reserve(2);
roots.push_back(node0x16294950);
roots.push_back(node0x162961d0);
dag->setRoot(node0x162961d0);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x16296f10 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x16296750 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x16296f10, SDValue());
SDValue node0x16297280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x16296ee0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x16296750, node0x16297280);
roots.reserve(2);
roots.push_back(node0x16296750);
roots.push_back(node0x16296ee0);
dag->setRoot(node0x16296ee0);
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
SDValue node0x162b10c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1629b490 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162b10c0, mpi, MVT::i8, 1);
SDValue node0x162b04b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1629b490, SDValue());
roots.reserve(1);
roots.push_back(node0x162b04b0);
dag->setRoot(node0x162b04b0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_lo__regs__:
    {
SDValue node0x162b24a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162b27d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162b2870 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162b24a0, node0x162b27d0);
SDValue node0x162b1160 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162b2870, mpi, MVT::i8, 1);
SDValue node0x162b1410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162b1160, SDValue());
roots.reserve(1);
roots.push_back(node0x162b1410);
dag->setRoot(node0x162b1410);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x162b3880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162b2900 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162b3880, mpi, MVT::i8, 1);
SDValue node0x162b2ca0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162b2900, SDValue());
roots.reserve(1);
roots.push_back(node0x162b2ca0);
dag->setRoot(node0x162b2ca0);
    }
    break;
  case Codasip::i_load__opc_loadb__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x162b4b50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162b4e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162b4f20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162b4b50, node0x162b4e80);
SDValue node0x162b3920 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162b4f20, mpi, MVT::i8, 1);
SDValue node0x162b2ac0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162b3920, SDValue());
roots.reserve(1);
roots.push_back(node0x162b2ac0);
dag->setRoot(node0x162b2ac0);
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
SDValue node0x162c2b60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162b4fb0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162c2b60, mpi, MVT::i8, 1);
SDValue node0x162c20d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162b4fb0, SDValue());
roots.reserve(1);
roots.push_back(node0x162c20d0);
dag->setRoot(node0x162c20d0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_lo__regs__:
    {
SDValue node0x162c4010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162c4340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162c43e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162c4010, node0x162c4340);
SDValue node0x162c2c00 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162c43e0, mpi, MVT::i8, 1);
SDValue node0x162c2eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162c2c00, SDValue());
roots.reserve(1);
roots.push_back(node0x162c2eb0);
dag->setRoot(node0x162c2eb0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x162c5440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162c4470 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162c5440, mpi, MVT::i8, 1);
SDValue node0x162c47c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162c4470, SDValue());
roots.reserve(1);
roots.push_back(node0x162c47c0);
dag->setRoot(node0x162c47c0);
    }
    break;
  case Codasip::i_load__opc_loadbu__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x162c66c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162c69f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162c6a90 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162c66c0, node0x162c69f0);
SDValue node0x162c54e0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162c6a90, mpi, MVT::i8, 1);
SDValue node0x162c4680 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162c54e0, SDValue());
roots.reserve(1);
roots.push_back(node0x162c4680);
dag->setRoot(node0x162c4680);
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
SDValue node0x162d46d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162c6b20 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162d46d0, mpi, MVT::i16, 1);
SDValue node0x162d3ac0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162c6b20, SDValue());
roots.reserve(1);
roots.push_back(node0x162d3ac0);
dag->setRoot(node0x162d3ac0);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_lo__regs__:
    {
SDValue node0x162d5b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162d5eb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162d5f50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162d5b80, node0x162d5eb0);
SDValue node0x162d4770 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162d5f50, mpi, MVT::i16, 1);
SDValue node0x162d4a20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162d4770, SDValue());
roots.reserve(1);
roots.push_back(node0x162d4a20);
dag->setRoot(node0x162d4a20);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x162d6f60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162d5fe0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162d6f60, mpi, MVT::i16, 1);
SDValue node0x162d6380 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162d5fe0, SDValue());
roots.reserve(1);
roots.push_back(node0x162d6380);
dag->setRoot(node0x162d6380);
    }
    break;
  case Codasip::i_load__opc_loadh__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x162d8230 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162d8560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162d8600 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162d8230, node0x162d8560);
SDValue node0x162d7000 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x162d8600, mpi, MVT::i16, 1);
SDValue node0x162d61a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162d7000, SDValue());
roots.reserve(1);
roots.push_back(node0x162d61a0);
dag->setRoot(node0x162d61a0);
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
SDValue node0x162e6240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162d8690 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162e6240, mpi, MVT::i16, 1);
SDValue node0x162e57b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162d8690, SDValue());
roots.reserve(1);
roots.push_back(node0x162e57b0);
dag->setRoot(node0x162e57b0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_lo__regs__:
    {
SDValue node0x162e76f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162e7a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162e7ac0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162e76f0, node0x162e7a20);
SDValue node0x162e62e0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162e7ac0, mpi, MVT::i16, 1);
SDValue node0x162e6590 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162e62e0, SDValue());
roots.reserve(1);
roots.push_back(node0x162e6590);
dag->setRoot(node0x162e6590);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x162e8b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162e7b50 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162e8b20, mpi, MVT::i16, 1);
SDValue node0x162e7ea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162e7b50, SDValue());
roots.reserve(1);
roots.push_back(node0x162e7ea0);
dag->setRoot(node0x162e7ea0);
    }
    break;
  case Codasip::i_load__opc_loadhu__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x162e9da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162ea0d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162ea170 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162e9da0, node0x162ea0d0);
SDValue node0x162e8bc0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x162ea170, mpi, MVT::i16, 1);
SDValue node0x162e7d60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162e8bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x162e7d60);
dag->setRoot(node0x162e7d60);
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
SDValue node0x162f7db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162f7e50 = dag->getLoad(MVT::i32, dl, entry, node0x162f7db0, mpi, 1);
SDValue node0x162f71a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162f7e50, SDValue());
roots.reserve(1);
roots.push_back(node0x162f71a0);
dag->setRoot(node0x162f71a0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_lo__regs__:
    {
SDValue node0x162f91b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162f94e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162f9580 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162f91b0, node0x162f94e0);
SDValue node0x162f9610 = dag->getLoad(MVT::i32, dl, entry, node0x162f9580, mpi, 1);
SDValue node0x162f8000 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162f9610, SDValue());
roots.reserve(1);
roots.push_back(node0x162f8000);
dag->setRoot(node0x162f8000);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_pcrel_lo__reg0__:
    {
SDValue node0x162fa490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162fa530 = dag->getLoad(MVT::i32, dl, entry, node0x162fa490, mpi, 1);
SDValue node0x162f98b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162fa530, SDValue());
roots.reserve(1);
roots.push_back(node0x162f98b0);
dag->setRoot(node0x162f98b0);
    }
    break;
  case Codasip::i_load__opc_loadw__regs__simm12_pcrel_lo__regs__:
    {
SDValue node0x162fb700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x162fba30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x162fbad0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x162fb700, node0x162fba30);
SDValue node0x162fbb60 = dag->getLoad(MVT::i32, dl, entry, node0x162fbad0, mpi, 1);
SDValue node0x162f97c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x162fbb60, SDValue());
roots.reserve(1);
roots.push_back(node0x162f97c0);
dag->setRoot(node0x162f97c0);
    }
    break;
  case Codasip::i_lui_hi__opc_lui__regs__imm20_hi__:
    {
SDValue node0x1631ade0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1631ae60 = dag->getConstant(2048LL, dl, MVT::i32);
SDValue node0x1631af20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1631ade0, node0x1631ae60);
SDValue node0x1631af90 = dag->getConstant(-4096LL, dl, MVT::i32);
SDValue node0x1631b050 = dag->getNode(ISD::AND, dl, MVT::i32, node0x1631af20, node0x1631af90);
SDValue node0x1631aaf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1631b050, SDValue());
roots.reserve(1);
roots.push_back(node0x1631aaf0);
dag->setRoot(node0x1631aaf0);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_lo__:
    {
SDValue node0x163397c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16336900 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163397c0, SDValue());
roots.reserve(1);
roots.push_back(node0x16336900);
dag->setRoot(node0x16336900);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__reg0__simm12_pcrel_lo__:
    {
SDValue node0x1633a360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163398f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1633a360, SDValue());
roots.reserve(1);
roots.push_back(node0x163398f0);
dag->setRoot(node0x163398f0);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_lo__:
    {
SDValue node0x1633b690 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1633b9c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1633ba60 = dag->getNode(ISD::OR, dl, MVT::i32, node0x1633b690, node0x1633b9c0);
SDValue node0x1633aa00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1633ba60, SDValue());
roots.reserve(1);
roots.push_back(node0x1633aa00);
dag->setRoot(node0x1633aa00);
    }
    break;
  case Codasip::i_ori_emulation_alias__regs__regs__simm12_pcrel_lo__:
    {
SDValue node0x1633c490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1633c7c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1633c860 = dag->getNode(ISD::OR, dl, MVT::i32, node0x1633c490, node0x1633c7c0);
SDValue node0x1633bbd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1633c860, SDValue());
roots.reserve(1);
roots.push_back(node0x1633bbd0);
dag->setRoot(node0x1633bbd0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x1634cad0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x1634cd70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1650f220 = dag->getStore(entry, dl, node0x1634cad0, node0x1634cd70, mpi, 1);
roots.reserve(1);
roots.push_back(node0x1650f220);
dag->setRoot(node0x1650f220);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_lo__regs__:
    {
SDValue node0x1634dbf0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x1634dd50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1634dfe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1634e080 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1634dd50, node0x1634dfe0);
SDValue node0x1634e110 = dag->getStore(entry, dl, node0x1634dbf0, node0x1634e080, mpi, 1);
roots.reserve(1);
roots.push_back(node0x1634e110);
dag->setRoot(node0x1634e110);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x1634ec90 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x1634ef30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1634efd0 = dag->getStore(entry, dl, node0x1634ec90, node0x1634ef30, mpi, 1);
roots.reserve(1);
roots.push_back(node0x1634efd0);
dag->setRoot(node0x1634efd0);
    }
    break;
  case Codasip::i_store__opc_storeb__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x16350180 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x163502e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16350570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16350610 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x163502e0, node0x16350570);
SDValue node0x163506a0 = dag->getStore(entry, dl, node0x16350180, node0x16350610, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163506a0);
dag->setRoot(node0x163506a0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_lo__reg0__:
    {
SDValue node0x163581a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163584e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1608f0f0 = dag->getTruncStore(entry, dl, node0x163581a0, node0x163584e0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x1608f0f0);
dag->setRoot(node0x1608f0f0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_lo__regs__:
    {
SDValue node0x16359830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16359a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16359cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16359d60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16359a30, node0x16359cc0);
SDValue node0x1608f2d0 = dag->getTruncStore(entry, dl, node0x16359830, node0x16359d60, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x1608f2d0);
dag->setRoot(node0x1608f2d0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x1635aab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1635adf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1608f4d0 = dag->getTruncStore(entry, dl, node0x1635aab0, node0x1635adf0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x1608f4d0);
dag->setRoot(node0x1608f4d0);
    }
    break;
  case Codasip::i_store__opc_storeb__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x1635c0c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1635c2c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1635c550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1635c5f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1635c2c0, node0x1635c550);
SDValue node0x1608f6b0 = dag->getTruncStore(entry, dl, node0x1635c0c0, node0x1635c5f0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x1608f6b0);
dag->setRoot(node0x1608f6b0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x1635f6d0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x1635f970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1635fa10 = dag->getStore(entry, dl, node0x1635f6d0, node0x1635f970, mpi, 1);
roots.reserve(1);
roots.push_back(node0x1635fa10);
dag->setRoot(node0x1635fa10);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_lo__regs__:
    {
SDValue node0x163609d0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x16360b30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16360dc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16360e60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16360b30, node0x16360dc0);
SDValue node0x16360ef0 = dag->getStore(entry, dl, node0x163609d0, node0x16360e60, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16360ef0);
dag->setRoot(node0x16360ef0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x16361a70 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x16361d10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16361db0 = dag->getStore(entry, dl, node0x16361a70, node0x16361d10, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16361db0);
dag->setRoot(node0x16361db0);
    }
    break;
  case Codasip::i_store__opc_storeh__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x16362f60 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x163630c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16363350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163633f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x163630c0, node0x16363350);
SDValue node0x16363480 = dag->getStore(entry, dl, node0x16362f60, node0x163633f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16363480);
dag->setRoot(node0x16363480);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_lo__reg0__:
    {
SDValue node0x1636b170 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1636b4b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16090390 = dag->getTruncStore(entry, dl, node0x1636b170, node0x1636b4b0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x16090390);
dag->setRoot(node0x16090390);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_lo__regs__:
    {
SDValue node0x1636c800 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1636ca00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1636cc90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1636cd30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1636ca00, node0x1636cc90);
SDValue node0x16090570 = dag->getTruncStore(entry, dl, node0x1636c800, node0x1636cd30, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x16090570);
dag->setRoot(node0x16090570);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x1636da80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1636ddc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16090770 = dag->getTruncStore(entry, dl, node0x1636da80, node0x1636ddc0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x16090770);
dag->setRoot(node0x16090770);
    }
    break;
  case Codasip::i_store__opc_storeh__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x1636f090 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1636f290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1636f520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1636f5c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1636f290, node0x1636f520);
SDValue node0x16090950 = dag->getTruncStore(entry, dl, node0x1636f090, node0x1636f5c0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x16090950);
dag->setRoot(node0x16090950);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_lo__reg0__:
    {
SDValue node0x163726a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x163728a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16372940 = dag->getStore(entry, dl, node0x163726a0, node0x163728a0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16372940);
dag->setRoot(node0x16372940);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_lo__regs__:
    {
SDValue node0x16373900 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16373a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16373c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16373cf0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16373a60, node0x16373c50);
SDValue node0x16373d80 = dag->getStore(entry, dl, node0x16373900, node0x16373cf0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16373d80);
dag->setRoot(node0x16373d80);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x16374900 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16374b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16374ba0 = dag->getStore(entry, dl, node0x16374900, node0x16374b00, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16374ba0);
dag->setRoot(node0x16374ba0);
    }
    break;
  case Codasip::i_store__opc_storew__reg0__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x16375d50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x16375eb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x163760a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16376140 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16375eb0, node0x163760a0);
SDValue node0x163761d0 = dag->getStore(entry, dl, node0x16375d50, node0x16376140, mpi, 1);
roots.reserve(1);
roots.push_back(node0x163761d0);
dag->setRoot(node0x163761d0);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_lo__reg0__:
    {
SDValue node0x1637dd80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1637e010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1637b840 = dag->getStore(entry, dl, node0x1637dd80, node0x1637e010, mpi, 1);
roots.reserve(1);
roots.push_back(node0x1637b840);
dag->setRoot(node0x1637b840);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_lo__regs__:
    {
SDValue node0x1637f360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x1637f4b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1637f740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x1637f7e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x1637f4b0, node0x1637f740);
SDValue node0x1637f870 = dag->getStore(entry, dl, node0x1637f360, node0x1637f7e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x1637f870);
dag->setRoot(node0x1637f870);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_pcrel_lo__reg0__:
    {
SDValue node0x163804e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16380770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16380810 = dag->getStore(entry, dl, node0x163804e0, node0x16380770, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16380810);
dag->setRoot(node0x16380810);
    }
    break;
  case Codasip::i_store__opc_storew__regs__simm12_s_pcrel_lo__regs__:
    {
SDValue node0x16381a90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16381be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x16381e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x16381f10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x16381be0, node0x16381e70);
SDValue node0x16381fa0 = dag->getStore(entry, dl, node0x16381a90, node0x16381f10, mpi, 1);
roots.reserve(1);
roots.push_back(node0x16381fa0);
dag->setRoot(node0x16381fa0);
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
SDValue node0x163b2950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x163b2680 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x163b2950, SDValue());
roots.reserve(1);
roots.push_back(node0x163b2680);
dag->setRoot(node0x163b2680);
    }
    break;
  case Codasip::i_jalr__opc_jalr__reg0__regs__simm12_simple__:
    {
SDValue node0x162915e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x16291880 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x162915e0);
roots.reserve(1);
roots.push_back(node0x16291880);
dag->setRoot(node0x16291880);
    }
    break;
  case Codasip::i_jalr__opc_jalr__regs__regs__simm12_simple__:
    {
SDValue node0x1629c2a0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x1629a8b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x1629c2a0, SDValue());
SDValue node0x1629c750 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x1629c9f0 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x1629a8b0, node0x1629c750);
roots.reserve(2);
roots.push_back(node0x1629a8b0);
roots.push_back(node0x1629c9f0);
dag->setRoot(node0x1629c9f0);
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
