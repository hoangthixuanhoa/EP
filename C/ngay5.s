	.file	".\\ngay5.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "x + y = %d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	movl	$1, -4(%rbp)
	movl	$2, -8(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	sum
	movl	%eax, -12(%rbp)
	movq	.refptr.sum(%rip), %rax
	movq	%rax, -24(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movq	-24(%rbp), %r8
	movl	%eax, %ecx
	call	*%r8
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 12.4.0"
	.def	sum;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr.sum, "dr"
	.globl	.refptr.sum
	.linkonce	discard
.refptr.sum:
	.quad	sum
