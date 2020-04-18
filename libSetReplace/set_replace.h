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

// Library definition for Wolfram LibraryLink

#ifndef SetReplace_hpp
#define SetReplace_hpp

#include "WolframLibrary.h"

EXTERN_C DLLEXPORT mint WolframLibrary_getVersion();

EXTERN_C DLLEXPORT int WolframLibrary_initialize(WolframLibraryData libData);

EXTERN_C DLLEXPORT void WolframLibrary_uninitialize(WolframLibraryData libData);

/** @brief Creates a new set object.
 * @return Pointer to the newly created set in memory.
 * @note Memory is not managed, the set needs to be destroyed manually.
*/
EXTERN_C DLLEXPORT int setCreate(WolframLibraryData libData, mint argc, MArgument* argv, MArgument result);

/** @brief Destroys a set given a pointer.
 */
EXTERN_C DLLEXPORT int setDelete(WolframLibraryData libData, mint argc, MArgument* argv, MArgument result);

/** @brief Performs a specified number of replacements, but does not return anything.
 */
EXTERN_C DLLEXPORT int setReplace(WolframLibraryData libData, mint argc, MArgument* argv, MArgument result);

/** @brief Returns a list of expressions for a specified set pointer.
 */
EXTERN_C DLLEXPORT int setExpressions(WolframLibraryData libData, mint argc, MArgument* argv, MArgument result);

/** @brief Returns the largest generation that has both been reached, and has no matches that would produce expressions with that or lower generation.
 * @details Is abortable, in which case returns LIBRARY_FUNCTION_ERROR.
 */
EXTERN_C DLLEXPORT int maxCompleteGeneration(WolframLibraryData libData, mint argc, MArgument* argv, MArgument result);

/** @brief Returns a number corresponding to the termination reason.
 */
EXTERN_C DLLEXPORT int terminationReason(WolframLibraryData libData, mint argc, MArgument* argv, MArgument result);

/** @brief Returns the list of indices of rules used for each event.
 */
EXTERN_C DLLEXPORT int eventRuleIDs(WolframLibraryData libData, mint argc, MArgument* argv, MArgument result);

#endif /* SetReplace_hpp */
