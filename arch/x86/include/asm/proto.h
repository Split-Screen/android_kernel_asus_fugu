#ifndef _ASM_X86_PROTO_H
#define _ASM_X86_PROTO_H

#include <asm/ldt.h>

/* misc architecture specific prototypes */

void system_call(void);
void syscall_init(void);

void ia32_syscall(void);
void ia32_cstar_target(void);
void ia32_sysenter_target(void);

void syscall32_cpu_init(void);

void x86_configure_nx(void);
void x86_report_nx(void);

extern int reboot_force;
enum {
	REBOOT_FORCE_COLD_RESET = 1,
	REBOOT_FORCE_COLD_BOOT,
	REBOOT_FORCE_OFF,
	REBOOT_FORCE_ON
};

long do_arch_prctl(struct task_struct *task, int code, unsigned long addr);

#endif /* _ASM_X86_PROTO_H */
