/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc-11.2.0/gcc/config/nds32/nds32.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, machine_mode);
extern int address_operand (rtx, machine_mode);
extern int register_operand (rtx, machine_mode);
extern int pmode_register_operand (rtx, machine_mode);
extern int scratch_operand (rtx, machine_mode);
extern int immediate_operand (rtx, machine_mode);
extern int const_int_operand (rtx, machine_mode);
extern int const_double_operand (rtx, machine_mode);
extern int nonimmediate_operand (rtx, machine_mode);
extern int nonmemory_operand (rtx, machine_mode);
extern int push_operand (rtx, machine_mode);
extern int pop_operand (rtx, machine_mode);
extern int memory_operand (rtx, machine_mode);
extern int indirect_operand (rtx, machine_mode);
extern int ordered_comparison_operator (rtx, machine_mode);
extern int comparison_operator (rtx, machine_mode);
extern int nds32_equality_comparison_operator (rtx, machine_mode);
extern int nds32_greater_less_comparison_operator (rtx, machine_mode);
extern int nds32_float_comparison_operator (rtx, machine_mode);
extern int nds32_movecc_comparison_operator (rtx, machine_mode);
extern int nds32_logical_binary_operator (rtx, machine_mode);
extern int nds32_conditional_call_comparison_operator (rtx, machine_mode);
extern int nds32_have_33_inst_operator (rtx, machine_mode);
extern int nds32_symbolic_operand (rtx, machine_mode);
extern int nds32_nonunspec_symbolic_operand (rtx, machine_mode);
extern int nds32_reg_constant_operand (rtx, machine_mode);
extern int nds32_rimm15s_operand (rtx, machine_mode);
extern int nds32_rimm11s_operand (rtx, machine_mode);
extern int nds32_imm_0_1_operand (rtx, machine_mode);
extern int nds32_imm_1_2_operand (rtx, machine_mode);
extern int nds32_imm_1_2_4_8_operand (rtx, machine_mode);
extern int nds32_imm2u_operand (rtx, machine_mode);
extern int nds32_imm4u_operand (rtx, machine_mode);
extern int nds32_imm5u_operand (rtx, machine_mode);
extern int nds32_imm6u_operand (rtx, machine_mode);
extern int nds32_rimm4u_operand (rtx, machine_mode);
extern int nds32_rimm5u_operand (rtx, machine_mode);
extern int nds32_rimm6u_operand (rtx, machine_mode);
extern int nds32_move_operand (rtx, machine_mode);
extern int nds32_vmove_operand (rtx, machine_mode);
extern int nds32_and_operand (rtx, machine_mode);
extern int nds32_ior_operand (rtx, machine_mode);
extern int nds32_xor_operand (rtx, machine_mode);
extern int nds32_general_register_operand (rtx, machine_mode);
extern int nds32_call_address_operand (rtx, machine_mode);
extern int nds32_insv_operand (rtx, machine_mode);
extern int nds32_lmw_smw_base_operand (rtx, machine_mode);
extern int float_even_register_operand (rtx, machine_mode);
extern int float_odd_register_operand (rtx, machine_mode);
extern int nds32_load_multiple_operation (rtx, machine_mode);
extern int nds32_load_multiple_and_update_address_operation (rtx, machine_mode);
extern int nds32_store_multiple_operation (rtx, machine_mode);
extern int nds32_store_multiple_and_update_address_operation (rtx, machine_mode);
extern int nds32_stack_push_operation (rtx, machine_mode);
extern int nds32_stack_pop_operation (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_w,
  CONSTRAINT_l,
  CONSTRAINT_d,
  CONSTRAINT_h,
  CONSTRAINT_t,
  CONSTRAINT_e,
  CONSTRAINT_k,
  CONSTRAINT_v,
  CONSTRAINT_x,
  CONSTRAINT_f,
  CONSTRAINT_Iv00,
  CONSTRAINT_Iv01,
  CONSTRAINT_Iv02,
  CONSTRAINT_Iv04,
  CONSTRAINT_Iv08,
  CONSTRAINT_Iu01,
  CONSTRAINT_Iu02,
  CONSTRAINT_Iu03,
  CONSTRAINT_In03,
  CONSTRAINT_Iu04,
  CONSTRAINT_Is05,
  CONSTRAINT_Iu05,
  CONSTRAINT_In05,
  CONSTRAINT_Iu06,
  CONSTRAINT_Ip05,
  CONSTRAINT_IU06,
  CONSTRAINT_Iu08,
  CONSTRAINT_Iu09,
  CONSTRAINT_Is08,
  CONSTRAINT_Is10,
  CONSTRAINT_Is11,
  CONSTRAINT_Is14,
  CONSTRAINT_Is15,
  CONSTRAINT_Iu15,
  CONSTRAINT_Ic15,
  CONSTRAINT_Ie15,
  CONSTRAINT_It15,
  CONSTRAINT_Ii15,
  CONSTRAINT_Is16,
  CONSTRAINT_Is17,
  CONSTRAINT_Is19,
  CONSTRAINT_Is20,
  CONSTRAINT_Ihig,
  CONSTRAINT_Izeb,
  CONSTRAINT_Izeh,
  CONSTRAINT_Ixls,
  CONSTRAINT_Ix11,
  CONSTRAINT_Ibms,
  CONSTRAINT_Ifex,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_U33,
  CONSTRAINT_U45,
  CONSTRAINT_Ufe,
  CONSTRAINT_U37,
  CONSTRAINT_Umw,
  CONSTRAINT_Da,
  CONSTRAINT_Q,
  CONSTRAINT_p,
  CONSTRAINT_Cs05,
  CONSTRAINT_Cs20,
  CONSTRAINT_Chig,
  CONSTRAINT_CVp5,
  CONSTRAINT_CVs5,
  CONSTRAINT_CVs2,
  CONSTRAINT_CVhi,
  CONSTRAINT_S,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_Iv00;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_f;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_Q;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_relaxed_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_Cs05 && c <= CONSTRAINT_S)
    return;
  if (c >= CONSTRAINT_V && c <= CONSTRAINT__g)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'C': return 4;
    case 'D': return 2;
    case 'I': return 4;
    case 'U': return 3;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_RELAXED_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_Cs05)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_Iv00)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */
