/**
 * MIT License
 *
 * Copyright (c) 2018 Maksim Piskunov

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef IDTypes_h
#define IDTypes_h

#include <cstdint>

namespace SetReplace {
    /** @brief Identifiers for atoms, which are the elements of expressions, i.e., vertices in the graph.
     * @details Positive IDs refer to specific atoms, negative IDs refer to patterns (as, for instance, can be used in the rules).
     */
    using Atom = int64_t;

    /** @brief Identifiers for rules, which stay the same for the entire evolution of the system.
     */
    using RuleID = int;

    /** @brief Identifiers for expressions, which are the elements of the set, and contain ordered sequences of atoms, i.e., (hyper)edges in the graph.
     */
    using ExpressionID = int64_t;

    /** @brief Identifiers for substitution events, later events have larger IDs.
     */
    using EventID = int64_t;
    constexpr EventID initialConditionEvent = 0;
    constexpr EventID finalStateEvent = -1;

    /** @brief Layer this expression belongs to in the causal network.
     * @details Specifically, if the largest generation of expressions in the event inputs is n, the generation of its outputs will be n + 1.
     */
    using Generation = int64_t;
    constexpr Generation initialGeneration = 0;
}

#endif /* IDTypes_h */
