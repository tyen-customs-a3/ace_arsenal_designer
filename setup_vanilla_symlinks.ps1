# PowerShell script to create symbolic link for vanilla Arma 3 configs
# Run this as Administrator

Write-Host "Creating symbolic link for vanilla Arma 3 configs..." -ForegroundColor Green

# Change to the addons directory
Set-Location -Path "$PSScriptRoot\data\addons"

# Create single symbolic link for entire a3 directory
$target = "P:\a3"
$linkName = "a3"

Write-Host "Creating symlink: $linkName -> $target" -ForegroundColor Yellow

if (Test-Path $target) {
    New-Item -ItemType SymbolicLink -Path $linkName -Target $target -ErrorAction SilentlyContinue
    Write-Host "✓ Created successfully" -ForegroundColor Green
} else {
    Write-Host "✗ Target path not found: $target" -ForegroundColor Red
}

Write-Host "`nSymbolic link setup complete!" -ForegroundColor Green
Write-Host "You can now access vanilla configs through data/addons/a3/ directory" -ForegroundColor Cyan