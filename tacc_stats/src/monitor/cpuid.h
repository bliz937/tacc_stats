/* Currently only used for intel chips after Nehalem - x2APIC chips */
/* nhm, wtm, snb, ivb, hsw are classified correctly */
#ifndef _CPUID_H_
#define _CPUID_H_

typedef enum { 
  AMD_10H,
  NEHALEM, WESTMERE, 
  SANDYBRIDGE, IVYBRIDGE, 
  HASWELL, BROADWELL,
  SKYLAKE
} processor_t;
  
// Return 1 for true and 0 for false
int signature(processor_t p, char *cpu, int *nr_events);
int topology(char *cpu, int *pkg, int *core, int *smt, int *nr_core);

#endif
