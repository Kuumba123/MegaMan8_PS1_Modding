import re
import struct
import os
import subprocess

def extract(plugin_path: str, game_path: str, game_version: str) -> None:
    pass

def build(plugin_path: str, game_path: str, game_version: str) -> None:
    if game_version == "japan":
        return
    current_directory = os.getcwd()
    mod_name = current_directory.split('\\')[-1]
    os.chdir(current_directory + "/../../build")
    args = ["MM8_" + mod_name + ".xml", "-noisogen", "-lbahead", "LBA.H"]
    result = subprocess.run(['mkpsxiso.exe'] + args, capture_output=True, text=True)
    for line in result.stdout:
        print(line, end='')

    # Read lines from the file "LBA.H"
    with open("LBA.H", "r") as file:
        lines = file.readlines()

    # Create a binary stream and binary writer
    with open("MM8_" + mod_name + "/SLUS_004.53", 'rb') as file:
        file_contents = file.read()
    ms = bytearray(file_contents)

    # Define the DiscFiles list
    DiscFiles = [
    "LBA_SLUS_004_53",
    "LBA_SYSTEM_CNF",
    "LBA_CAPCOM15_STR",
    "LBA_ROCK8_0_STR",
    "LBA_ROCK8_1_STR",
    "LBA_ROCK8_2_STR",
    "LBA_ROCK8_3_STR",
    "LBA_ROCK8_4_STR",
    "LBA_DEMO_BIN",
    "LBA_STAGE00_BIN",
    "LBA_STAGE01_BIN",
    "LBA_STAGE02_BIN",
    "LBA_STAGE03_BIN",
    "LBA_STAGE04_BIN",
    "LBA_STAGE05_BIN",
    "LBA_STAGE06_BIN",
    "LBA_STAGE07_BIN",
    "LBA_STAGE08_BIN",
    "LBA_STAGE09_BIN",
    "LBA_STAGE0A_BIN",
    "LBA_STAGE0B_BIN",
    "LBA_STAGE0C_BIN",
    "LBA_STAGE0D_BIN",
    "LBA_PBGM00_PAC",
    "LBA_PBGM01_PAC",
    "LBA_PBGM02_PAC",
    "LBA_PBGM03_PAC",
    "LBA_PBGM04_PAC",
    "LBA_PBGM05_PAC",
    "LBA_PBGM06_PAC",
    "LBA_PBGM07_PAC",
    "LBA_PBGM08_PAC",
    "LBA_PBGM09_PAC",
    "LBA_PBGM0A_PAC",
    "LBA_PBGM0B_PAC",
    "LBA_PBGM0C_PAC",
    "LBA_PBGM0D_PAC",
    "LBA_PBGM0E_PAC",
    "LBA_PBGM0F_PAC",
    "LBA_PBGM10_PAC",
    "LBA_PBGM11_PAC",
    "LBA_PBGM12_PAC",
    "LBA_PBGM13_PAC",
    "LBA_PBGM14_PAC",
    "LBA_PBGM15_PAC",
    "LBA_PBGM16_PAC",
    "LBA_PBGM17_PAC",
    "LBA_PBGM18_PAC",
    "LBA_PBGM19_PAC",
    "LBA_PBGM1A_PAC",
    "LBA_PBGM1B_PAC",
    "LBA_PBGM1C_PAC",
    "LBA_PBGM1D_PAC",
    "LBA_PBGM1E_PAC",
    "LBA_PBGM1F_PAC",
    "LBA_PBGM20_PAC",
    "LBA_PBGM21_PAC",
    "LBA_PBGM22_PAC",
    "LBA_PBGM23_PAC",
    "LBA_PBGM24_PAC",
    "LBA_PBGM25_PAC",
    "LBA_PBGM26_PAC",
    "LBA_PBGM27_PAC",
    "LBA_PBGM28_PAC",
    "LBA_PBGM29_PAC",
    "LBA_PBGM2A_PAC",
    "LBA_PBGM2B_PAC",
    "LBA_PBGM2C_PAC",
    "LBA_PBGM2D_PAC",
    "LBA_PBGM2E_PAC",
    "LBA_PBGM2F_PAC",
    "LBA_PBGM30_PAC",
    "LBA_PBGM31_PAC",
    "LBA_PBGM32_PAC",
    "LBA_PBGM33_PAC",
    "LBA_PBGM34_PAC",
    "LBA_PBGM35_PAC",
    "LBA_PBGM36_PAC",
    "LBA_PBGM37_PAC",
    "LBA_PBGM38_PAC",
    "LBA_PBGM39_PAC",
    "LBA_PBGM3A_PAC",
    "LBA_PBGM3B_PAC",
    "LBA_PBGM3C_PAC",
    "LBA_PBGM3D_PAC",
    "LBA_PBGM3E_PAC",
    "LBA_PBGM3F_PAC",
    "LBA_PBGM40_PAC",
    "LBA_PBGM41_PAC",
    "LBA_PBGM42_PAC",
    "LBA_PBGM43_PAC",
    "LBA_PBGM44_PAC",
    "LBA_PBGM45_PAC",
    "LBA_PCOMMON_PAC",
    "LBA_BOSSAQU_PAC",
    "LBA_BOSSAST_PAC",
    "LBA_BOSSCLO_PAC",
    "LBA_BOSSDUO_PAC",
    "LBA_BOSSFRO_PAC",
    "LBA_BOSSGRE_PAC",
    "LBA_BOSSSEA_PAC",
    "LBA_BOSSSWD_PAC",
    "LBA_BOSSTNG_PAC",
    "LBA_COMNCHAR_PAC",
    "LBA_ENDING_PAC",
    "LBA_GETDEMO_PAC",
    "LBA_LABO_PAC",
    "LBA_OVER_PAC",
    "LBA_PDEMO00_PAC",
    "LBA_PDEMO01_PAC",
    "LBA_PDEMO02_PAC",
    "LBA_PDEMO03_PAC",
    "LBA_PDEMO04_PAC",
    "LBA_PLAYER_PAC",
    "LBA_SELECT_PAC",
    "LBA_STAGE00_PAC",
    "LBA_STAGE01_PAC",
    "LBA_STAGE02_PAC",
    "LBA_STAGE02B_PAC",
    "LBA_STAGE03_PAC",
    "LBA_STAGE03B_PAC",
    "LBA_STAGE04_PAC",
    "LBA_STAGE04B_PAC",
    "LBA_STAGE05_PAC",
    "LBA_STAGE05B_PAC",
    "LBA_STAGE06_PAC",
    "LBA_STAGE06B_PAC",
    "LBA_STAGE07_PAC",
    "LBA_STAGE07B_PAC",
    "LBA_STAGE08_PAC",
    "LBA_STAGE08B_PAC",
    "LBA_STAGE09_PAC",
    "LBA_STAGE0A_PAC",
    "LBA_STAGE0B_PAC",
    "LBA_STAGE0C_PAC",
    "LBA_STAGE0D_PAC",
    "LBA_WILY_PAC",
    "LBA_W_DEVIL_PAC",
    "LBA_END1_DA"]


    Const = {"FileDataAddress": 0x80136f7c}

    # Iterate through each line in the "LBA.H" file
    for line in lines:
        if not line.strip():
            continue

        words = re.sub(r' {2,}', ' ', line.strip()).split()

        if words[0] != "#define":
            continue

        for file in DiscFiles:
            if file != words[1]:
                continue

            i = DiscFiles.index(file) * 12
            i += (Const["FileDataAddress"] - 0x800C0000 + 0x800)

            sector = int(words[2], 16) if '0x' in words[2] else int(words[2])

            # Seek to the appropriate position in the binary stream and write the sector
            if sector > 0:
                struct.pack_into('I', ms, i, sector)
    
    # Save the result to a file
    with open("MM8_" + mod_name + "/SLUS_004.53", "wb") as file:
        file.write(ms)
    
    os.chdir(current_directory)
    pass