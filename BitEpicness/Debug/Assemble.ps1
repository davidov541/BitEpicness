$assemblies = Get-ChildItem *.asm -name
foreach($assembly in $assemblies) {
    .\bitepicness.exe -a $assembly
    Write-Host "Assembled " -nonewline
    Write-Host $assembly -nonewline
    Write-Host " Successfully!"
}
Copy-Item *.coe ..\..\..\Verilog\BitEpicness -force
Copy-Item *.asm ..\..\..\Verilog\BitEpicness -force