// Copyright (c) 2021 Shuangquan Li. All Rights Reserved.
//
// Licensed under the MIT License (the "License"); you may not use this file
// except in compliance with the License. You may obtain a copy of the License
// at
//
//   http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.
// =============================================================================

#include "main.h"

myostream::ostream  mycout(std::cout.rdbuf());
myostream::ostream  mycerr(std::cerr.rdbuf());
myostream::wostream mywcout(std::wcout.rdbuf());
myostream::wostream mywcerr(std::wcerr.rdbuf());

int main(int argc, char** argv) {
  mycout << "mycout:  testing myostream!\n";
  mycerr << "mycerr:  testing myostream!\n";
  mywcout << "mywcout: testing myostream!\n";
  mywcerr << "mywcerr: testing myostream!\n";
  std::cout << std::endl;

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}