/* Copyright 2017 The OpenXLA Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef XLA_TEST_H_
#define XLA_TEST_H_

// This header includes gmock.h and enables the use of gmock matchers in tests
// in third_party/tensorflow/compiler/xla.
//
// Test including this header can use the macros EXPECT_THAT(...) and
// ASSERT_THAT(...) in combination with gmock matchers.
// Example:
//  std::vector<int> vec = Foo();
//  EXPECT_THAT(vec, ::testing::ElementsAre(1,2,3));
//
// For more details on gmock matchers see:
// https://github.com/google/googletest/blob/master/googlemock/docs/CheatSheet.md#matchers
//
// The advantages of using gmock matchers instead of self defined matchers are
// better error messages, more maintainable tests and more test coverage.
//
// Note that while the use of gmock matchers is allowed in the xla project, the
// use of mocks is disallowed in the whole tensorflow project!

// The current header will be deprecated in favour of the following.
#include "xla/hlo/testlib/test.h"

#endif  // XLA_TEST_H_
