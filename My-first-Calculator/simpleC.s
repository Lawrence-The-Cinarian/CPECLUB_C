	.file	"simpleC.c"
	.text
	.globl	simpleC                         // -- Begin function simpleC
	.p2align	2
	.type	simpleC,@function
simpleC:                                // @simpleC
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #160
	.cfi_def_cfa_offset 160
	stp	x29, x30, [sp, #144]            // 16-byte Folded Spill
	add	x29, sp, #144
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	b	.LBB0_1
.LBB0_1:                                // =>This Inner Loop Header: Depth=1
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	stur	x0, [x29, #-64]                 // 8-byte Folded Spill
	bl	printf
	adrp	x0, .L.str.1
	add	x0, x0, :lo12:.L.str.1
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	stur	x0, [x29, #-56]                 // 8-byte Folded Spill
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	stur	x0, [x29, #-48]                 // 8-byte Folded Spill
	bl	printf
	ldur	x0, [x29, #-64]                 // 8-byte Folded Reload
	bl	printf
	adrp	x0, .L.str.4
	add	x0, x0, :lo12:.L.str.4
	bl	printf
	adrp	x0, .L.str.5
	add	x0, x0, :lo12:.L.str.5
	bl	printf
	adrp	x0, .L.str.6
	add	x0, x0, :lo12:.L.str.6
	bl	printf
	adrp	x0, .L.str.7
	add	x0, x0, :lo12:.L.str.7
	sub	x1, x29, #4
	bl	scanf
	ldur	x0, [x29, #-56]                 // 8-byte Folded Reload
	bl	printf
	ldur	x0, [x29, #-48]                 // 8-byte Folded Reload
	bl	printf
	ldursh	w8, [x29, #-4]
	subs	w8, w8, #0
	b.le	.LBB0_3
	b	.LBB0_2
.LBB0_2:                                //   in Loop: Header=BB0_1 Depth=1
	ldursh	w8, [x29, #-4]
	subs	w8, w8, #3
	b.lt	.LBB0_4
	b	.LBB0_3
.LBB0_3:                                //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	adrp	x0, .L.str.8
	add	x0, x0, :lo12:.L.str.8
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	b	.LBB0_42
.LBB0_4:                                //   in Loop: Header=BB0_1 Depth=1
	ldursh	w8, [x29, #-4]
	subs	w8, w8, #1
	b.ne	.LBB0_23
	b	.LBB0_5
.LBB0_5:                                //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	str	x0, [sp, #56]                   // 8-byte Folded Spill
	bl	printf
	adrp	x0, .L.str.9
	add	x0, x0, :lo12:.L.str.9
	bl	printf
	adrp	x0, .L.str.10
	add	x0, x0, :lo12:.L.str.10
	bl	printf
	adrp	x0, .L.str.11
	add	x0, x0, :lo12:.L.str.11
	bl	printf
	adrp	x0, .L.str.12
	add	x0, x0, :lo12:.L.str.12
	bl	printf
	adrp	x0, .L.str.13
	add	x0, x0, :lo12:.L.str.13
	bl	printf
	adrp	x0, .L.str.14
	add	x0, x0, :lo12:.L.str.14
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	str	x0, [sp, #64]                   // 8-byte Folded Spill
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	str	x0, [sp, #72]                   // 8-byte Folded Spill
	bl	printf
	ldr	x0, [sp, #56]                   // 8-byte Folded Reload
	bl	printf
	adrp	x0, .L.str.15
	add	x0, x0, :lo12:.L.str.15
	bl	printf
	adrp	x0, .L.str.16
	add	x0, x0, :lo12:.L.str.16
	sub	x1, x29, #24
	bl	scanf
	ldr	x0, [sp, #64]                   // 8-byte Folded Reload
	bl	printf
	ldr	x0, [sp, #72]                   // 8-byte Folded Reload
	bl	printf
	ldr	x0, [sp, #56]                   // 8-byte Folded Reload
	bl	printf
	adrp	x0, .L.str.17
	add	x0, x0, :lo12:.L.str.17
	bl	printf
	adrp	x0, .L.str.7
	add	x0, x0, :lo12:.L.str.7
	sub	x1, x29, #34
	bl	scanf
	ldr	x0, [sp, #64]                   // 8-byte Folded Reload
	bl	printf
	ldr	x0, [sp, #72]                   // 8-byte Folded Reload
	bl	printf
	ldursh	w8, [x29, #-34]
	subs	w8, w8, #1
	b.lt	.LBB0_21
	b	.LBB0_6
.LBB0_6:                                //   in Loop: Header=BB0_1 Depth=1
	ldursh	w8, [x29, #-34]
	subs	w8, w8, #4
	b.gt	.LBB0_21
	b	.LBB0_7
.LBB0_7:                                //   in Loop: Header=BB0_1 Depth=1
	ldursh	w8, [x29, #-34]
	str	w8, [sp, #52]                   // 4-byte Folded Spill
	subs	w8, w8, #1
	b.eq	.LBB0_11
	b	.LBB0_8
.LBB0_8:                                //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #52]                   // 4-byte Folded Reload
	subs	w8, w8, #2
	b.eq	.LBB0_14
	b	.LBB0_9
.LBB0_9:                                //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #52]                   // 4-byte Folded Reload
	subs	w8, w8, #3
	b.eq	.LBB0_17
	b	.LBB0_10
.LBB0_10:                               //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #52]                   // 4-byte Folded Reload
	subs	w8, w8, #4
	b.eq	.LBB0_18
	b	.LBB0_19
.LBB0_11:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	fcmp	d0, #0.0
	b.pl	.LBB0_13
	b	.LBB0_12
.LBB0_12:
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	adrp	x0, .L.str.18
	add	x0, x0, :lo12:.L.str.18
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	ldurh	w8, [x29, #-34]
	sturh	w8, [x29, #-2]
	b	.LBB0_45
.LBB0_13:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	fsqrt	d0, d0
	stur	d0, [x29, #-16]
	b	.LBB0_20
.LBB0_14:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	fcmp	d0, #0.0
	b.pl	.LBB0_16
	b	.LBB0_15
.LBB0_15:
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	adrp	x0, .L.str.18
	add	x0, x0, :lo12:.L.str.18
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	ldurh	w8, [x29, #-34]
	sturh	w8, [x29, #-2]
	b	.LBB0_45
.LBB0_16:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	bl	cbrt
	stur	d0, [x29, #-16]
	b	.LBB0_20
.LBB0_17:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	bl	sqre
	stur	d0, [x29, #-16]
	b	.LBB0_20
.LBB0_18:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	bl	cube
	stur	d0, [x29, #-16]
	b	.LBB0_20
.LBB0_19:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	adrp	x0, .L.str.8
	add	x0, x0, :lo12:.L.str.8
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	b	.LBB0_20
.LBB0_20:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	ldur	d0, [x29, #-16]
	adrp	x0, .L.str.19
	add	x0, x0, :lo12:.L.str.19
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	b	.LBB0_22
.LBB0_21:
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	adrp	x0, .L.str.20
	add	x0, x0, :lo12:.L.str.20
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	ldurh	w8, [x29, #-34]
	sturh	w8, [x29, #-2]
	b	.LBB0_45
.LBB0_22:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_41
.LBB0_23:                               //   in Loop: Header=BB0_1 Depth=1
	ldursh	w8, [x29, #-4]
	subs	w8, w8, #2
	b.ne	.LBB0_40
	b	.LBB0_24
.LBB0_24:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	str	x0, [sp, #24]                   // 8-byte Folded Spill
	bl	printf
	adrp	x0, .L.str.21
	add	x0, x0, :lo12:.L.str.21
	bl	printf
	adrp	x0, .L.str.10
	add	x0, x0, :lo12:.L.str.10
	bl	printf
	adrp	x0, .L.str.22
	add	x0, x0, :lo12:.L.str.22
	bl	printf
	adrp	x0, .L.str.23
	add	x0, x0, :lo12:.L.str.23
	bl	printf
	adrp	x0, .L.str.24
	add	x0, x0, :lo12:.L.str.24
	bl	printf
	adrp	x0, .L.str.25
	add	x0, x0, :lo12:.L.str.25
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	str	x0, [sp, #32]                   // 8-byte Folded Spill
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	str	x0, [sp, #40]                   // 8-byte Folded Spill
	bl	printf
	ldr	x0, [sp, #24]                   // 8-byte Folded Reload
	bl	printf
	adrp	x0, .L.str.26
	add	x0, x0, :lo12:.L.str.26
	bl	printf
	adrp	x0, .L.str.16
	add	x0, x0, :lo12:.L.str.16
	str	x0, [sp, #16]                   // 8-byte Folded Spill
	sub	x1, x29, #24
	bl	scanf
	ldr	x0, [sp, #32]                   // 8-byte Folded Reload
	bl	printf
	ldr	x0, [sp, #40]                   // 8-byte Folded Reload
	bl	printf
	ldr	x0, [sp, #24]                   // 8-byte Folded Reload
	bl	printf
	adrp	x0, .L.str.27
	add	x0, x0, :lo12:.L.str.27
	bl	printf
	ldr	x0, [sp, #16]                   // 8-byte Folded Reload
	sub	x1, x29, #32
	bl	scanf
	ldr	x0, [sp, #32]                   // 8-byte Folded Reload
	bl	printf
	ldr	x0, [sp, #40]                   // 8-byte Folded Reload
	bl	printf
	ldr	x0, [sp, #24]                   // 8-byte Folded Reload
	bl	printf
	adrp	x0, .L.str.28
	add	x0, x0, :lo12:.L.str.28
	bl	printf
	adrp	x0, .L.str.7
	add	x0, x0, :lo12:.L.str.7
	sub	x1, x29, #34
	bl	scanf
	ldr	x0, [sp, #32]                   // 8-byte Folded Reload
	bl	printf
	ldr	x0, [sp, #40]                   // 8-byte Folded Reload
	bl	printf
	ldursh	w8, [x29, #-34]
	subs	w8, w8, #1
	b.lt	.LBB0_38
	b	.LBB0_25
.LBB0_25:                               //   in Loop: Header=BB0_1 Depth=1
	ldursh	w8, [x29, #-34]
	subs	w8, w8, #4
	b.gt	.LBB0_38
	b	.LBB0_26
.LBB0_26:                               //   in Loop: Header=BB0_1 Depth=1
	ldursh	w8, [x29, #-34]
	str	w8, [sp, #12]                   // 4-byte Folded Spill
	subs	w8, w8, #1
	b.eq	.LBB0_30
	b	.LBB0_27
.LBB0_27:                               //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #12]                   // 4-byte Folded Reload
	subs	w8, w8, #2
	b.eq	.LBB0_31
	b	.LBB0_28
.LBB0_28:                               //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #12]                   // 4-byte Folded Reload
	subs	w8, w8, #3
	b.eq	.LBB0_32
	b	.LBB0_29
.LBB0_29:                               //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #12]                   // 4-byte Folded Reload
	subs	w8, w8, #4
	b.eq	.LBB0_33
	b	.LBB0_36
.LBB0_30:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	ldur	d1, [x29, #-32]
	bl	add
	stur	d0, [x29, #-16]
	b	.LBB0_37
.LBB0_31:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	ldur	d1, [x29, #-32]
	bl	sub
	stur	d0, [x29, #-16]
	b	.LBB0_37
.LBB0_32:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	ldur	d1, [x29, #-32]
	bl	mul
	stur	d0, [x29, #-16]
	b	.LBB0_37
.LBB0_33:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-32]
	fcmp	d0, #0.0
	b.ne	.LBB0_35
	b	.LBB0_34
.LBB0_34:
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	adrp	x0, .L.str.29
	add	x0, x0, :lo12:.L.str.29
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	ldurh	w8, [x29, #-34]
	sturh	w8, [x29, #-2]
	b	.LBB0_45
.LBB0_35:                               //   in Loop: Header=BB0_1 Depth=1
	ldur	d0, [x29, #-24]
	ldur	d1, [x29, #-32]
	bl	div
	stur	d0, [x29, #-16]
	b	.LBB0_37
.LBB0_36:
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	adrp	x0, .L.str.8
	add	x0, x0, :lo12:.L.str.8
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	ldurh	w8, [x29, #-34]
	sturh	w8, [x29, #-2]
	b	.LBB0_45
.LBB0_37:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	ldur	d0, [x29, #-16]
	adrp	x0, .L.str.19
	add	x0, x0, :lo12:.L.str.19
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	b	.LBB0_39
.LBB0_38:
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	adrp	x0, .L.str.20
	add	x0, x0, :lo12:.L.str.20
	bl	printf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	printf
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	ldurh	w8, [x29, #-34]
	sturh	w8, [x29, #-2]
	b	.LBB0_45
.LBB0_39:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_40
.LBB0_40:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_41
.LBB0_41:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_42
.LBB0_42:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_43
.LBB0_43:                               //   in Loop: Header=BB0_1 Depth=1
	ldursh	w8, [x29, #-4]
	cbnz	w8, .LBB0_1
	b	.LBB0_44
.LBB0_44:
	sturh	wzr, [x29, #-2]
	b	.LBB0_45
.LBB0_45:
	ldurh	w0, [x29, #-2]
	.cfi_def_cfa wsp, 160
	ldp	x29, x30, [sp, #144]            // 16-byte Folded Reload
	add	sp, sp, #160
	.cfi_def_cfa_offset 0
	.cfi_restore w30
	.cfi_restore w29
	ret
.Lfunc_end0:
	.size	simpleC, .Lfunc_end0-simpleC
	.cfi_endproc
                                        // -- End function
	.type	.L.str,@object                  // @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"\t\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\227\n"
	.size	.L.str, 165

	.type	.L.str.1,@object                // @.str.1
.L.str.1:
	.asciz	"\t\342\225\221         Welcome To Cinari Lab's Calculator         \342\225\221\n"
	.size	.L.str.1, 61

	.type	.L.str.2,@object                // @.str.2
.L.str.2:
	.asciz	"\t\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\n"
	.size	.L.str.2, 165

	.type	.L.str.3,@object                // @.str.3
.L.str.3:
	.asciz	"\n"
	.size	.L.str.3, 2

	.type	.L.str.4,@object                // @.str.4
.L.str.4:
	.asciz	"\t\342\225\221Use 1 for using a NO. for square/roots, cubes/square\342\225\221\n"
	.size	.L.str.4, 61

	.type	.L.str.5,@object                // @.str.5
.L.str.5:
	.asciz	"\t\342\225\221Use 2 for using two NOs for Basic operations        \342\225\221\n"
	.size	.L.str.5, 61

	.type	.L.str.6,@object                // @.str.6
.L.str.6:
	.asciz	"\t\342\225\221Enter number>> "
	.size	.L.str.6, 20

	.type	.L.str.7,@object                // @.str.7
.L.str.7:
	.asciz	"%hd"
	.size	.L.str.7, 4

	.type	.L.str.8,@object                // @.str.8
.L.str.8:
	.asciz	"\t\342\225\221                   Invalid Input                    \342\225\221\n"
	.size	.L.str.8, 61

	.type	.L.str.9,@object                // @.str.9
.L.str.9:
	.asciz	"\t\342\225\221Step 1: Enter NO. For Calculation                   \342\225\221\n"
	.size	.L.str.9, 61

	.type	.L.str.10,@object               // @.str.10
.L.str.10:
	.asciz	"\t\342\225\221Step 2: Enter NO. in the options for calculations   \342\225\221\n"
	.size	.L.str.10, 61

	.type	.L.str.11,@object               // @.str.11
.L.str.11:
	.asciz	"\t\342\225\221                   (1) Square Root                  \342\225\221\n"
	.size	.L.str.11, 61

	.type	.L.str.12,@object               // @.str.12
.L.str.12:
	.asciz	"\t\342\225\221                   (2) Cubic Root                   \342\225\221\n"
	.size	.L.str.12, 61

	.type	.L.str.13,@object               // @.str.13
.L.str.13:
	.asciz	"\t\342\225\221                   (3) Square                       \342\225\221\n"
	.size	.L.str.13, 61

	.type	.L.str.14,@object               // @.str.14
.L.str.14:
	.asciz	"\t\342\225\221                   (4) Cubic                        \342\225\221\n"
	.size	.L.str.14, 61

	.type	.L.str.15,@object               // @.str.15
.L.str.15:
	.asciz	"\t\342\225\221Enter Number for Calculation>> "
	.size	.L.str.15, 36

	.type	.L.str.16,@object               // @.str.16
.L.str.16:
	.asciz	"%lf"
	.size	.L.str.16, 4

	.type	.L.str.17,@object               // @.str.17
.L.str.17:
	.asciz	"\t\342\225\221Enter Number from the options above>> "
	.size	.L.str.17, 43

	.type	.L.str.18,@object               // @.str.18
.L.str.18:
	.asciz	"\t\342\225\221                Invalid Calculation                 \342\225\221\n"
	.size	.L.str.18, 61

	.type	.L.str.19,@object               // @.str.19
.L.str.19:
	.asciz	"\t\342\225\221Ans: %.2f\n"
	.size	.L.str.19, 15

	.type	.L.str.20,@object               // @.str.20
.L.str.20:
	.asciz	"\t\342\225\221                 PROGRAM TERMINATED                 \342\225\221\n"
	.size	.L.str.20, 61

	.type	.L.str.21,@object               // @.str.21
.L.str.21:
	.asciz	"\t\342\225\221Step 1: Enter Two NOs for Calculations              \342\225\221\n"
	.size	.L.str.21, 61

	.type	.L.str.22,@object               // @.str.22
.L.str.22:
	.asciz	"\t\342\225\221                   (1) Addition                     \342\225\221\n"
	.size	.L.str.22, 61

	.type	.L.str.23,@object               // @.str.23
.L.str.23:
	.asciz	"\t\342\225\221                   (2) Subtraction                  \342\225\221\n"
	.size	.L.str.23, 61

	.type	.L.str.24,@object               // @.str.24
.L.str.24:
	.asciz	"\t\342\225\221                   (3) Multiplication               \342\225\221\n"
	.size	.L.str.24, 61

	.type	.L.str.25,@object               // @.str.25
.L.str.25:
	.asciz	"\t\342\225\221                   (4) Division                     \342\225\221\n"
	.size	.L.str.25, 61

	.type	.L.str.26,@object               // @.str.26
.L.str.26:
	.asciz	"\t\342\225\221Enter First Number>> "
	.size	.L.str.26, 26

	.type	.L.str.27,@object               // @.str.27
.L.str.27:
	.asciz	"\t\342\225\221Enter Second Number>> "
	.size	.L.str.27, 27

	.type	.L.str.28,@object               // @.str.28
.L.str.28:
	.asciz	"\t\342\225\221Enter Number for Operation>> "
	.size	.L.str.28, 34

	.type	.L.str.29,@object               // @.str.29
.L.str.29:
	.asciz	"\t\342\225\221                 Mathematical Error                 \342\225\221\n"
	.size	.L.str.29, 61

	.ident	"clang version 21.1.8"
	.section	".note.GNU-stack","",@progbits
