.\bitepicness -u > RESULTS.out
if (Get-Content RESULTS.out | Select-String "PASS" -quiet)
{
    echo "PASSED"
}
else
{
    echo "FAILED"
}