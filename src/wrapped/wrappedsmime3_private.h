#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

//GO(CERT_ConvertAndDecodeCertificate, 
//GO(CERT_DecodeCertFromPackage, 
//GO(CERT_DecodeCertPackage, 
//GO(NSS_CMSContentInfo_GetBulkKey, 
//GO(NSS_CMSContentInfo_GetBulkKeySize, 
//GO(NSS_CMSContentInfo_GetContent, 
//GO(NSS_CMSContentInfo_GetContentEncAlgTag, 
//GO(NSS_CMSContentInfo_GetContentTypeTag, 
//GO(NSS_CMSContentInfo_SetBulkKey, 
//GO(NSS_CMSContentInfo_SetContent, 
//GO(NSS_CMSContentInfo_SetContent_Data, 
//GO(NSS_CMSContentInfo_SetContent_DigestedData, 
//GO(NSS_CMSContentInfo_SetContentEncAlg, 
//GO(NSS_CMSContentInfo_SetContent_EncryptedData, 
//GO(NSS_CMSContentInfo_SetContent_EnvelopedData, 
//GO(NSS_CMSContentInfo_SetContent_SignedData, 
//GO(NSS_CMSContentInfo_SetDontStream, 
//GO(NSS_CMSDecoder_Cancel, 
//GO(NSS_CMSDecoder_Finish, 
//GO(NSS_CMSDecoder_Start, 
//GO(NSS_CMSDecoder_Update, 
//GO(NSS_CMSDEREncode, 
//GO(NSS_CMSDigestContext_Cancel, 
//GO(NSS_CMSDigestContext_FinishMultiple, 
//GO(NSS_CMSDigestContext_FinishSingle, 
//GO(NSS_CMSDigestContext_StartMultiple, 
//GO(NSS_CMSDigestContext_StartSingle, 
//GO(NSS_CMSDigestContext_Update, 
//GO(NSS_CMSDigestedData_Create, 
//GO(NSS_CMSDigestedData_Destroy, 
//GO(NSS_CMSDigestedData_GetContentInfo, 
//GO(NSS_CMSEncoder_Cancel, 
//GO(NSS_CMSEncoder_Finish, 
//GO(NSS_CMSEncoder_Start, 
//GO(NSS_CMSEncoder_Update, 
//GO(NSS_CMSEncryptedData_Create, 
//GO(NSS_CMSEncryptedData_Destroy, 
//GO(NSS_CMSEncryptedData_GetContentInfo, 
//GO(NSS_CMSEnvelopedData_AddRecipient, 
//GO(NSS_CMSEnvelopedData_Create, 
//GO(NSS_CMSEnvelopedData_Destroy, 
//GO(NSS_CMSEnvelopedData_GetContentInfo, 
//DATA(NSSCMSGenericWrapperDataTemplate, 
//GO(NSS_CMSMessage_ContentLevel, 
//GO(NSS_CMSMessage_ContentLevelCount, 
//GO(NSS_CMSMessage_Copy, 
//GO(NSS_CMSMessage_Create, 
//GO(NSS_CMSMessage_CreateFromDER, 
//GO(NSS_CMSMessage_Destroy, 
//GO(NSS_CMSMessage_GetContent, 
//GO(NSS_CMSMessage_GetContentInfo, 
//GO(NSS_CMSMessage_IsEncrypted, 
//GO(NSS_CMSMessage_IsSigned, 
//GO(NSS_CMSRecipientInfo_Create, 
//GO(NSS_CMSRecipientInfo_CreateFromDER, 
//GO(NSS_CMSRecipientInfo_CreateNew, 
//GO(NSS_CMSRecipientInfo_CreateWithSubjKeyID, 
//GO(NSS_CMSRecipientInfo_CreateWithSubjKeyIDFromCert, 
//GO(NSS_CMSRecipientInfo_Destroy, 
//GO(NSS_CMSRecipientInfo_Encode, 
//GO(NSS_CMSRecipientInfo_GetCertAndKey, 
//GO(NSS_CMSRecipientInfo_UnwrapBulkKey, 
//GO(NSS_CMSRecipientInfo_WrapBulkKey, 
//GO(NSS_CMSSignedData_AddCertChain, 
//GO(NSS_CMSSignedData_AddCertificate, 
//GO(NSS_CMSSignedData_AddCertList, 
//GO(NSS_CMSSignedData_AddDigest, 
//GO(NSS_CMSSignedData_AddSignerInfo, 
//GO(NSS_CMSSignedData_Create, 
//GO(NSS_CMSSignedData_CreateCertsOnly, 
//GO(NSS_CMSSignedData_Destroy, 
//GO(NSS_CMSSignedData_GetContentInfo, 
//GO(NSS_CMSSignedData_GetDigestAlgs, 
//GO(NSS_CMSSignedData_GetSignerInfo, 
//GO(NSS_CMSSignedData_HasDigests, 
//GO(NSS_CMSSignedData_ImportCerts, 
//GO(NSS_CMSSignedData_SetDigests, 
//GO(NSS_CMSSignedData_SetDigestValue, 
//GO(NSS_CMSSignedData_SignerInfoCount, 
//GO(NSS_CMSSignedData_VerifyCertsOnly, 
//GO(NSS_CMSSignedData_VerifySignerInfo, 
//GO(NSS_CMSSignerInfo_AddMSSMIMEEncKeyPrefs, 
//GO(NSS_CMSSignerInfo_AddSigningTime, 
//GO(NSS_CMSSignerInfo_AddSMIMECaps, 
//GO(NSS_CMSSignerInfo_AddSMIMEEncKeyPrefs, 
//GO(NSS_CMSSignerInfo_Create, 
//GO(NSS_CMSSignerInfo_CreateWithSubjKeyID, 
//GO(NSS_CMSSignerInfo_Destroy, 
//GO(NSS_CMSSignerInfo_GetCertList, 
//GO(NSS_CMSSignerInfo_GetSignerCommonName, 
//GO(NSS_CMSSignerInfo_GetSignerEmailAddress, 
//GO(NSS_CMSSignerInfo_GetSigningCertificate, 
//GO(NSS_CMSSignerInfo_GetSigningTime, 
//GO(NSS_CMSSignerInfo_GetVerificationStatus, 
//GO(NSS_CMSSignerInfo_GetVersion, 
//GO(NSS_CMSSignerInfo_IncludeCerts, 
//GO(NSS_CMSSignerInfo_Verify, 
//GO(NSS_CMSType_RegisterContentType, 
//GO(NSS_CMSUtil_VerificationStatusToString, 
//GO(NSS_Get_NSSCMSGenericWrapperDataTemplate, 
//GO(NSS_Get_NSS_PointerToCMSGenericWrapperDataTemplate, 
//DATA(NSS_PointerToCMSGenericWrapperDataTemplate, 
//GO(NSSSMIME_GetVersion, 
//GO(NSS_SMIMESignerInfo_SaveSMIMEProfile, 
//GO(NSS_SMIMEUtil_CreateMSSMIMEEncKeyPrefs, 
//GO(NSS_SMIMEUtil_FindBulkAlgForRecipients, 
//GO(NSSSMIME_VersionCheck, 
//GO(SECMIME_DecryptionAllowed, 
//GO(SEC_PKCS12AddCertAndKey, 
//GO(SEC_PKCS12AddCertOrChainAndKey, 
//GO(SEC_PKCS12AddPasswordIntegrity, 
//GO(SEC_PKCS12CreateExportContext, 
//GO(SEC_PKCS12CreatePasswordPrivSafe, 
//GO(SEC_PKCS12CreateUnencryptedSafe, 
//GO(SEC_PKCS12DecoderFinish, 
//GO(SEC_PKCS12DecoderGetCerts, 
//GO(SEC_PKCS12DecoderImportBags, 
//GO(SEC_PKCS12DecoderIterateInit, 
//GO(SEC_PKCS12DecoderIterateNext, 
//GO(SEC_PKCS12DecoderRenameCertNicknames, 
//GO(SEC_PKCS12DecoderSetTargetTokenCAs, 
//GO(SEC_PKCS12DecoderStart, 
//GO(SEC_PKCS12DecoderUpdate, 
//GO(SEC_PKCS12DecoderValidateBags, 
//GO(SEC_PKCS12DecoderVerify, 
//GO(SEC_PKCS12DecryptionAllowed, 
//GO(SEC_PKCS12DestroyExportContext, 
//GO(SEC_PKCS12EnableCipher, 
//GO(SEC_PKCS12Encode, 
//GO(SEC_PKCS12IsEncryptionAllowed, 
//GO(SEC_PKCS12SetPreferredCipher, 
//GO(SEC_PKCS7AddCertificate, 
//GO(SEC_PKCS7AddRecipient, 
//GO(SEC_PKCS7AddSigningTime, 
//GO(SEC_PKCS7ContainsCertsOrCrls, 
//GO(SEC_PKCS7ContentIsEncrypted, 
//GO(SEC_PKCS7ContentIsSigned, 
//GO(SEC_PKCS7ContentType, 
//GO(SEC_PKCS7CopyContentInfo, 
//GO(SEC_PKCS7CreateCertsOnly, 
//GO(SEC_PKCS7CreateData, 
//GO(SEC_PKCS7CreateEncryptedData, 
//GO(SEC_PKCS7CreateEnvelopedData, 
//GO(SEC_PKCS7CreateSignedData, 
//GO(SEC_PKCS7DecodeItem, 
//GO(SEC_PKCS7DecoderAbort, 
//GO(SEC_PKCS7DecoderFinish, 
//GO(SEC_PKCS7DecoderStart, 
//GO(SEC_PKCS7DecoderUpdate, 
//GO(SEC_PKCS7DecryptContents, 
//GO(SEC_PKCS7DestroyContentInfo, 
//GO(SEC_PKCS7Encode, 
//GO(SEC_PKCS7EncodeItem, 
//GO(SEC_PKCS7EncoderAbort, 
//GO(SEC_PKCS7EncoderFinish, 
//GO(SEC_PKCS7EncoderStart, 
//GO(SEC_PKCS7EncoderUpdate, 
//GO(SEC_PKCS7GetCertificateList, 
//GO(SEC_PKCS7GetContent, 
//GO(SEC_PKCS7GetEncryptionAlgorithm, 
//GO(SEC_PKCS7GetSignerCommonName, 
//GO(SEC_PKCS7GetSignerEmailAddress, 
//GO(SEC_PKCS7GetSigningTime, 
//GO(SEC_PKCS7IncludeCertChain, 
//GO(SEC_PKCS7IsContentEmpty, 
//GO(SEC_PKCS7SetContent, 
//GO(SEC_PKCS7VerifyDetachedSignature, 
//GO(SEC_PKCS7VerifyDetachedSignatureAtTime, 
//GO(SEC_PKCS7VerifySignature, 
