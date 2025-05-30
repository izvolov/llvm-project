// REQUIRES: amdgpu-registered-target
// RUN: %clang_cc1 -triple amdgcn-unknown-unknown -emit-llvm -o - %s | FileCheck %s
// CHECK: define{{.*}} amdgpu_kernel void @test_call_kernel(ptr addrspace(1) noundef writeonly align 4 captures(none) initializes((0, 4)) %out)
// CHECK: store i32 4, ptr addrspace(1) %out, align 4

kernel void test_kernel(global int *out)
{
  out[0] = 4;
}

__kernel void test_call_kernel(__global int *out)
{
  test_kernel(out);
}
