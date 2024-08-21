///
/// \file PhenixSettingsAPI.h
/// \brief This header file defines SettingTag enumeration
///

#ifndef PHENIX_SETTINGS_API_H
#define PHENIX_SETTINGS_API_H

///
/// \brief SettingTag definition
///
/// Setting Tags are used with functions ::fnxReadIntSetting, ::fnxWriteIntSetting, ::fnxReadBufferSetting, ::fnxWriteBufferSetting
/// to read or write a setting.
///

typedef enum fnxSettingTag
{
    // FNX_CODE39_GROUP                   =  0x0100,
    FNX_CODE39_ENABLE                     =  0x0101,    ///< Enable Code39 decoding.\n Code 39 is a 1D code mainly used in industrial applications.\n https://en.wikipedia.org/wiki/Code_39\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODE32_ENABLE                     =  0x0102,    ///< Enable Code32 decoding.\n Also called Italian Pharmacode, this symbology is a 1D code used in pharmaceutical applications.\n https://github.com/bwipp/postscriptbarcode/wiki/Italian-Pharmacode\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODE39_NANO_SCAN                  =  0x0110,    ///< Enable Nano-scan for Code39.\n See documentation of \ref nanoscan "Nano-Scan algorithm" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODE39_TRANSMIT_START_STOP        =  0x0120,    ///< Enable transmission of Start and Stop codewords for Code39.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODE39_CHECK                      =  0x0130,    ///< Enable validation of checksum for Code39.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODE39_TRANSMIT_CHECK             =  0x0131,    ///< Enable transmission of checksum for Code39.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODE39_FULL_ASCII                 =  0x0140,    ///< Enable full ASCII mode for Code39.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_EAN_UPC_GROUP                  =  0x0200,
    FNX_EAN13_ENABLE                      =  0x0201,    ///< Enable EAN13 decoding.\n EAN13 is a 1D code used in retail applications. It is an extension of UPCA and contains 13 digits.\n https://en.wikipedia.org/wiki/International_Article_Number\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_EAN8_ENABLE                       =  0x0202,    ///< Enable EAN8 decoding.\n EAN8 is a 1D code designed to be used on small packages where an EAN13 barcode would be too large.\n https://en.wikipedia.org/wiki/EAN-8\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_UPCA_ENABLE                       =  0x0203,    ///< Enable UPCA decoding.\n UPCA is a 1D code used in retail applications. It consists of 12 digits that are uniquely assigned to each trade item.\n https://en.wikipedia.org/wiki/Universal_Product_Code\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_UPCE_ENABLE                       =  0x0204,    ///< Enable UPCE decoding.\n UPCE is the compressed version of UPCA. It suppresses zeroes to save space.\n https://en.wikipedia.org/wiki/Universal_Product_Code\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_EAN_UPC_NANO_SCAN                 =  0x0210,    ///< Enable Nano-scan for EAN13, EAN8, UPCA and UPCE.\n See documentation of \ref nanoscan "Nano-Scan algorithm" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_EAN13_ADDON_REQUIRED              =  0x0221,    ///< Indicate if decoding the EAN13 addon is required.\n Valid input values are: <ul><li>0 : autodiscriminate (default)</li><li>1 : required</li></ul>
    FNX_UPCA_ADDON_REQUIRED               =  0x0223,    ///< Indicate if decoding the UPCA addon is required.\n Valid input values are: <ul><li>0 : autodiscriminate (default)</li><li>1 : required</li></ul>
    FNX_UPCE_ADDON_REQUIRED               =  0x0224,    ///< Indicate if decoding the UPCE addon is required.\n Valid input values are: <ul><li>0 : autodiscriminate (default)</li><li>1 : required</li></ul>
    FNX_EAN13_ADDON_TYPE                  =  0x0231,    ///< Select the type of addon for EAN13.\n Valid input values are: <ul><li>0 : none (default)</li><li>1 : addon 2</li><li>2 : addon 5</li><li>3 : addon 2 or addon 5</li></ul>
    FNX_UPCA_ADDON_TYPE                   =  0x0233,    ///< Select the type of addon for UPCA.\n Valid input values are: <ul><li>0 : none (default)</li><li>1 : addon 2</li><li>2 : addon 5</li><li>3 : addon 2 or addon 5</li></ul>
    FNX_UPCE_ADDON_TYPE                   =  0x0234,    ///< Select the type of addon for UPCE.\n Valid input values are: <ul><li>0 : none (default)</li><li>1 : addon 2</li><li>2 : addon 5</li><li>3 : addon 2 or addon 5</li></ul>

    // FNX_MSI_GROUP                      =  0x0300,
    FNX_MSI_ENABLE                        =  0x0301,    ///< Enable MSI decoding.\n MSI (Modified Plessey) is a 1D code mainly used in retail applications.\n https://en.wikipedia.org/wiki/MSI_Barcode\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_MSI_NANO_SCAN                     =  0x0310,    ///< Enable Nano-scan for MSI.\n See documentation of \ref nanoscan "Nano-Scan algorithm" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_MSI_CHECK                         =  0x0330,    ///< Select MSI checksum.\n Valid input values are: <ul><li>1 : check modulo 10 (default)</li><li>2 : check modulo 10/10</li><li>3 : check modulo 11</li><li>4 : check modulo 11/10</li></ul>
    FNX_MSI_TRANSMIT_CHECK                =  0x0331,    ///< Enable transmission of checksum for MSI.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_ITF_GROUP                      =  0x0600,
    FNX_ITF_ENABLE                        =  0x0601,    ///< Enable Interleaved 2 of 5 decoding.\n Interleaved 2 of 5 is a 1D code mainly used in industrial applications.\n https://en.wikipedia.org/wiki/Interleaved_2_of_5\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_ITF_14_ENABLE                     =  0x0602,    ///< Enable ITF-14 decoding.\n ITF-14 is a standardized version of ITF by GS1. It is designed to mark packages with Global Trade Item Numbers (GTIN).\n https://en.wikipedia.org/wiki/Interleaved_2_of_5\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_ITF_NANO_SCAN                     =  0x0610,    ///< Enable Nano-scan for ITF.\n See documentation of \ref nanoscan "Nano-Scan algorithm" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_ITF_CHECK                         =  0x0630,    ///< Enable validation of checksum for Interleaved 2 of 5.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_ITF_TRANSMIT_CHECK                =  0x0631,    ///< Enable transmission of checksum for Interleaved 2 of 5.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_CODE128_GROUP                  =  0x0700,
    FNX_CODE128_ENABLE                    =  0x0701,    ///< Enable Code 128 decoding.\n Code 128 is a 1D code mainly used in industrial applications.\n https://en.wikipedia.org/wiki/Code_128\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_GS1_128_ENABLE                    =  0x0702,    ///< Enable GS1-128 decoding.\n Formerly known as UCC/EAN-128, it is a subset of Code 128 used in shipping and packaging industries as a product identification code for containers and pallets.\n https://en.wikipedia.org/wiki/Code_128\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_ISBT128_ENABLE                    =  0x0703,    ///< Enable ISBT 128 decoding.\n ISBT 128 is based on Code 128. It is used to identify medical products of human origin.\n https://en.wikipedia.org/wiki/ISBT_128\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_ISBT128_CONCATENATION             =  0x0740,    ///< Enable ISBT 128 concatenation.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : auto</li><li>2 : required</li></ul>
    FNX_CODE128_NANO_SCAN                 =  0x0710,    ///< Enable Nano-scan for Code 128 and GS1-128.\n See documentation of \ref nanoscan "Nano-Scan algorithm" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODE128_DAMAGED_START_STOP        =  0x0750,    ///< Enable Code 128 and GS1-128 decoding with a damaged start or stop.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_GS1_DATABAR_GROUP              =  0x0800,
    FNX_GS1_DATABAR_ENABLE                =  0x0801,    ///< Enable GS1-Databar decoding.\n GS1 Databar is a 1D/stacked code mainly used in retail applications.\n https://www.gs1.org/standards/barcodes/databar\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_GS1_DATABAR_EX_ENABLE             =  0x0802,    ///< Enable GS1-Databar Expanded decoding.\n GS1 DataBar Expanded is a 1D/stacked code designed for applications that require data to be encoded in addition to Global Trade Item Number (GTIN) or Global Coupon Number (GCN)\n https://www.gs1.org/standards/barcodes/databar\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_GS1_DATABAR_LIMITED_ENABLE        =  0x0803,    ///< Enable GS1-Databar Limited decoding.\n GS1 Databar Limited is a 1D code used to encode GTIN-14, designed for applications where space is extremely limited.\n https://github.com/bwipp/postscriptbarcode/wiki/GS1-DataBar-Limited\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
                                              
    // FNX_CODE93_GROUP                   =  0x0900,
    FNX_CODE93_ENABLE                     =  0x0901,    ///< Enable Code 93 decoding.\n Code 93 is a 1D code designed to provide a higher density and data security enhancement to Code 39.\n https://en.wikipedia.org/wiki/Code_93\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_CODABAR_GROUP                  =  0x1000,
    FNX_CODABAR_ENABLE                    =  0x1001,    ///< Enable Codabar decoding.\n Codabar is a 1D code designed to be accurately read even when printed on dot-matrix printers.\n https://en.wikipedia.org/wiki/Codabar\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODABAR_TRANSMIT_START_STOP       =  0x1020,    ///< Enable transmission of Start and Stop codewords for Codabar.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODABAR_CHECK                     =  0x1030,    ///< Enable validation of checksum for Codabar.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_CODABAR_TRANSMIT_CHECK            =  0x1031,    ///< Enable transmission of checksum for Codabar.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_DATAMATRIX_GROUP               =  0x2000,
    FNX_DATAMATRIX_ENABLE                 =  0x2001,    ///< Enable Datamatrix decoding.\n Datamatrix is a 2D code mainly used in industrial applications.\n https://en.wikipedia.org/wiki/Data_Matrix\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_GS1_DATAMATRIX_ENABLE             =  0x2002,    ///< Enable GS1-Datamatrix decoding.\n GS1-Datamatrix is a Datamatrix that contains data structured according to the rules of the GS1 System.\n https://www.gs1.org/standards/gs1-datamatrix-guideline/25\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_DATAMATRIX_DAMAGED                =  0x2010,    ///< Enable Damaged datamatrix decoding.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_QR_CODE_GROUP                  =  0x2100,
    FNX_QR_CODE_ENABLE                    =  0x2101,    ///< Enable QR Code decoding.\n QR Code is a 2D code most often used for consumer applications.\n https://en.wikipedia.org/wiki/QR_code\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
                                              
    // FNX_PDF417_GROUP                   =  0x2200,
    FNX_PDF417_ENABLE                     =  0x2201,    ///< Enable PDF417 decoding.\n PDF417 is a stacked symbology that can be read using a 1D reader.\n https://en.wikipedia.org/wiki/PDF417\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
                                              
    // FNX_AZTEC_GROUP                    =  0x2300,
    FNX_AZTEC_ENABLE                      =  0x2301,    ///< Enable Aztec decoding.\n Aztec is a 2D code mainly used for tickets.\n https://en.wikipedia.org/wiki/Aztec_Code\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_MRZ_GROUP                      =  0x4000,
    FNX_MRZ_ENABLE                        =  0x4001,    ///< Enable MRZ OCR decoding.\n MRZ is a machine-readable zone of text on identity documents (passports specifically).\n https://en.wikipedia.org/wiki/Machine-readable_passport\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    
    // FNX_OPERATING_GROUP                =  0x8000,
    FNX_OPERATING_MULTI_THREAD            =  0x8001,    ///< Enable multithreaded decoding.\n See documentation of \ref multithread "Multi-thread support" for more information.\n Valid input values are: <ul><li>0 : disable</li><li>1 : enable (default)</li></ul>
    FNX_OPERATING_N_MULTI_SCALE_ENABLE    =  0x8002,    ///< Enable multi-scale decoding.\n See documentation of \ref multiscale "Multi-scale analysis" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_OPERATING_N_MULTI_SCALE           =  0x8003,    ///< Set number of scales used in multi-scale decoding.\n See documentation of \ref multiscale "Multi-scale analysis" for more information.\n Valid input values are: <ul><li>2 : 2 scales (default)</li><li>3 : 3 scales</li></ul>
    FNX_OPERATING_N_CODES_EXPECTED_ENABLE =  0x8005,    ///< Enable automatic termination of the decoding process after N reading success per image.\n See documentation of \ref stopndecode "Stopping the decoder after N decodes or timeout" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_OPERATING_N_CODES_EXPECTED        =  0x8006,    ///< Set the number of barcode N to be decoded per image for the decoding process to terminate.\n See documentation of \ref stopndecode "Stopping the decoder after N decodes or timeout" for more information.
    FNX_OPERATING_TIME_OUT_ENABLE         =  0x8007,    ///< Enable automatic termination of the decoding process after timeout.\n See documentation of \ref stopndecode "Stopping the decoder after N decodes or timeout" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_OPERATING_TIME_OUT                =  0x8008,    ///< Set the timeout value in milliseconds for the decoding process to terminate after timeout.\n See documentation of \ref stopndecode "Stopping the decoder after N decodes or timeout" for more information.
    FNX_OPERATING_CUDA_ENABLE             =  0x8009,    ///< Enable CUDA optimization for NVIDIA GPUs.\n See documentation of \ref cuda "CUDA optimizations" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_PROCESSING_1D_GROUP            =  0x8100,
    FNX_PROCESSING_1D_HIGH_DENSITY        =  0x8102,    ///< Enable search for 1D high density codes. Enabling this option favours the detection of small and dense 1D barcodes at the expense of very large ones.\n See documentation of \ref highdensity "1D High density" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_PROCESSING_1D_DAMAGED             =  0x8103,    ///< Enable additional processing for improving 1D damaged codes reading at the expense of decoding time.\n Valid input values are: <ul><li>0 : disable</li><li>1 : mild (default)</li><li>2 : aggressive</li></ul>
    FNX_PROCESSING_1D_ORIENTATION         =  0x8104,    ///< Set search direction of 1D barcodes in the image to reduce decoding time.\n See documentation of \ref orientation "1D Orientation" for more information.\n Valid input values are: <ul><li>0 : any directions (default)</li><li>1 : horizontal +/- 45° </li><li>2 : vertical +/- 45°</li></ul>
    FNX_PROCESSING_1D_LOW_CONTRAST        =  0x8105,    ///< Enable detection 1D barcodes with very low contrast at the expense of decoding time.\n See documentation of \ref lowcontrast "1D Low contrast" for more information.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_PROCESSING_1D_PERSPECTIVE         =  0x8106,    ///< Optimize scanning direction in case of high perspective. Enabling this setting increase decoding time.\n Valid input values are: <ul><li>0 : standard algorithm (default)</li><li>1 : improved algorithm</li></ul>
    FNX_PROCESSING_1D_LOW_HEIGHT          =  0x8107,    ///< Enable search for very low height 1D barcodes. As this feature is very CPU intensive, it should only be enabled if it is really needed.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_PROCESSING_2D_GROUP            =  0x8200,
    FNX_PROCESSING_2D_EXTENSIVE_SEARCH    =  0x8201,    ///< Enable extensive search for large number of 2D barcodes. Enabling this settings to decode several hundred 2D barcodes in large images.\n Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>
    FNX_PROCESSING_2D_LOW_CONTRAST        =  0x8202,    ///< Enable detection 2D barcodes with very low contrast at the expense of decoding time. Valid input values are: <ul><li>0 : disable (default)</li><li>1 : enable</li></ul>

    // FNX_DECODER_INFO_GROUP             =  0xFF00,
    FNX_DECODER_BUILD_DATE                =  0xFF01,    ///< Return the date of the decoder build as a C string (Read only setting).
    FNX_DECODER_N_MAX_INSTANCES           =  0xFF02,    ///< Return the maximum number of decoder instances that can be created simultaneously, see fnxCreateDecoder API function (Read only setting).
    FNX_DECODER_SCAN_MODE                 =  0xFF03,    ///< Return the scan mode (Read only setting). \n Returned values can be: <ul><li>0 : Item-Scan (single barcode scans)</li><li>1 : Multi-Scan (up to 5 codes per image)</li><li>2 : Maxi-Scan (unlimited codes per image)</li></ul>
    FNX_DECODER_CUDA_CAPABILITIES         =  0xFF10,    ///< Return the CUDA capabilities as a C string (Read only setting). \n Returned strings can be: <ul><li>"Not supported" : CUDA algorithms are not built in the decoder library</li><li>"No device found" : No supported NVidia GPU has been found</li><li>"Xavier", "Volta" ... : Name of the CUDA architecture</li></ul>

} fnxSettingTag;

#endif
