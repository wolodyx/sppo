jupyter-book build --all --builder html .

if command -v marp &> /dev/null
then
  marp_command="marp"
else
  marp_command="npx @marp-team/marp-cli@latest"
fi

# Two formats of the presentation: html and pdf.
mkdir -p _build/html/report
for file in report/*.md
do
  file_html=`echo $file | sed 's/\.md/\.html/'`
  $marp_command $file -o _build/html/$file_html
  file_pdf=`echo $file | sed 's/\.md/\.html/'`
  $marp_command $file -o _build/html/$file_pdf
done
