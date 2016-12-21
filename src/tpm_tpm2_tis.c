/********************************************************************************/
/*                                                                              */
/*                              TPM TIS I/O					*/
/*                           Written by Stefan Berger                           */
/*                     IBM Thomas J. Watson Research Center                     */
/*                                                                              */
/* (c) Copyright IBM Corporation 2015.						*/
/*										*/
/* All rights reserved.								*/
/* 										*/
/* Redistribution and use in source and binary forms, with or without		*/
/* modification, are permitted provided that the following conditions are	*/
/* met:										*/
/* 										*/
/* Redistributions of source code must retain the above copyright notice,	*/
/* this list of conditions and the following disclaimer.			*/
/* 										*/
/* Redistributions in binary form must reproduce the above copyright		*/
/* notice, this list of conditions and the following disclaimer in the		*/
/* documentation and/or other materials provided with the distribution.		*/
/* 										*/
/* Neither the names of the IBM Corporation nor the names of its		*/
/* contributors may be used to endorse or promote products derived from		*/
/* this software without specific prior written permission.			*/
/* 										*/
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS		*/
/* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT		*/
/* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR	*/
/* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT		*/
/* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,	*/
/* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT		*/
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,	*/
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY	*/
/* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT		*/
/* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE	*/
/* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.		*/
/********************************************************************************/

#include <config.h>

#include <stdint.h>

/* tpm2/TPM_Types.h gives type definition clashes with TPM 1.2 headers */
typedef uint32_t UINT32;

#include "tpm_library_intern.h"
#include "tpm_error.h"
#include "tpm2/TpmBuildSwitches.h"
#include "tpm2/_TPM_Hash_Start_fp.h"
#include "tpm2/_TPM_Hash_Data_fp.h"
#include "tpm2/_TPM_Hash_End_fp.h"

TPM_RESULT TPM2_IO_TpmEstablished_Get(TPM_BOOL *tpmEstablished)
{
    // FIXME: Missing
    *tpmEstablished = FALSE;

    return TPM_SUCCESS;
}

TPM_RESULT TPM2_IO_TpmEstablished_Reset(void)
{
    // FIXME: Missing
    return TPM_SUCCESS;
}

TPM_RESULT TPM2_IO_Hash_Start(void)
{
    _TPM_Hash_Start();

    return TPM_SUCCESS;
}

TPM_RESULT TPM2_IO_Hash_Data(const unsigned char *data,
                             uint32_t data_length)
{
    _TPM_Hash_Data(data_length, (unsigned char *)data);

    return TPM_SUCCESS;
}

TPM_RESULT TPM2_IO_Hash_End(void)
{
    _TPM_Hash_End();

    return TPM_SUCCESS;
}
