Get-Content ./dependencies.txt |
ForEach-Object {
  arduino-cli lib install "$_"
}
