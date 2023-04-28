// Copyright 2023 Cartesi Pte. Ltd.
//
// SPDX-License-Identifier: Apache-2.0
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use
// this file except in compliance with the License. You may obtain a copy of the
// License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#ifndef __CONFIG_H_
#define __CONFIG_H_

// Byte representation of the ONLY ERC-20 contract address accepted by the DApp,
// 0xc5a5c42992decbae36851359345fe25997F5c42d
const std::array<uint8_t,CARTESI_ROLLUP_ADDRESS_SIZE>
ERC20_CONTRACT_ADDRESS = {
    197, 165, 196, 41, 146, 222, 203, 174, 54, 133,
    19, 89, 52, 95, 226, 89, 151, 245, 196, 45
};

// Byte representation of the withdrawal address (Bob's),
// 0x70997970C51812dc3A010C7d01b50e0d17dc79C8, which
// corresponds to account index 1
const std::array<uint8_t,CARTESI_ROLLUP_ADDRESS_SIZE>
WITHDRAWAL_ADDRESS = {
    112, 153, 121, 112, 197, 24, 18, 220, 58, 1,
    12, 125, 1, 181, 14, 13, 23, 220, 121, 200
};
#endif